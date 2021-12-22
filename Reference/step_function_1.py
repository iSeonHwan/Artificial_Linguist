# define: Step function version1
# date: 2021.12.22.
# Resource: 밑바닥부터 시작하는 인공지능(사이토고키, 2017)

def step_function(x):
  y = x > 0
  return y.astype(np.int) #numpy.ndarray.astype is function to copy of the array, cast to a specified type.

