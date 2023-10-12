#include <stdio.h>
#define N 5
int stack[N];
int top = -1;
int x;

void push(int x){
    if(top == N - 1)
        printf("OVERFLOW CONDITION REACHED !!! \n Stack is full.");
    else{
        top++;
        stack[top] = x;
        printf("Element %d has been pushed into the stack.\n",x);
    }
}
void pop(){
    if(top == -1)
        printf("UNDERFLOW CONDITION REACHED !!! \n Stack is empty.");
    else{
        int item;
        item = stack[top];
        top--;
        printf("The popped element is %d.",item);
    }
}
void Top(){
    if(top == -1)
        printf("UNDERFLOW CONDITION REACHED !!! \n Stack is empty.");
    else{
        printf("The topmost element of the stack is : %d",stack[top]);
    }
}
void display(){
    for(int i = top; i >= 0; i--)
        printf("%d ",stack[i]);
}
void main(){
    int choice;

    do{
        printf("Enter choice \n1. Push \n2. Pop \n3. Top \n4. Display");
        scanf("%d",&choice);

        switch(choice){
            case 1 : 
            printf("Enter the element :");
            scanf("%d",&x);
            push(x);
            break;
            case 2 : pop();
            break;
            case 3 : Top();
            break;
            case 4 : display();
            break;
            deafult :
            printf("Invalid choice");
        }

    }while(choice != 0);
}