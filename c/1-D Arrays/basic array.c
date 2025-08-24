#include<stdio.h>
int main(){
    int arr[5];  /// continuous memory allocation in array
    //// int size=10,b[size]; its an array making code
    for(int i=0;i<=4;i++){
           printf("enter the number %d:",i+1);
           scanf("%d",&arr[i]);



    }
    for (int i = 0; i <=4; i++)
    {
        printf("number is %d\n",arr[i]);
    }
    


    return 0;
}