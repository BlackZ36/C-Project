#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

/* book information structure */
struct Book {
    char code[11];
    char title[51];
    int quantity;
    float price;
};

/* global variables */
struct Book books[MAX_BOOKS];  
int num_books = 0;         
int i,j;    

/* function prototypes */
void enter_books();
void display_books();
void sort_books();
void load_books();
void find_first_max_price();
void edit_book();
void delete_book();

//-------------------------------------------------------------------------------
/* main function */
int main() {
    int choice;
    do {
        printf("\n\nSelect options: ");
        printf("\n1. Enter the list of books");
        printf("\n2. Display the list of books");
        printf("\n3. Sort the list of books by code");
        printf("\n4. Load data from file");
        printf("\n5. Find the first max price");
        printf("\n6. Edit book by code");
        printf("\n7. Delete book by code");
        printf("\n0. Exit");
        printf("\nYour selection <0 -> 7>: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enter_books();
                break;
            case 2:
                display_books();
                break;
            case 3:
                sort_books();
                break;
            case 4:
            	load_books();
            	break;
            case 5:
                find_first_max_price();
                break;
            case 6:
                edit_book();
                break;
            case 7:
                delete_book();
                break;
            case 0:
                printf("\nExiting program...");
                break;
            default:
                printf("\nInvalid choice, please try again.");
                break;
        }
    } while (choice != 0);

    return 0;
}
//------------------------------------------------------------------------------- /* enter_books: allows the user to enter the book information */
// Function to enter the list of books
void enter_books() {
    int num_new_books;
    int code_exists = 0;
    printf("\nEnter number of books: ");
    scanf("%d", &num_new_books);

    if (num_books + num_new_books > MAX_BOOKS) {
        printf("\nToo many books to add. Maximum is %d.", MAX_BOOKS);
        return;
    }

    for (i = 0; i < num_new_books; i++) {
    	fflush(stdin);

        printf("\nBook %d:",i+1);
		

        // Prompt user to enter book code and check if it already exists
        char code[10];
        printf("\nEnter code: ");
        scanf("%s", code);

        
        for (j = 0; j < num_books; j++) {
            if (strcmp(books[j].code, code) == 0) {
                code_exists = 1;
                printf("\nThe code %s already exists, please reenter!",code);
                break;
            }
        }

        if (code_exists) {
            i--;
            continue;
        }

        // If book code is unique, prompt user to enter remaining details
        strcpy(books[i].code, code);
        printf("Enter title: ");
        scanf("%s", books[i].title);

        printf("Enter quantity: ");
        scanf("%d", &books[num_books].quantity);

        printf("Enter price: ");
        scanf("%f", &books[num_books].price);

        num_books++;
    }
}

//-------------------------------------------------------------------------------
void display_books() {
	float total=0;
    if (num_books == 0) {
        printf("\nNo books in the system.");
        return;
    }

    printf("\nBook code\tTitle\t\tQuantity\tPrice\t\tValue");
    printf("\n----------------------------------------------------------------------");

    for (i = 0; i < num_books; i++) {
        printf("\n%s\t\t%s\t\t%d\t\t%.1f\t\t%.1f", books[i].code, books[i].title, books[i].quantity, books[i].price, books[i].quantity * books[i].price);
        total = total + books[i].quantity * books[i].price;
    }
    printf("\n\t\t\t\t\t\tTotal value:    %.1f",total);
}
//-------------------------------------------------------------------------------
void sort_books() {
    struct Book temp;
    for (i = 0; i < num_books - 1; i++) {
        for (j = i + 1; j < num_books; j++) {
            if (strcmp(books[i].code, books[j].code) > 0) {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    printf("\nBooks sorted by code.");
}
//-------------------------------------------------------------------------------
void load_books(){
	FILE *fp;
    char filename[] = "Assignment.txt";
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("\nUnable to open file '%s'.", filename);
        return;
    }
    num_books = 0;
    while (fscanf(fp, "%s %s %d %f",
                  books[num_books].code,
                  books[num_books].title,
                  &books[num_books].quantity,
                  &books[num_books].price) == 4) {
        printf("Loaded book: %s %s %d %f\n",
               books[num_books].code,
               books[num_books].title,
               books[num_books].quantity,
               books[num_books].price);
        num_books++;
        if (num_books == MAX_BOOKS) {
            break;
        }
    }

    fclose(fp);

    printf("\nData loaded successfully from file '%s'.", filename);
    
    
}
//-------------------------------------------------------------------------------
void find_first_max_price() {
	if (num_books == 0) {
		printf("\nNo books in the system.");
		return;
	}
	float max_price = books[0].price;
	int max_price_index = 0;
	for (i = 1; i < num_books; i++) {
    	if (books[i].price > max_price) {
        	max_price = books[i].price;
        	max_price_index = i;
    	}
	}
	printf("\nThe book with the highest price is:");
	printf("\nCode: %s", books[max_price_index].code);
	printf("\nTitle: %s", books[max_price_index].title);
	printf("\nQuantity: %d", books[max_price_index].quantity);
	printf("\nPrice: %.2f", books[max_price_index].price);
}
//-------------------------------------------------------------------------------
// Function to edit a book by code
void edit_book() {
	char code[10];
	printf("\nEnter code of book to edit: ");
	scanf("%s", code);
	int book_index = -1;
	for (i = 0; i < num_books; i++) {
    	if (strcmp(books[i].code, code) == 0) {
        	book_index = i;
        	break;
    	}
	}

	if (book_index == -1) {
    	printf("\nBook not found.");
    	return;
	}

	printf("\nCurrent book code %s information:",books[book_index].code);
	printf("\nTitle: %s", books[book_index].title);
	printf("\nQuantity: %d", books[book_index].quantity);
	printf("\nPrice: %.1f", books[book_index].price);

	
	printf("\nEnter new book title: ");
	scanf("%s", books[book_index].title);
	fflush(stdin);
	printf("Enter new quantity: ");
	scanf("%d", &books[book_index].quantity);

	printf("Enter new price: ");
	scanf("%f", &books[book_index].price);

	printf("\nBook information updated.");
}
//-------------------------------------------------------------------------------
void delete_book() {
	char code[10];
	printf("\nEnter code of book to delete: ");
	scanf("%s", code);
	int book_index = -1;
	for (i = 0; i < num_books; i++) {
	    if (strcmp(books[i].code, code) == 0) {
	        book_index = i;
	        break;
	    }
	}
	
	if (book_index == -1) {
	    printf("\nBook not found.");
	    return;
	}
	
	for (i = book_index; i < num_books - 1; i++) {
	    books[i] = books[i + 1];
	}
	
	num_books--;
	printf("\nBook deleted from system.");
}
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

