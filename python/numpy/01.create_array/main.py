

import numpy as np

if __name__ == "__main__":

	history = []

	a = np.arange(3, dtype=np.int32)
	print(a)

	c = np.asarray([5,4,6],dtype=np.int32)
	print(c)

	history.append(a)
	history.append(c)

	print(history)

	b = np.zeros(3)
	#print(b)

	
