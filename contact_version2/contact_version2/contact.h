#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
#define SIZE 128
typedef struct Person{
	char name[SIZE/4];
	char sex[SIZE/4];
	int age;
	char telphone[SIZE/4];
	char adress[SIZE];
}person_t;

typedef struct Contact{
	int cap;//当前大小
	int size;//当前容量
	person_t persons[0];
}contact_t;

#endif