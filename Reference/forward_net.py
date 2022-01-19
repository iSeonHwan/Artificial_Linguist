# define: forward propagation code(python version)
# date: 2022.1.19.
# Resource: 밑바닥부터 시작하는 인공지능(사이토고키, 2017)

import numpy as np

class Sigmoid:
	def __init__(self):
		self.params = [] #empty list as initialization.
	
	def forward(self, x):
		return 1 / ( 1+np.exp(-x) )

class Affine:
	def __init__(self, W, b):
		self.params = [W, b]
	
	def forward(self, x):
		W, b = self.params
		out = np.matmul(x, W) + b
		return out

	
	
		
