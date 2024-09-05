#include<stdio.h>
void main(){
  int i,j,sum;
  printf("Enter the first number:");
  scanf("%d",&i);
  printf("Enter the second number:");
  scanf("%d",&j);
  sum=i+j;
  printf("The sum is:%d",sum);
  printf("\n");
  if(sum%2==0)
  {
    printf("    (YES)");
  }
  else{
    printf("    (NO)");
  }
  switch (sum){
    case 1:
    printf("one");
    break;
    case 2:
    printf("Two");
    break;
    case 3:
    printf("Three");
    break;
    case 4:
    printf("Four");
    break;
    case 5:
    printf("Five");
    break;
    case 6:
    printf("Six");
    break;
    case 7:
    printf("Seven");
    break;
    case 8:
    printf("Eight");
    break;
    case 9:
    printf("Nine");
    break;
    default:
    printf("invalid");
    break;
  }
}