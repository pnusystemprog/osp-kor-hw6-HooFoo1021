#include <stdio.h>
#include <string.h>
#include "phone.h"

int size = 0;
static int count_service = 0;	// Total number of service requests


int main()
{
	int service;		// a variable for storing user's request
	do
	{
        printf("============ Telephone Book Management ============");
        printf("\n <<<1. Register\t 2. Print All \t 3. Search by ID \t 4. Delete \t 5. Exit >>>\n");
        printf(" Please enter your service number (1-5)> ");
		scanf("%d", &service);
		count_service += 1;
		switch(service)
		{
			case 1: registerPhoneData(); break;	// invoke find_ID
			case 2: printAll(); break;
            case 3: searchByName(); break;
            case 4: deleteByName(); break;
		}
	} while (service != 5);	// if Exit is not entered, the loop continues
	return 0;
}

/*****************
** Your code..
** This function should be implemented in register.c
*************************/
/*
void registerPhoneData()
{
	char passWord[10];
	char newUser[10];
	char newPhone[13];
	int wrongCount = 0;

	printf("PassWord:");
	scanf("%s\n", passWord);

	int compare = strcmp(passWord, "qwerty1234");
	
	if(compare == 0){
		printf("New User Name: ");
		scanf("%s\n", newUser);
		printf("PhoneNumber: ");
		scanf("%s\n", newPhone);
		printf("Registered...\n");
		strcpy(Book[size].Name, newUser);
		strcpy(Book[size].PhoneNumber, newPhone);
		size += 1;
		wrongCount = 0;
	}
	else{
		wrongCount += 1;
		switch(wrongCount){
			case 1: printf("Not Matched !!!\n");
			case 2: printf("Not Matched !!! (twice) \n");
			case 3: printf("Not Matched !!!\n");
			default: printf("You are not allowed to acces Book");
		} 
	}
    printf("Registration\n");
}
*/
/*****************
** Your code..
** This function should be implemented in print.c
*************************/
/*
void printAll()
{
    printf("Print all contants in the Book\n");
	for(int i = 0; i < size ; i++){
		printf("%s %s", Book[i].Name, Book[i].PhoneNumber);
	}
}
*/
/*****************
** Your code..
** This function should be implemented in search.c
*************************/
/*
void searchByName()
{
	char Flag[10];
	int isExsist = 0;
	int foundIndex;
    printf("Search by Name\n");
	printf("Enter a name to search: ");
	scanf("%s", Flag);
	for(int i = 0; i < size; i++){
		if(strcmp(Book[i].Name, Flag) == 0){
			isExsist = 1;
			foundIndex = i;
		}
	}
	if(isExsist == 1){
		printf("%s%S\n", Book[foundIndex].Name, Book[foundIndex].PhoneNumber);
	}
	else{
		printf("Oops! %s is not in the Book.", Flag);
	}
}
*/
/*****************
** Your code..
** This function should be implemented in delete.c
*************************/
/*
void deleteByName()
{
	char Flag[10];
	int isExsist = 0;
	int foundIndex;
	printf("Enter a name to delete: ");
	scanf("%s", Flag);
	for(int i = 0; i < size; i++){
		if(strcmp(Book[i].Name, Flag) == 0){
			isExsist = 1;
			foundIndex = i;
		}
	}
	if(isExsist == 1){
		for(int i = foundIndex; i < size - 1; i++){
			Book[i] = Book[i+1];
		}
		size = size - 1;
		printf("%s is deleted...\n", Book[foundIndex].Name);
	}
	else{
		printf("Oops! %s is not in the Book.", Flag);
	}
    printf("Deletion is done\n");
}
*/