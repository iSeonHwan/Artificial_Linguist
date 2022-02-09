# define: Softmax function version 1
# date: 2022. 2. 9.
# Resource: 밑바닥부터 시작하는 인공지능(사이토고키, 2017)

def softmax(a):
	c = np.max(a)
	exp_a = np.exp(a-c) # to prevent overflow.
	sum_exp_a = np.sum(exp_a)
	y = exp_a / sum_exp_a
  
  return y
