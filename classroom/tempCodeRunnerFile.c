cci(int n){
  if (n<=1){
    return n;
  }
  return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
  int n=5;
  printf("Fib1onnaci number is:%d\n",fibonacci(n));
  return 0;
}