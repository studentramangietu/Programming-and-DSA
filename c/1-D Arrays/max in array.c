#include<stdio.h>
int main(){
    int max=-1;
    int arr[3]={1,70,10};
    for(int i=0;i<3;i++){
        if(max<arr[i]) max=arr[i];  /// u can use arr[0] in case of giving value to max to avoid conflict in case of negative integers
    }
    printf("%d",max);
    return 0;
}