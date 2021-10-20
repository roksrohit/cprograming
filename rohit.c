#include<stdio.h>
int main()
{
int x,num;
scanf("%d",&x);
num= x>>5;
printf("%d",num);
num= x<<5;
printf("%d",num);
num= (x<<5)-x;
printf("%d",num);
num= (x<<5)+x;

printf("%d",~x);
return 0;
}
