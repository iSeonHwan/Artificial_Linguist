/*
define: Perceptron XOR version example 2
date: 2021.12.8.
Resource: 밑바닥 인공지능(사이토코기)
*/

#include <stdio.h>

int AND(double x1, double x2);
int NAND(double x1, double x2);
int OR(double x1, double x2);
int XOR(double x1, double x2);

int main(void){

    int tmp1 = XOR(0, 0);
    printf("%d\n", tmp1);

    int tmp2 = XOR(1, 0);
    printf("%d\n", tmp2);
    
    int tmp3 = XOR(0, 1);
    printf("%d\n", tmp3);
    
    int tmp4 = XOR(1, 1);
    printf("%d\n", tmp4);

    return 0;
}

//XOR gate is multi-layter perceptron.
int XOR(double x1, double x2){
	int s1 = NAND(x1, x2);
	int s2 = OR(x1, x2);
	int y = AND(s1, s2);

	return y;
}

int AND(double x1, double x2){
    double w1 = -0.5;
    double w2 = -0.5;
    double theta = -0.7;
    double tmp = x1 * w1 + x2 * w2;

    if(tmp <= theta){
        return 0;
    }
    else if(tmp > theta){
        return 1;
    }

    return 3;
}

int NAND(double x1, double x2){
    double w1 = -0.5;
    double w2 = -0.5;
    double theta = -0.7;
    double tmp = x1 * w1 + x2 * w2;

    if(tmp <= theta){
        return 0;
    }
    else if(tmp > theta){
        return 1;
    }

    return 3;
}

int OR(double x1, double x2){
    double w1 = 0.5;
    double w2 = 0.5;
    double b = -0.2;  // 'b' is bias.
    double tmp = x1 * w1 + x2 * w2 + b;

    if(tmp <= 0.0){
        return 0;
    }
    else if(tmp > 0.0){
        return 1;
    }

    return 3;
}
