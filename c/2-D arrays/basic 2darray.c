#include<stdio.h>
int main(){
    int r;
    printf("enter the vaLue of row");
    scanf("%d",&r);
    int c;
    printf("enter the value of coloum");
    scanf("%d",&c);
    int arr[r][c]; ///row then column
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");    ///we can do the same thing by craesting a new matrix brr[c][r] with i<c j<r and the store our value

    for(int i=0;i<c;i++){  ///interchange loop value of i with r instead of c and vice-versa
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);/// ineterchage i with j
        }
        printf("\n");
    }    


    return 0;
}