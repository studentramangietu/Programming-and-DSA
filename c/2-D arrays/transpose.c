#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows");
    scanf("%d",&r);
    int c;
    printf("eneter the no of coloums ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j = 0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for (int j = 0; j<c; j++){
            printf("%d",arr[i][j]);
        }
        
    }
    return 0;
}