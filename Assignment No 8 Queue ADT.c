#include<stdio.h>
#define max 5
int front=-1,rear=-1;
int queue[max];
void enQueue(int queue[],int value){
     if(rear==max-1){
        printf("Queue is full\n");
        }
     else{
        rear++;
        printf("Enter the element:");
  	scanf("%d",&value);
        queue[rear]=value;
        printf("Element %d are inserted in Queue.\n",value);
        }
       }
       
void deQueue(int queue[],int value){
      if(front==rear){
         printf("Queue is Empty\n");
         }
      else{
         front++;
         printf("Element deleted is %d\n",queue[front]);
         }
         
       }
       
void display(int queue[],int value){
      if(front==rear){
         printf("Queue is Empty\n");
         }
      else{
         for(int i=front+1;i<=rear;i++){
            printf("%d\n",queue[i]);
            }
           }
         }

int main()
{
  int value;
  int ch;
  do {
  printf("-------QUEUE OPERATIONS-------\n");
  printf("1.insert element in queue (enQueue)\n");
  printf("2.delete a element from queue (deQueue)\n");
  printf("3.Display elements in queue\n");
  printf("4.Exit\n");
  printf("Enter your choice:");
  scanf("%d",&ch);
  switch(ch){
    case 1:enQueue(queue,value);
          break;
    case 2:deQueue(queue,value);
          break;
    case 3:display(queue,value);
          break;
    case 4:printf("Exiting program");
          break;
    default:printf("Wrong choice");
    }
    }while(ch!=4);
   
  return 0;
  }
  
