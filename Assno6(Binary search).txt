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
    printf("Enter element to search:");
    scanf("%d",&key);
    int low=0,high=n-1,mid,found=0;
    while(low<=high){
    mid=(low+high)/2;
      if(a[mid]==key)
      {
        found=1;
        printf("Element %d found at position %d\n",key,mid);
        break;
        }
        else if(a[mid]>key){
        high=mid-1;
        }
        else{
           low=mid+1;
           }
    }
    if(low>high){
       printf("Element %d is not found!",key);
    }
    
    return 0;
    }
