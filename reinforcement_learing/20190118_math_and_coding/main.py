"""
Author:
	Yosuke OTSUKI

Date:
	2019 Jan 19th

License:
	Python 2.0

Reference:
	Chapter 9 of R.Sutton's Reinforcement Learning: An Introduction	
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

	def linear(self):
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
			pass

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

	def reward(self):
		return self._reward

	def value(self):
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

	w = bellman.semi_grad.feature_vector(3)	# feature vector
	s = bellman.state() 					# stock prince
	r = bellman.reward()					# reward
	f = function.linear() 					# approximation function
	v = bellman.value()						# value

	#w += td0.update(w + a*(r + gamma*v.get(s,w) - v.get(s,w)))grad(v.get(s,w))
	#w += td0.update(w + a*(r + gamma*v.get(s,w) - v.get(s,w)))grad(v.get(s,w))
