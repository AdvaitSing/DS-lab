#include<stdio.h>
#include<conio.h>

#define SIZE 10

void push(int);
void peek();
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
   int value, choice,br=1;
     while(br==1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2.Peek\n3.Pop\n4. Display\n5. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
    break;
    case 3: peek();
		 break;
	 case 4: display();
		 break;
	 case 5: br=0;
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void push(int value){
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = value;
      printf("\nInsertion success!!!");
   }
}
void peek()
{
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
      else
      printf("peek of the stack is %d",stack[top]);
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}
