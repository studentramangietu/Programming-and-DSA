#include<stdio.h>
int main(){
    int a=23;
    int* x=&a;    // A Pointer = stores address  and it has its own address//
    printf("%p\n",x); //print's address//
    printf("%p\n",&x); //shoes address of x //
    printf("%d\n",*x);
    *x=7;
    printf("%d",a); // a is changed //


    return 0;

}