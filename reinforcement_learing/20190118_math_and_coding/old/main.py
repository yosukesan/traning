"""
Author:
	Yosuke OTSUKI

Date:
	2019 Jan 19th

License:
	Python 2.0

Reference:
	R.Sutton, 2018, Reinforcement Learning: An Introduction, MIT Press

Note:
	This code uses semi gradient descent method from Sutton's book in P.203
"""

import numpy

#==============================================================================
class Function:
#==============================================================================
	"""
	Description:
		Approximation function
	"""

	class Linear:
		def __init__(self):
			print("\tMode: Linear")

		def get(self, state, wight):
			return state * weight 
	
	def __init__(self):
		print("selecting Function")

	def linear(self, value):
		return self.Linear()
		

#==============================================================================
class SemiGrad:
#==============================================================================
	"""
	Description:
		semi gradient function approximation

	"""

	class TD0:
		def __init__(self):
			print("\tMode: Temporal Difference 0")

		def update(self):
			pass

	class Feature_Vector:

		def __init__(self):
			pass

		def set(self, size):
			self._weight = numpy.zeros(size)

		def get(self):
			return self._weight

	def __init__(self):
		print("selecting Semi-Gradient")
		self.td0 = self.TD0()
		self._w = self.Feature_Vector()

	def temporal_difference0(self): 
		return self.td0

	def feature_vector(self, size): 
		return self._w.set(size)


#==============================================================================
class Bellman:
#==============================================================================

	class State:
		"""
		Description:
			reward
		"""
		
		def __init__(self):
			import glob
			import json
			from datetime import datetime, timedelta, timezone
			from collections import OrderedDict
			from operator import itemgetter

			JST = timezone(timedelta(hours=+9), 'JST')

			tmp = []
	
			#-----------------------------------	
			f = open("./test/test.data").read()
			for i in f.split('\n'):
				if len(i) != 0:
					tmp.append(float(i.split(' ')[1]))

			self._state = numpy.asarray(tmp)
			print(self._state)
			#-----------------------------------	

			#for json_file in glob.glob("./small_batch/*.json"):
			#	print(json_file)
			#	json_data = json.load(open(json_file))
			#	history = dict(list(map(lambda i: [datetime.fromtimestamp(float(i)*0.001).date(), json_data['Close'][i]], json_data['Close'])))
			#	self._state.append(history)
			#
			#for i in self._state:	
			#	print(i)
	
		def get(self, time):
			return self._state

		def update(self, state):
			self._state = state

		def append(self, state):
			self._state.append(state)

		def dim(self):
			return len(self._state)

	class Reward:
		"""
		Description:
			reward
		"""

		def __init__(self):
			self._reward = []

		def get(self, state, time):
			print(state.get(time))
			next_s = state.get(time+1)
			s = state.get(time)
			return 100.0 * (next_s - s)*(1.0/next_s)

		def append(self, reward):
			self._reward.append(reward)

	class Value:
		"""
		Description:
			value fucntion
		"""

		def __init__(self):
			pass

		def get(self, state, time, feature_vector):
			pass

		
	class Action:
		
		def __init__(self):
			pass

		def get(self, state):
			reward = 0 
			return state, reward

	def __init__(self):
		self.semi_grad = SemiGrad()
		self._state = self.State()
		self._reward = self.Reward()
		self._value = self.Value()
		self._action = self.Action()

	def action(self):
		return self._action

	def state(self):
		return self._state

	def reward(self, value):
		return self._reward

	def value(self, state, feature_vector):
		return self._value


#==============================================================================
if __name__ == "__main__":
#==============================================================================
	
	bellman = Bellman()
	function = Function()
	td0 = bellman.semi_grad.temporal_difference0()

	alpha = 0.3  # step size in gradient secant method
	gamma = 0.98 # discount rate
	t = 0
	
	history_s = []
	history_r = []

	s = bellman.state() 	# stock prince
	w = bellman.semi_grad.feature_vector(s.dim())	# feature vector
	a = bellman.action()	# action
	v = bellman.value(s, w)	# value
	r = bellman.reward(v)	# reward
	f = function.linear(v) 	# approximation function

	while t < 3:
		while True:

			# check
			#print(r.get(s,t))

			next_s, next_r = a.get(s)
			history_s.append(next_s)
			history_r.append(next_r)

			w = w + alpha * r.get(s,t)
			#w = w + alpha * (r.get(s,t) +gamma*v.get(f,t,w) - v.get(s,t,w))

			break
		t += 1

	# check matrix vector multiplication
	#m = numpy.matrix([[1,0,0], [0,1,0], [0,0,2]])
	#print (0.3 * (w + 1) * m)
