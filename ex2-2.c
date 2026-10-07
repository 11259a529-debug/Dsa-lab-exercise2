#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_EMPLOYEES 100

struct employee{
int id;
char name[50];
float salary;
};

struct employee*emp[MAX_EMPLOYEES];
int count=0;

void addemployee(){
if(count>=MAX_EMPLOYEES){
printf("employee list is full!!!\n");
return;
}

struct employee*e=(struct employee*)malloc(sizeof(struct employee));
printf("enter ID:");
scanf("%d",&e->id);
printf("enter name:");
scanf("%s",e->name);
printf("enter salary:");
scanf("%f",&e->salary);
emp[count]=e;
count++;
printf("employee added!\n\n");
}


void displayemployee(){
if(count==0){
printf("no employees to show.\n\n");
return;
}
printf("\nID\tNAME\t\tSalary\n");
for(int i=0;i<count;i++){
printf("%d\t%s\t\t%.2f\n",emp[i]->id,emp[i]->name,emp[i]->salary);
}
printf("\n");
}


void searchemployee(){
int id;
printf("enter ID to search;");
scanf("%d",&id);
for(int i=0;i<count;i++){
if(emp[i]->id==id){
printf("found:%s,salary:%.2f\n\n",emp[i]->name,emp[i]->salary);
return;
}
}
printf("employee not found.\n\n");
}


void deleteemployee() {
int id;
printf("enter ID to delete:");
scanf("%d",&id);
for(int i=0;i<count;i++){
if(emp[i]->id==id){
free(emp[i]);
emp[i]=emp[count-1];
count--;
printf("employee deleted.\n\n");
return;
}
}
printf("employee not found.\n\n");
}

void freeALL(){
for(int i=0;i<count;i++){
free(emp[i]);
}
count=0;
}

int main() {
int choice;
do{
printf("1.add 2.display 3.search 4.delete 5.exit\n");
printf("choice:");
scanf("%d",&choice);
switch(choice){
case 1: addemployee();break;
case 2: displayemployee();break;
case 3: searchemployee();break;
case 4: deleteemployee();break;
case 5: freeALL();printf("Bye!!\n");break;
default:printf("invalid choice.\n\n");
}
}while(choice !=5);
return 0;
}
