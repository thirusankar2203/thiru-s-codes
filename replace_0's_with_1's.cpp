#include<stdio.h>
int rev_num(int num);
int main()
{
	int n,rem,n1=0;
	printf("Enter a number : \n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		if(rem==0)
		rem=1;
		n=n/10;
		n1=n1*10+rem;
	}
	printf("New number is : %d",rev_num(n1));
	
}
int rev_num(int num)
{
	int rem,a=0;
	while(num!=0)
	{
		rem=num%10;
		a=(a*10)+rem;
		num=num/10;
	}
	return a;
}
