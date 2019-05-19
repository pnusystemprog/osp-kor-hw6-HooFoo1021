#include "phone.h"




void deleteByName()
{
	char Flag[10];
	int isExsist = 0;
	int foundIndex;
	printf("Enter a name to delete: ");
	scanf("%s", Flag);
	for(int i = 0; i < size; i++){
		if(strcmp(PhoneBook[i].Name, Flag) == 0){
			isExsist = 1;
			foundIndex = i;
		}
	}
	if(isExsist == 1){
		for(int i = foundIndex; i < size - 1; i++){
			PhoneBook[i] = PhoneBook[i+1];
		}
		size = size - 1;
		printf("%s is deleted...\n", Flag);
		printf("Deletion is done\n");
	}
	else{
		printf("Oops! %s is not in the PhoneBook.\n", Flag);
	}
    
}