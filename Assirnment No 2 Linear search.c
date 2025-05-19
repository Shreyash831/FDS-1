#include<stdio.h>
int main()
{
  int n=0,key,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     }
    printf("Enter element yo search:");
    scanf("%d",&key);
    int found=0;
    for(i=0;i<n;i++)
    {
      if(a[i]==key)
      {
        found=1;
        break;
        }
    }
    if(found){
       printf("Element %d found at position %d\n",key,i);
    }
    else{
    printf("Element %d is not found",key);
    }
    return 0;
    }
