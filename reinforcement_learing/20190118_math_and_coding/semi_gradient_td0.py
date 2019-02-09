
import numpy as np

precision = np.float32
EPS = 1.0e-6

def delayed_time (current_time, delay):
	return max(current_time - delay, 0)

def grad(a,b):
	"""
	Description:
		Generate grad
	"""
	return a * b

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

def G(state, start, end): 
	return 0 

def action(state, time, delay):

	print("\t=== Action ===")
	print("\tforward state =", state[time])
	print("\tcurernt state =", state[time-delay])

	s = state[delayed_time(time, delay)]
	next_s = state[time]

	reward = 100.0 * np.true_divide((next_s - s)+EPS, s+EPS)

	return next_s, reward 

def read_state(dirname):
	import json
	import decimal
	import glob

	num_states = 0

	files = glob.glob(dirname)
	print(files)

	json_data = list(map(lambda x: json.load(open(x)), files))

	tmp = list(map(lambda x: np.array(sorted(json_data[x]['Close'].items())), range(0, len(json_data))))
	state = []
	for item in tmp:
		#print (list(map(lambda x: x[0], item))) # time
		tmp2 = list(map(lambda x: float(x[1]), item))
		state.append(np.array(tmp2))

	#size = list(map(lambda x: x.size, state))

	return state, len(files)

def accumulate(g, state, time):

	summation = list(map(lambda x: g+x[time], state))

	return summation

if __name__ == "__main__":

	alpha = 0.1
	gamma = 0.8
	episodes = 2
	start_t = 0
	t = 0
	delay = 1

	#
	# read input data
	#
	#s, SIZE = read_state("./small_batch/*.json") 
	s, SIZE = read_state("./test/*.json") 

	next_s = list(map(lambda x: x, np.zeros(SIZE, dtype=precision)))
	g = list(map(lambda x: x, np.zeros(SIZE, dtype=precision)))
	w = np.ones(SIZE, dtype=precision)
	states = []
	rewards = []

	#
	# initial value setup
	#
	next_s, r = list(map(lambda x: action(x, 0, 0), s))
	states.append(np.array(next_s))
	rewards.append(np.array(rewards))

	#--------------------------------------------------------------------------------
	for i in range(start_t, episodes): 
	#---------------------------------------------------------------------------------

		err_td = 1.0e+6
		t += 1

		print("time =", t)

		next_s, r = list(map(lambda x: action(x, t, delay), s))

		#
		# Store state and reward for discounted rewards
		#
		states.append(np.array(next_s))
		rewards.append(np.array(rewards))

		#
		# this is a message for debug
		#
		#print ("\tstates", states)

		#-----------------------------------------------------------------------------
		while err_td > 1.0e-6:
		#-----------------------------------------------------------------------------
	
			#
			# TD(0) update		
			#
			err_td = 

			ww = list(map(lambda i, j: 
					w + alpha* G(states[t][i],start_t,t) + gamma * v(states[delayed_time(t,delay)][i],w[j]) - v(states[t][i],w[j]) * grad(states[t][i], w[j]),
					range(0, len(states[0])), range(0, len(w))))
			w = np.array(ww)
			print(np.array(ww))
	
			#w += alpha * (accumulate(g, states,t-1) + gamma * v(states[t-1],w) - v(states[t],w)) * grad(v(states[t-1],w), w)

			err_td = 1.0e-7

		#s = next_s
		

