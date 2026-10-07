#include<stdio.h>
int main(){
int a[100],n,i,pos,item;
printf("enter number of elements:\n");
scanf("%d",& n);
printf("enter array element:\n");
for (i=0;i<n;i++)
scanf("%d",& a[i]);
printf("enter position:");
scanf("%d",& pos);
printf("enter element:");
scanf("%d",& item);
for(i=n;i>=pos;i--)
a[i]=a[i-1];
a[pos-1]=item;
n++;
printf("array after insertion:\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
