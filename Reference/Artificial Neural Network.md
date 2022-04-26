# Aritificial Neural Network


Organization: input layer, hidden layer, output layer

![image](https://user-images.githubusercontent.com/84608929/146541000-c7d2f67f-77d9-4699-a307-af146b734b45.png)

Activation fucntion is function to convert input signal to output signal. Activation fucntion take a role that sum of input signal decide to revitalize.

Activation function is function to convert sum of input signal to output signal.

## Sigmoid function: 

![image](https://user-images.githubusercontent.com/84608929/147082916-ed0260ca-6ced-4b34-bc91-4c7564a94e26.png)

Nueral network in sigmoid function run continuous real number.

output value is between 0 and 1. 

Sigmoid function is unlinear function. unlinear function can not make as one straight line. We must make neural network as unlinear function. Problem of linear function is not to make hidden layer to meaningfulness. Network's Hidden layer of linear function is Network that is not hidden layer.


## ReLU

ReLU is Rectified Linear Unit.

![image](https://user-images.githubusercontent.com/84608929/147564170-0f43c854-01ee-4d33-91b9-9b04f19fc5cf.png)


Graph: ![image](https://user-images.githubusercontent.com/84608929/147563315-56df6ed7-4210-44e2-9f91-ba51be885747.png)


## inference of Neural Network


forward propagation: input layer -> output layer

backward propagation: input layer <- output layer

classification

function using in classification is softmax function:
![image](https://user-images.githubusercontent.com/84608929/152625050-2b9ae212-2d91-4212-ba78-002ac22b77bc.png)

exp(x): exponential function meaning to ![image](https://user-images.githubusercontent.com/84608929/152625166-f893f4a8-599c-46ac-847f-432763c373d4.png)

n: number of neuron

![image](https://user-images.githubusercontent.com/84608929/152625276-378645bc-93ff-4f51-b7b9-8a6d6fe13bff.png): output of k order.




regression

## Softmax function

output of softmax function is  real number between 0 and 1.
the sum of real numbers is 1.
thus, It is used as probability.

![image](https://user-images.githubusercontent.com/84608929/165288819-3e4f58d2-f426-47bb-8a7d-0d898265fa95.png)

![image](https://user-images.githubusercontent.com/84608929/165290208-f5b077d2-a6fd-4304-8066-ebb131a00361.png)

