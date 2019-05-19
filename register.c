#include "phone.h"




void registerPhoneData()
{
	char passWord[10];
	//char newUser[10];
	//char newPhone[13];
	static int wrongCount = 0;
	

	printf("PassWord:");

	scanf("%s", passWord);
	int compare = strcmp(passWord, "qwerty1234");
	if(compare == 0){
		printf("New User Name: ");
		scanf("%s", PhoneBook[size].Name);
		printf("PhoneNumber: ");
		scanf("%s", PhoneBook[size].PhoneNumber);
		size += 1;
	}
	else{
		wrongCount += 1;
		switch(wrongCount){

			case 1: printf("Not Matched !!!\n"); break;
			case 2: printf("Not Matched !!! (twice) \n"); break;

			case 3: printf("Not Matched !!! (3times) \n"); break;
			default: printf("You are not allowed to acces PhoneBook");
		} 
	}
    printf("Registration\n");
}