#include<stdio.h>
int top=-1;

void push(int stack[],int value,int n){
  if(top==n-1){
  	printf("Stack is full\n");
  	}
  else{
  	top++;
  	printf("Enter the element:");
  	scanf("%d",&value);
  	stack[top]=value;
  	}
  printf("Element %d are inserted in stack.\n",value);
  }

void pop(int stack[],int value,int n){
  if(top==-1){
  	printf("Stack is empty\n");
  	}
  else{
  	printf("Element popped is:%d\n",stack[top]);
  	top--;
  	}
  }

void display(int stack[],int value,int n){
   if(top==-1){
  	printf("Stack is empty\n");
  	}
   else{
    int i;
    for(i=top;i>=0;i--){
      printf("%d\n",stack[i]);
      }
    }
 }
int main()
{
  int n;
  printf("Enter the size of stack:");
  scanf("%d",&n);
  int value;
  int stack[n];
  int ch;
  do {
  printf("-------STACK OPERATIONS-------\n");
  printf("1.insert element in stack (push)\n");
  printf("2.delete a element from stack (pop)\n");
  printf("3.Display elements in stack\n");
  printf("4.Exit\n");
  printf("Enter your choice:");
  scanf("%d",&ch);
  switch(ch){
    case 1:push(stack,value,n);
          break;
    case 2:pop(stack,value,n);
          break;
    case 3:display(stack,value,n);
          break;
    case 4:printf("Exiting program");
          break;
    default:printf("Wrong choice");
    }
    }while(ch!=4);
   
return 0;
  }

------------------------------------------------------------------------------------------------------------------------------------------------------------------
OUTPUT-
Enter the size of stack:5
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:1
Enter the element:1
Element 1 are inserted in stack.
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:1
Enter the element:2
Element 2 are inserted in stack.
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:1
Enter the element:3
Element 3 are inserted in stack.
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:1
Enter the element:4
Element 4 are inserted in stack.
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:1
Enter the element:5
Element 5 are inserted in stack.
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:1
Stack is full
Element 0 are inserted in stack.
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:3
5
4
3
2
1
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:2
Element popped is:5
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:2
Element popped is:4
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:3
3
2
1
-------STACK OPERATIONS-------
1.insert element in stack (push)
2.delete a element from stack (pop)
3.Display elements in stack
4.Exit
Enter your choice:4
Exiting program

=== Code Execution Successful ===
  
