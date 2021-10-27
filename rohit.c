#include<stdio.h>
int main()
{
int n,a,b,c,reverse;
printf("enter the numbers");
scanf("%d",&n);
a=(n/100);
b=(n%100) / 10;
c=(n%10);   
   
 reverse = c*100+b*10+a*1;


printf("the reverse of the number is %d",reverse);
return 0;
}
