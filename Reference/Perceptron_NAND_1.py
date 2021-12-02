# define: Perceptron NAND version example 2
# date: 2021.12.03.
# Resource: 밑바닥 인공지능(사이토코기)

def NAND(x1, x2):
	x = np.array([x1, x2]) # 'x' is input data.
	w = np.array([-0.5, -0.5]) # 'w' is weight of input data. 
	b = 0.7 # 'b' is bais value.
	tmp = np.sum(w*x) + b
	if tmp <= 0:
		print('0')
		return 0
	else:
		print('1')
		return 1

if __name__ == '__main__':
	import numpy as np
	
	NAND(0, 0)
	NAND(1, 0)
	NAND(0, 1)
	NAND(1, 1)

