#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;   /// base case 
    return n*factorial(n-1);  ///here it go go wrong if minus numbers are there///
}

int main(){           ///reccursion means a function calling it self///
    int n;
    printf("enter a number to gets its factorial");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);                       



    return 0;   ///tree diagram od this...
}