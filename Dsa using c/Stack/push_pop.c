#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size ;
    int top;
    int * arr;
};

int isEmpty(struct stack * ptr){
    if (ptr->top == -1){
        printf("stack is empty");
        return 1;
    }
    else return 0;
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}

void Push(struct stack * ptr,int value){
    struct stack * sp;
    if(isFull(ptr)){
        printf("stack over flow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack * ptr){
    if (isEmpty){
        printf("stack underflow");
        return -1;
    }
    else {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;

    }
}

int main(){
    struct stack * sp = (struct stack * ) malloc(sizeof(struct stack));
    sp->size =10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));

    Push(sp,89);
    //Push(sp,77);
    pop(sp);
    if(isEmpty(sp)){
        printf("the stack is empty\n");
    }
    else {
        printf("stack isn't empty\n");
    }
    
    return 0;
}