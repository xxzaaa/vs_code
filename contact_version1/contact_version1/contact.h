#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <windows.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 128
#define TOTAL 1000
#pragma warning(disable:4996)

//姓名、性别、年龄、电话、地址
typedef struct person{
	char name[SIZE/4];
	char sex[SIZE/8];
	int age;
	char telphone[SIZE/4];//key
	char address[SIZE];
}person_t;

typedef struct contact{
	int size;    //当前人数
	int cap;     //总容量
	person_t persons[TOTAL];
}contact_t;

void AddPerson(contact_t *ct);
void DeletePerson(contact_t *ct);
void SearchPerson(contact_t *ct);
//index==-1:show all
//index>=0:show index person
void ShowContact(contact_t *ct,int index);
void ModPerson(contact_t *ct);
void ClsContact(contact_t *ct);
void SortContact(contact_t *ct);

#endif