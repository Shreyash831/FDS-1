#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;
   };
struct node *head,*temp,*newnode,*prevnode;
void insertAtFirst(){
    newnode=malloc(sizeof(struct node));
    printf("Enter the data for newnode:");
    scanf("%d",&newnode->data);
    if(head==NULL){
      head=newnode;
      newnode->next=NULL;
      }
    else{
      newnode->next=head;
      head=newnode;
      }
    }
void insertAtLast(){
    newnode=malloc(sizeof(struct node));
    printf("Enter the data for newnode:");
    scanf("%d",&newnode->data);
    if(head==NULL){
      head=newnode;
      newnode->next=NULL;
      }
    else{
      temp=head;
      while(temp->next!=NULL){
         temp=temp->next;
         }
      temp->next=newnode;
      newnode->next=NULL;
      }
    }
void DeleteAtFirst(){
    if(head==NULL){
      printf("Empty SLL\n");
      }
    else{
      temp=head;
      head=head->next;
      temp->next=NULL;
      free(temp);
      }
    }
void DeleteAtLast(){
    if(head==NULL){
      printf("Empty SLL\n");
      }
    else{
      temp=head;
      while(temp->next!=NULL){
         prevnode=temp;
         temp=temp->next;
         }
        prevnode->next=NULL;
        free(temp);
        }
      }
void Display(){
     if(head==NULL){
      printf("Empty SLL\n");
      }
     temp=head;
     while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
   }
  }
    
         
int main(){
  int ch;
  do {
  printf("-------LINKLIST OPERATIONS-------\n");
  printf("1.Insert at first\n");
  printf("2.Insert at last\n");
  printf("3.Delete at first\n");
  printf("4.Delete at last\n");
  printf("5.Display\n");
  printf("6.Exit\n");
  printf("Enter your choice:");
  scanf("%d",&ch);
  switch(ch){
    case 1:insertAtFirst();
          break;
    case 2:insertAtLast();
          break;
    case 3:DeleteAtFirst();
          break;
    case 4:DeleteAtLast();
          break;
    case 5:Display();
          break;
    case 6:printf("Exiting program");
          break;
    default:printf("Wrong choice");
    }
    }while(ch!=6);
   
  
  return 0;
  }
