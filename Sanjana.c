#include <stdio.h>
#include <string.h>

// Structure for Book Details
struct Book {
    char ISBN[20];
    char Title[100];
    char Author[50];
    char Genre[50];
    int Quantity;
};

// Structure for Member Details
struct Member {
    int MemberID;
    char Name[100];
    char Address[200];
    char PhoneNumber[15];
};

// Structure for Transaction Details
struct Transaction {
    int TransactionID;
    int MemberID;
    char ISBN[20];
    char IssueDate[15];
    char ReturnDate[15];
};

// Function to Update Book Details
void updateBookDetails(struct Book *book) {
    printf("Enter new title: ");
    scanf(" %[^\n]s", book->Title);
    printf("Enter new author: ");
    scanf(" %[^\n]s", book->Author);
    printf("Enter new genre: ");
    scanf(" %[^\n]s", book->Genre);
    printf("Enter new quantity: ");
    scanf("%d", &book->Quantity);
    printf("Book details updated successfully.\n");
}

// Function to Delete Book Details
void deleteBookDetails(struct Book *book) {
    book->Quantity = 0; // Assuming setting quantity to zero means deleting the book
    printf("Book details deleted successfully.\n");
}

// Function to Add Member
void addMember(struct Member *member) {
    printf("Enter member name: ");
    scanf(" %[^\n]s", member->Name);
    printf("Enter member address: ");
    scanf(" %[^\n]s", member->Address);
    printf("Enter member phone number: ");
    scanf(" %[^\n]s", member->PhoneNumber);
    printf("Member added successfully.\n");
}

// Function to Delete Member
void deleteMember(struct Member *member) {
    member->MemberID = 0; // Assuming setting MemberID to zero means deleting the member
    printf("Member deleted successfully.\n");
}

// Function to Update Member Details
void updateMember(struct Member *member) {
    printf("Enter new name: ");
    scanf(" %[^\n]s", member->Name);
    printf("Enter new address: ");
    scanf(" %[^\n]s", member->Address);
    printf("Enter new phone number: ");
    scanf(" %[^\n]s", member->PhoneNumber);
    printf("Member details updated successfully.\n");
}

// Function to Display Member Details
void displayMemberDetails(struct Member *member) {
    printf("\nMember ID: %d\n", member->MemberID);
    printf("Name: %s\n", member->Name);
    printf("Address: %s\n", member->Address);
    printf("Phone Number: %s\n", member->PhoneNumber);
}

// Function to Issue a Book
void issueBook(struct Transaction *transaction) {
    printf("Enter Member ID: ");
    scanf("%d", &transaction->MemberID);
    printf("Enter ISBN: ");
    scanf(" %[^\n]s", transaction->ISBN);
    printf("Enter Issue Date: ");
    scanf(" %[^\n]s", transaction->IssueDate);
    printf("Book issued successfully.\n");
}

// Function to Return a Book
void returnBook(struct Transaction *transaction) {
    printf("Enter Return Date: ");
    scanf(" %[^\n]s", transaction->ReturnDate);
    printf("Book returned successfully.\n");
}

// Function to Display Transaction Details
void displayTransactionDetails(struct Transaction *transaction) {
    printf("\nTransaction ID: %d\n", transaction->TransactionID);
    printf("Member ID: %d\n", transaction->MemberID);
    printf("ISBN: %s\n", transaction->ISBN);
    printf("Issue Date: %s\n", transaction->IssueDate);
    printf("Return Date: %s\n", transaction->ReturnDate);
}

int main() {
    struct Book myBook = {.ISBN = "123456", .Title = "Sample Book", .Author = "John Doe", .Genre = "Fiction", .Quantity = 10};
    struct Member myMember = {.MemberID = 1, .Name = "John Smith", .Address = "123 Main St", .PhoneNumber = "555-1234"};
    struct Transaction myTransaction = {.TransactionID = 1, .MemberID = 1, .ISBN = "123456", .IssueDate = "2022-03-01", .ReturnDate = ""};

    int choice;
    printf("Library Management System\n");

    do {
        printf("\nMenu:\n");
        printf("1. Update Book Details\n");
        printf("2. Delete Book Details\n");
        printf("3. Add Member\n");
        printf("4. Delete Member\n");
        printf("5. Update Member Details\n");
        printf("6. Display Member Details\n");
        printf("7. Issue Book\n");
        printf("8. Return Book\n");
        printf("9. Display Transaction Details\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                updateBookDetails(&myBook);
                break;
            case 2:
                deleteBookDetails(&myBook);
                break;
            case 3:
                addMember(&myMember);
                break;
            case 4:
                deleteMember(&myMember);
                break;
            case 5:
                updateMember(&myMember);
                break;
            case 6:
                displayMemberDetails(&myMember);
                break;
            case 7:
                issueBook(&myTransaction);
                break;
            case 8:
                returnBook(&myTransaction);
                break;
            case 9:
                displayTransactionDetails(&myTransaction);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}