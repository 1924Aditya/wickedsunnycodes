#include<stdio.h>
int factorial(int n){
  if (n==1||n==0) return 1;
  return n*factorial(n-1);
}
int main(){
  int num;
  scanf("%d",&num);
  printf("Factorial of %d is %d\n",num,factorial(num));
  return 0;
}