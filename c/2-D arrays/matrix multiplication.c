#include<stdio.h>
int main(){
    
    /// input 1st matix
    int m;
    printf("enter the number of row for 1st matrix; ");
    scanf("%d",&m);
    int n;
    printf("enter the number of column for 1st matrix; ");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    ///input 2nd matrix

    
    int p;
    printf("enter the number of row for 2st matrix; ");
    scanf("%d",&p);
    int q;
    printf("enter the number of column for 1st matrix; ");
    scanf("%d",&q);

    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");
    ///check
    if(n!=p){
        printf("matix multiplication not possible hahahaha");
    }
    else {
        ///code of multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                 ///res[m][q]=0;
                //ith of a, jth of b
                for(int k=0;k<n;k++){
                    res[i][j] += arr[i][k]*brr[k][j];
                }

            
            }

        }
        //print 
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d",res[i][j]);
            }
            printf("\n");
        }
        
    }

    return 0;
}