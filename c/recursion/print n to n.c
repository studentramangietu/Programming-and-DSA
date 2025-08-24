#include<stdio.h>
int decreasing(int n){
    if(n==0) return;
    printf("%d",n);  ///before call it gives n to 1
    printf("\n");
    decreasing(n-1);  /// calling the function
    ///printf("%d",n) after call it gives 1 to n
}
int main(){
    int n;
    printf("enter the number you wanna start with:");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}