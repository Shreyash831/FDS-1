#include<stdio.h>
int main()
{
   int n=20,a[n],i,j,temp,k;
   printf("Enter size of array:");
   scanf("%d",&n);
   printf("Enter array elements:\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     }
     for(i=1;i<n;i++)
     {
       for(j=0;j<i;j++)
       {
          if(a[j]>a[i])
          {
            temp=a[i];
            for(k=i-1;k>=j;k--){
            a[k+1]=a[k];
            }
            a[j]=temp;
            break;
      }
       }     
   }
      printf("Sorted elements by Insertion sorting are:\n");
      for(i=0;i<n;i++)
      {
         printf("%d\n",a[i]);
          }
          return 0;
      }
      
 
      
