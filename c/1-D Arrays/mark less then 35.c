#include<stdio.h>
int main(){
    int marks[5]={87,34,71,10,76};
    for(int i=0;i<=4;i++){
        if(marks[i]<35) printf("roll no is %d",i);
    }
    return 0;

}