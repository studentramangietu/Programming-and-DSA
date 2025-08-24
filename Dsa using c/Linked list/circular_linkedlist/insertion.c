#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void CircularLLTraversal(struct Node * head){
    struct Node * ptr = head;
    printf("the elemet is :%d\n",ptr->data);
    ptr=ptr->next;

    while(ptr != head){
        printf("the element is :%d\n",ptr->data);
        ptr=ptr->next;
    }

}

struct Node * insertAtFirst(struct Node * head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node * p = head->next;
    while(p->next != head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next = head;
    head = ptr;
    return head;

}

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Allocate memory for nodes in the linked list in heap

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data =9;
    head->next =second;

    second->data =1;
    second->next =third;
    
    third->data =4;
    third-> next= fourth;

    fourth->data=6;
    fourth->next=head;

    //traversal
    CircularLLTraversal(head);
    head = insertAtFirst(head,89);
    CircularLLTraversal(head);



    
    return 0;
}