#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,in;
	printf("Enter a number : \n");
	scanf("%d",&n);
	x=sqrt(n);
	in=x*x;
	if(n==in)
	printf("%d is a perfect square \n",n);
	else
	printf("%d is not a perfect square \n",n);
}
