# define: Perceptron NAND version example 2
# date: 2021.12.03.
# Resource: 밑바닥 인공지능(사이토코기)

def OR(x1, x2):
	x = np.array([x1, x2]) # 'x' is input data.
	w = np.array([0.5, 0.5]) # 'w' is weight of input data. 
	b = -0.2 # 'b' is bais value.
	tmp = np.sum(w*x) + b #numpy.sum() is sum function of array elements over a given axis. numpy.sum(a, axis = None, dtype = None, out = None, keepdims = <no value>, initial = <no value>, where = <no value>)
	if tmp <= 0:
		print('0')
		return 0
	else:
		print('1')
		return 1

if __name__ == '__main__':
	import numpy as np
	
	OR(0, 0)
	OR(1, 0)
	OR(0, 1)
	OR(1, 1)


#resource: “numpy.sum — NumPy v1.21 Manual”. 접근된 2021년 12월 2일. https://numpy.org/doc/stable/reference/generated/numpy.sum.html.

