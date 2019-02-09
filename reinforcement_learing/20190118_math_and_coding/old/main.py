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

			self._state = []
			
			for json_file in glob.glob("./small_batch/*.json"):
				print(json_file)
				json_data = json.load(open(json_file))
				history = dict(list(map(lambda i: [datetime.fromtimestamp(float(i)*0.001).date(), json_data['Close'][i]], json_data['Close'])))
				self._state.append(history)
			
			for i in self._state:	
				print(i)

	
		def get(self):
			pass

		def update(self):
			pass

	class Reward:
		"""
		Description:
			reward
		"""

		def __init__(self):
			pass

		def get(self, gamma):
			pass

	class Value:
		"""
		Description:
			value fucntion
		"""

		def __init__(self):
			pass

		def get(self, delay):
			pass

	def __init__(self):
		self.semi_grad = SemiGrad()
		self._state = self.State()
		self._reward = self.Reward()
		self._value = self.Value()

	def state(self):
		return self._state

	def reward(self, value):
		return self._reward

	def value(self, state):
		return self._value


#==============================================================================
class Control:
#==============================================================================
	"""
	Description
		General control parameters for reinforcement learing
	"""

	def __init__(self):
		self.episode = 10
		self.episode_max = 0
		self.t = 0
		self.t_max = 0

#==============================================================================
if __name__ == "__main__":
#==============================================================================
	
	bellman = Bellman()
	control = Control()
	function = Function()
	td0 = bellman.semi_grad.temporal_difference0()

	alpha = 0.3  # step size in gradient secant method
	gamma = 0.98 # discount rate

	num_features = 3

	w = bellman.semi_grad.feature_vector(num_features)	# feature vector
	s = bellman.state() 					# stock prince
	v = bellman.value(s)					# value
	r = bellman.reward(v)					# reward
	f = function.linear(v) 					# approximation function

	# check matrix vector multiplication
	#m = numpy.matrix([[1,0,0], [0,1,0], [0,0,2]])
	#print (0.3 * (w + 1) * m)

	#w += td0.update(w + a*(r + gamma*v.get(s,w) - v.get(s,w)))grad(v.get(s,w))
	#w += td0.update(w + a*(r + gamma*v.get(s,w) - v.get(s,w)))grad(v.get(s,w))
