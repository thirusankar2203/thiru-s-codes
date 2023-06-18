#include<stdio.h>
int main()
{
	int n,digit,count=0;
	printf("Enter a number : \n");
	scanf("%d",&n);
	printf("Enter the digit : \n");
	scanf("%d",&digit);
	while(n!=0)
	{
		int rem=n%10;
		if(rem==digit)
		count++;
		n=n/10;
	}
	printf("%d occurs %d times in the given number",digit,count);
}
