
import numpy as np
import math

precision = np.float32
EPS = 1.0e-6

def norm (x):
	return np.linalg.norm(x)

def delayed_time (current_time, delay):
	"""
	Return: time step >= 0
	"""
	return max(current_time - delay, 0)

def grad(a,b):
	#return a / b
	return 1.0

def linear(a, b):
	"""
	Description:
		linear function
	"""
	return a * b

def f(state, features):
	"""
	Description:
		approximated function
	"""
	return linear(state, features)

def v(state,features):
	return f(state, features)

def G(history_s, gamma, t0, t): 

	g = 0.0

	for time in range(t, t0):
		g += pow(gamma, time) * history_s[i]

	return g


def reward(next_s, s):
	#print(next_s, s)
	r = np.true_divide((next_s - s)+EPS, s+EPS)
	return r

def action(state, time, delay):

	s = state[delayed_time(time, delay)]
	next_s = state[time]

	#print("\t=== Action ===")
	#print("\tcurernt state =", s)
	#print("\tforward state =", next_s)

	return next_s

def read_state(dirname):
	import json
	import decimal
	import glob

	num_history_s = 0

	files = glob.glob(dirname)
	print(files)

	json_data = list(map(lambda x: json.load(open(x)), files))

	tmp = list(map(lambda x: np.array(sorted(json_data[x]['Close'].items())), range(0, len(json_data))))
	state = []
	for item in tmp:
		tmp2 = list(map(lambda x: float(x[1]), item))
		state.append(np.array(tmp2))

	return state, len(files)

if __name__ == "__main__":

	alpha = 0.01
	gamma = 0.98
	episodes = 4
	max_update = 3
	#t0 = 1
	t0 = 0
	delay = 1

	#
	# read input data
	#
	#s, SIZE = read_state("./small_batch/*.json") 
	s, SIZE = read_state("./test/*.json") 

	next_s = list(map(lambda x: x, np.zeros(SIZE)))
	w = np.ones(SIZE)
	history_s = [np.array([])]*SIZE
	rewards = [np.array([])]*SIZE

	#
	# initial value setup
	#
	for i in range(0,len(next_s)):
		history_s[i] = np.append(history_s[i], s[i][0])

	#next_s = list(map(lambda x: action(x, t0+1, delay), s))
	#r = list(map(lambda i: reward(next_s[i], s[i][0]), range(0, len(next_s))))

	print("=== Initial ===")
	#print("next state =", next_s)
	print('\n')


	#--------------------------------------------------------------------------------
	for t in range(t0+1, episodes): 
	#---------------------------------------------------------------------------------

		print("time =", t)

		_norm = 1.0e+9
		counter = 0

		next_s = list(map(lambda x: action(x, t, delay), s))

		for i in range(0,len(next_s)):
			history_s[i] = np.append(history_s[i], next_s)

		#-----------------------------------------------------------------------------
		while True:
		#-----------------------------------------------------------------------------

			#
			# Get trail states and correcponding reward
			#
			next_s = list(map(lambda x: action(x, t, delay), s))

			r = list(map(lambda i: reward(next_s[i], s[i][t]), range(0, len(next_s))))
			print("\t === Searching ===")
			print("\tnext state =", next_s)
			print("\treward =", r)

			#
			# TD error
			#

			# check G
			print(list(map(lambda i: G(history_s[i],gamma,t0,t), range(0, len(history_s)))))

			_err_td = list(map(lambda i:  
						G(history_s[i],gamma,t0,t) + gamma * v(history_s[i][delayed_time(t,delay)],w[i]),
						range(0, len(history_s))))
			err_td = np.array(_err_td)	

			#
			# Check Convergence
			#
			_norm = norm(err_td)
			print("\tNorm =", _norm)

			if _norm < 1.0e-3:
				print("\tConverged Norm =", _norm)

				s = next_s

				#
				# Store state and reward for discounted rewards
				#
				for i in range(0,len(next_s)):
					history_s[i] = np.append(history_s[i], next_s[i])

				for i in range(0,len(r)):
					rewards[i] = np.append(rewards[i], r[i])

				print(history)
				print(rewards)

				break

			if counter >= max_update:
				print("\n=== Error Termination ===\n Reached maximum iteration =", counter)
				exit()

			#
			# TD(0) update		
			#
			_w = list(map(lambda i, j: 
					w + alpha*(err_td - v(history_s[i][t],w[j]) * grad(history_s, w[j])),
					range(0, len(history_s[0])), range(0, len(w))))
			w = np.array(_w)
	
			counter += 1
			print('\n')

			# end of while True:
