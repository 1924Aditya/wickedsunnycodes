#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int prod(int a, int b);
int div(int a, int b);
int main(){
  int sum=add(5, 3);
  int diff=sub(5,3);
  int prod=multiply(5,3);
  int quoi=divide(5,3);
  printf("Sum: %d\n", sum);
  printf("diff: %d\n",diff);
  printf("product:%d\n",prod);
  printf("remainder:%d\n",quoi);
  return 0;
}
int add(int a, int b){
  return a+b;
}

  int sub(int a, int b){
    return a-b;
}
int multiply(int a, int b){
  return a*b;
}
int divide(int a,int b){
  return a/b;
}