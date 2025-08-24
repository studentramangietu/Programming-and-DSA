#include<stdio.h>
int LinearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
            
        }
    }
    return -1;

    

}
int main(){

    int arr[100]={21,22,3,2,4,5,67,43,23,45,67,8,92};
    int element=67;
    int size=sizeof(arr)/sizeof(int);
    int SearchIndex=LinearSearch(arr,size,element);
    printf("the element %d was found at index %d",element,SearchIndex);


    return 0;
}