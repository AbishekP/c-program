#include<stdio.h>
int main()
{
int n,a,sum=1,fact=1;
scanf("%d",&a);
n=a;
while(a!=0)
{
sum=sum*a;
a--;
}
printf("factorial of %d using while loop is:%d\n",n,sum);
/*using for loop*/
for(int i=1;i<=n;i++)
    {
    fact=fact*i;
    }
printf("factorial of %d using for loop is:%d",n,fact);
}
