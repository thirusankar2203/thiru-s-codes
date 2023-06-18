#include<stdio.h>
int main()
{
	int base,exp,prod=1;
	printf("Enter the base : \n");
	scanf("%d",&base);
	printf("Enter the exponent : \n");
	scanf("%d",&exp);
    int	temp=exp;
	while(exp!=0)
	{
		prod=prod*base;
		exp--;
	}
	printf("%d to the power of %d is %d",base,temp,prod);
}
