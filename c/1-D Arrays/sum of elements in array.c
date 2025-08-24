#include<stdio.h>
int main(){
    int n;
    int arr[n];
    printf("enter the numbers in arrays");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&n);

    }
    

    int a=0;
    for(int i=0;i<=n-1;i++){
        a=a+arr[i];
    }
    printf("%d",a);

    return 0;
}