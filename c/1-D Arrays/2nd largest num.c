#include<stdio.h> /// learn more and dry run
int main(){
    int arr[7]={3,45,12,34,21,34,22};
    int second_max=arr[0];
    int max=arr[0];       
    for(int i=0;i<6;i++){
       if(max<arr[i]){

        second_max=max;
        max=arr[i];
       }
       else if(second_max<arr[i] && max!=arr[i]){
        second_max=arr[i];
       }

       
    }
    printf("%d",second_max);

    return 0;      
}/// reexplain ittt baby