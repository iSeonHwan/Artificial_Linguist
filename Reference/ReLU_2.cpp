/*
define: ReLU exapmle 2 cpp version
date: 2021.12.29
resource: 밑바닥 ~ 인공지능(사이코토기)
*/

#include <stdio.h>

double ReLU(double x);

int main(void){

  int ir1 = ReLU(-1);
  int ir2 = ReLU(0);
  int ir3 = ReLU(1);
  int ir4 = ReLU(2);

  printf("%d\n", ir1);
  printf("%d\n", ir2);
  printf("%d\n", ir3);
  printf("%d\n", ir4);

  return 0;
}

double ReLU(double x){
  if(x > 0){
    return x;
  }
  else if(x <= 0){
    return 0;
  }
  else{
    
  }
  return -1;
}