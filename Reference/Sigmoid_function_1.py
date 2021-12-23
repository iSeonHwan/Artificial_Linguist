# define: Sigmoid function version 1
# date: 2021.12.23.
# Resource: 밑바닥부터 시작하는 인공지능(사이토고키, 2017)

def sigmoid(x):
	return 1 / (1+ np.exp(-x)) # exp is function to caculate the exponential of all elements in the input array. 

if __name__ == '__main__':
	import numpy as np
	import matplotlib.pylab as plt
	
	x = np.arange(-5.0, 5.0, 0.1)
	y = sigmoid(x)

	plt.plot(x, y)
	plt.ylim(-0.1, 1.1)
	plt.show()

