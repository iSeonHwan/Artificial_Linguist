# definition: ReLU example version 1 py
# date: 2021.12.29.
# Resource: 밑바닥부터 시작하는 인공지능(사이토고키, 2017)


# relu function
def relu(x):
   return np.maximum(0, x)
  
if __name__ == '__main__':
   import numpy as np
   import matplotlib.pylab as plt

   ir1 = relu(-1)
   ir2 = relu(0)
   ir3 = relu(1)
   ir4 = relu(2)

   print(ir1)
   print(ir2)
   print(ir3)
   print(ir4)

   
