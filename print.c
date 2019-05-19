#include "phone.h"




void printAll()
{
    printf("Print all contants in the PhoneBook\n");
	for(int i = 0; i < size ; i++){
		printf("%s\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
	}
}