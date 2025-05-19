#include <stdio.h>
int main() 
{
    int n, i, j,temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
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
-----------------------------------------------------------------------------------------------------------------------------
Enter size of array: 5
Enter array elements:
Enter element 1: 2
Enter element 2: 3
Enter element 3: 1
Enter element 4: 4
Enter element 5: 5
Sorted elements are:
1
2
3
4
5
=== Code Execution Successful ===
