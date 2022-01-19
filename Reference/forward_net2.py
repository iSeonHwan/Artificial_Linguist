# define: forward propagation code(python version)
# date: 2022.1.19.
# Resource: 밑바닥부터 시작하는 인공지능(사이토고키, 2017)


class TwoLayerNet:
	def __init__(self, input_size, hidden_size, output_size):
		I, H, O = input_size, hidden_size, output_size
		
		#initialization of weight value
		W1 = np.random.randn(I, H)
		b1 = np.random.randn(H)
		W2 = np.random.randn(H, O)
		b2 = np.random.randn(O)
		
		#ganerate layer
		self.layers = [
			Affine(W1, b1),
			Sigmoid(),
			Affine(W2, b2)
		]

		# gather all weight value to list.
		self.params = []
		for layer in self.layers:
			self.params += layer.params
		
		def predict(self, x):
			for layer in self.layers:
				x = layer.forward(x)
			
			return x
 
	
		
