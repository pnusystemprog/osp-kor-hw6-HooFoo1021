#include "phone.h"




void searchByName()
{
	char Flag[10];
	int isExsist = 0;
	int foundIndex;
    printf("Search by Name\n");
	printf("Enter a name to search: ");
	scanf("%s", Flag);
	for(int i = 0; i < size; i++){
		if(strcmp(PhoneBook[i].Name, Flag) == 0){
			isExsist = 1;
			foundIndex = i;
		}
	}
	if(isExsist == 1){
		printf("%s%20s\n", PhoneBook[foundIndex].Name, PhoneBook[foundIndex].PhoneNumber);
	}
	else{
		printf("Oops! %s is not in the PhonePhoneBook.\n", Flag);
	}
}