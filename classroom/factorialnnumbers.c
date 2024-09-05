#include <stdio.h>
int main() {
    int c,n,fact=1;
    printf("Enter the integer value:");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        fact=fact*c;
        printf("The factorial of given number is:%d",fact);
    }
    return 0;
}