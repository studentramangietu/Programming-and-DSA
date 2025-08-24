#include<stdio.h>
int main(){
    int x=8;
    int pair=0;
    int arr[5]={2,6,0,0,0};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(arr[i]+arr[j]==x) pair=pair + 1;
        
        }

    }
    printf("%d",pair);

    
    return 0;
}