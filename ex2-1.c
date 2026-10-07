#include <stdio.h>
struct employee {
int id;
char name[50];
float salary;
};
int main(){
int n,i;
printf("enter number of employees:");
scanf("%d",&n");
struct employee emp[n];
for(i=0;i<n;i++){
printf("\nemployee %d\n",i+1);
printf("enter ID:");
scanf("%d",&emp[i].id);
printf("enter name:");
scanf("%s",emp[i].name);
printf("enter salary:");
scanf("%f",&emp[i].salary);
}
printf("\nEmployee Details:\n");
for(i=0;i<n;i++)
{
printf("ID  :%d\n",emp[i].id);
printf("name  :%s\n",emp[i].name);
printf("salary  :%.2f\n\n",emp[i].salary);
}
return 0;
}
