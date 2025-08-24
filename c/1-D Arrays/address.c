#include<stdio.h>
int main(){
    int arr[3]={32,12,34};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]); /// these two print statment wud print address
    return 0;
}