#include<stdio.h>
int main()
{
int n,a=0,remain,b;
printf("enter the value");
scanf("%d",&n);
b=n;
while(n!=0)
{
remain=n%10;
a=a*10+remain;
n/=10;
}
if(b==a)
printf("%d palindrome",b);
else
printf("%d not palindrome",b);
return 0;
}
