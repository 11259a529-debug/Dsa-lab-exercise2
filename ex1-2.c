#include<stdio.h>
int main(){
int a[100],n,i;
printf("enter number of elements;");
scanf("%d", & n);
printf("enter the element:\n");
for(i=0;i<n;i++)
scanf("%d",& a[i]);
printf("array elements are;\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
