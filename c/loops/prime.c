#include<stdio.h>
int main(){
    int n;

    printf("enter the prime no baby :");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if (n%i==0)
        {   a=1;
            printf("the no is composite");
            break;

           
        }
        if (a=1)
        {
           printf("your entered number is a prime number\n");

        }


     printf("got your answer babe!!");
     return 0;
    }




}