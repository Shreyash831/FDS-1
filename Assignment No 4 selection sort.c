#include <stdio.h>
int main() { 
    int n, i, j,temp; 
    printf("Enter size of array: "); 
    scanf("%d", &n); 
    int a[n];

printf("Enter array elements:\n");
for (i = 0; i < n; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &a[i]);
}

for(i = 0; i < n - 1; i++) {
     for(j = i; j < n - 1; j++) {
        if(a[i] > a[j + 1]) {
        temp = a[i];
        a[i] = a[j + 1];
        a[j + 1] = temp;
        }
     }
  }
printf("Sorted elements are:\n");
for (i = 0; i < n; i++) {
       printf("%d\n", a[i]);
    }
  return 0;

}
