#include<stdio.h>
int main(){
    int n;
    printf("enter a number;");
    scanf("%d",&n);
    

    int a=2;
    //scanf("%d",&a);
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a*2;

    }


}