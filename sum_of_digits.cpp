#include<stdio.h>
int digit(int num);
int main()
{
	int n;
	printf("Enter a number : \n");
	scanf("%d",&n);
	int sum_digits=digit(n);
	printf("Sum of digits of %d is %d ",n,sum_digits);
}
int digit(int num)
{
	int rem,sum=0;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	return sum;
}

