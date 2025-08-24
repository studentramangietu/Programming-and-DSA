#include<stdio.h>
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}

int  IndInsertion(int arr[],int size,int element,int capacity,int  index){
    if(size>=capacity){
        return -1;
    }
    for (int i = size; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]= element;
    return 1;
    

}

int  IndDeletion(int arr[],int size,int element,int  index){
    for (int i =index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    

}

int main(){
    int arr[100]={1,2,3,4,78};
    int size=5, element=45,index=0;
    display(arr,4);
    ///IndInsertion(arr,size,element,100,index);
    ///size=size+1;
    ///display(arr,size);
    IndDeletion(arr,size,element,index);
    size-=1;
    display(arr,size);



    return 0;
}