/*
define: Cpp Conversion version of Perception example python program
data: 2011.11.15.
*/

#include <stdio.h>

int AND(int x1, int x2);

int main(void){

    int tmp1 = AND(0, 0);
    printf("%d\n", tmp1);

    int tmp2 = AND(1, 1);
    printf("%d\n", tmp2);

    return 0;
}

int AND(int x1, int x2){
    double w1 = 0.5;
    double w2 = 0.5;
    double theta = 0.7;
    double tmp = x1 * w1 + x2 * w2;

    if(tmp <= theta){
        return 0;
    }
    else if(tmp > theta){
        return 1;
    }

    return 3;
}