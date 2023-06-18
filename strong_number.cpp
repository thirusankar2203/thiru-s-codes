#include<stdio.h>
int fact(int num);
int main()
{
	int n,temp,rem,sum;
	printf("Enter a number : \n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+fact(rem);
		n=n/10;
	}
	if(temp==sum)
	printf("%d is a strong number \n",temp);
	else
	printf("%d is not a strong number \n",temp);
}
int fact(int num)
{
	int i,sum=1;
	for(i=1;i<=num;i++)
	{
		sum=sum*i;
	}
	return sum;
}
