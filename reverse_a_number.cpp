#include<stdio.h>
int rev_num(int num);
int main()
{
	int n,reverse;
	printf("Enter a number : \n");
	scanf("%d",&n);
	reverse = rev_num(n);
	printf("%d when reversed turns into %d",n,reverse);
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
