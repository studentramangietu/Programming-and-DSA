#include<stdio.h>
void func(int a[]){
    a[1]=261;   /// here value is takeb by reference in case of arrays
    return;   /// where as in case of inr value changes are not made like this

}
int main(){
    int arr[3]={34,48.17};
    printf("%d\n",arr[1]);/// address od array means address of first element of array
    func(arr);
    printf("%d\n",arr[1]);
    return 0;
}