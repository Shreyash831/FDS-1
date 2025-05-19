#include <stdio.h>

struct bookinfo {
    int ID;
    char name[100];
    char author[100] ;
    int price;
} b[20];
int num = 0;
void insertion();
void deletion(int ID);
void modification(int ID);
void display();
int main() {
    int choice, ID;
    do{
        printf("MENU\n");
        printf("1. Insert Book\n2. Delete Book\n3. Modify Book\n4. Display Book\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertion();
                break;
            case 2:
                printf("Enter the ID of the Book to delete: ");
                scanf("%d", &ID);
                deletion(ID);
                break;
            case 3:
                printf("Enter the ID of the Book to modify: ");
                scanf("%d", &ID);
                modification(ID);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting the program.\n");
                // Exit the loop
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }while(choice != 5);
    return 0;
}

void insertion() {
    int n ;
    printf("Enter the number of Books to insert:") ;
    scanf("%d",&n) ;
    printf("\nEnter the details of books:\n");
    for(int i=0;i<n;i++){
    printf("\nBook %d:\n", num + 1);
    printf("Enter the ID: ");
    scanf("%d", &b[num].ID);
    printf("Enter the Name: ");
    scanf("%s", b[num].name);
    printf("Enter the Author:");
    scanf("%s",b[num].author);
    printf("Enter the Price: ");
    scanf("%d", &b[num].price) ;
    num++; 
    }
    printf("\nBooks Record Inserted Successfully.\n");
}
void deletion(int ID) {
    int i, found = 0;
    for (i = 0; i < num; i++) {
        if (b[i].ID == ID) {
            found = 1;
            for (int j = i; j < num - 1; j++) {
                b[j] = b[j + 1];
            }
            num--;  // Reduce the count
            printf("Books Record Deleted Successfully.\n");
        }
    }
    if (!found) {
        printf("Book with ID %d not found.\n", ID);
    }
}

void modification(int ID) {
    int i,choice, found = 0;
    for (i = 0; i < num; i++) {
        if (b[i].ID == ID) {
            printf("\nWhat do you want to modify?\n");
            printf("1.Book ID\n2.Name\n3.Author\n4.Price\n");
            printf("Enter your choice:");
            scanf("%d",&choice);
            switch(choice) {
                case 1:
                    printf("Enter the New Book ID:");
                    scanf("%d",&b[i].ID) ;
                    printf("Book ID Updated Successfully!");
                    break ;
                case 2: 
                    printf("Enter the new book name: ");
                    scanf("%s", b[i].name);
                    printf("Name Updated Sucessfully!") ;
                    break ;
                 case 3: 
                     printf("Enter the book author:");     
                     scanf("%s",b[i].author);
                     printf("Author Updated Successfully!") ;
                     break ;
                case 4:
                    printf("Enter the new price: ");
                    scanf("%d", &b[i].price);
                    printf("Price Updated Sucessfully!") ;
                    break ;
                default :
                    printf("Wrong Choice") ;
            }
            break ;
        }
    }
    if (b[i].ID != ID) {
        printf("Book with ID %d not found.\n", ID);
    }
}
void display() {
    if (num == 0) {
        printf("No Book to display.\n");
        return;
    }
    
    for (int i = 0; i < num; i++) {
        printf("ID:%d\n NAME:%s\n AUTHOR:%s\n PRICE:%d\n", b[i].ID, b[i].name, b[i].author, b[i].price);
    }
}
----------------------------------------------------------------------------------------------------------------------------
MENU
1. Insert Book
2. Delete Book
3. Modify Book
4. Display Book
5. Exit
Enter your choice: 1
Enter the number of Books to insert:3

Enter the details of books:

Book 1:
Enter the ID: 101
Enter the Name: letusc
Enter the Author:yashwantkanetkar
Enter the Price: 335

Book 2:
Enter the ID: 102
Enter the Name: cprogramming
Enter the Author:dennisritche
Enter the Price: 334

Book 3:
Enter the ID: 103
Enter the Name: cprimerplus
Enter the Author:shubham
Enter the Price: 336

Books Record Inserted Successfully.
MENU
1. Insert Book
2. Delete Book
3. Modify Book
4. Display Book
5. Exit
Enter your choice: 4
ID:101
 NAME:letusc
 AUTHOR:yashwantkanetkar
 PRICE:335
ID:102
 NAME:cprogramming
 AUTHOR:dennisritche
 PRICE:334
ID:103
 NAME:cprimerplus
 AUTHOR:shubham
 PRICE:336
MENU
1. Insert Book
2. Delete Book
3. Modify Book
4. Display Book
5. Exit
Enter your choice: 2
Enter the ID of the Book to delete: 102
Books Record Deleted Successfully.
MENU
1. Insert Book
2. Delete Book
3. Modify Book
4. Display Book
5. Exit
Enter your choice: 4
ID:101
 NAME:letusc
 AUTHOR:yashwantkanetkar
 PRICE:335
ID:103
 NAME:cprimerplus
 AUTHOR:shubham
 PRICE:336
MENU
1. Insert Book
2. Delete Book
3. Modify Book
4. Display Book
5. Exit
Enter your choice: 3
Enter the ID of the Book to modify: 101

What do you want to modify?
1.Book ID
2.Name
3.Author
4.Price
Enter your choice:2
Enter the new book name: cprogramming
Name Updated Sucessfully!MENU
1. Insert Book
2. Delete Book
3. Modify Book
4. Display Book
5. Exit
Enter your choice: 4
ID:101
 NAME:cprogramming
 AUTHOR:yashwantkanetkar
 PRICE:335
ID:103
 NAME:cprimerplus
 AUTHOR:shubham
 PRICE:336
MENU
1. Insert Book
2. Delete Book
3. Modify Book
4. Display Book
5. Exit
Enter your choice: 5
Exiting the program.
=== Code Execution Successful ===
