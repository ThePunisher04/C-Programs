#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int countNodes(struct node *head){
    int count = 0;

    if(head == NULL)
        printf("linked list is empty \n");
    
    struct node *ptr = NULL;
    ptr = head;

    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d",count);
}

void printData(struct node *head){
    if(head == NULL)
        printf("linked list is empty \n");
    
    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}

void add_at_end(struct node *head, int data){
    struct node *ptr, *temp;
    ptr = head;

    temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 3;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 45;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 78;
    current->link = NULL;
    head->link->link = current;

    countNodes(head);
    printf("\n");
    printData(head);
    printf("\n");
    add_at_end(head,67);
    printf("\n");
    printData(head);
    printf("\n");

    return 0;
}