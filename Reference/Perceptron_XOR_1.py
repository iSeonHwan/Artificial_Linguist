# define: Perceptron XOR version example 1
# date: 2021.12.07.
# Resource: 밑바닥 인공지능(사이토코기)

def AND(x1, x2):
	w1, w2, theta = 0.5, 0.5, 0.7
	tmp = x1*w1 + x2*w2
	if tmp <= theta:
		#print('0')
		return 0
	elif tmp > theta:
		#print('1')
		return 1


def OR(x1, x2):
	x = np.array([x1, x2]) # 'x' is input data.
	w = np.array([0.5, 0.5]) # 'w' is weight of input data. 
	b = -0.2 # 'b' is bais value.
	tmp = np.sum(w*x) + b
	if tmp <= 0:
		#print('0')
		return 0
	else:
		#print('1')
		return 1

def NAND(x1, x2):
	x = np.array([x1, x2]) # 'x' is input data.
	w = np.array([-0.5, -0.5]) # 'w' is weight of input data. 
	b = 0.7 # 'b' is bais value.
	tmp = np.sum(w*x) + b
	if tmp <= 0:
		#print('0')
		return 0
	else:
		#print('1')
		return 1

#XOR gate is multi-layter perceptron.
def XOR(x1, x2):
	s1 = NAND(x1, x2)
	s2 = OR(x1, x2)
	y = AND(s1, s2)
	print(y)
	return y


if __name__ == '__main__':
	import numpy as np
	
	XOR(0, 0)
	XOR(1, 0)
	XOR(0, 1)
	XOR(1, 1)

