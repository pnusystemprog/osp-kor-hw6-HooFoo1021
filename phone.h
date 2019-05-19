#include <stdio.h>
#include <string.h>

#ifndef _PHONE_H
#define _PHONE_H

//funcs
void registerPhoneData();
void printAll();
void searchByName();
void deleteByName();

// array of sturcure

# define MAX 50

struct Contact
{
    char Name[10];
    char PhoneNumber[13];
};

struct Contact PhoneBook[MAX];

extern int size;  // store the actual numbers of PhoneBook

#endif