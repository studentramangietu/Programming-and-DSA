#include<stdio.h>
int main(){   ///use n-1 (2 ways to solve this)
    int arr[5]={1,4,34,56,7};
    int rev[]={};
    for(int i=0;i<=4;i++){
        arr[i]=rev[4-i];
    }
    for(int i=0;i<=4;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}