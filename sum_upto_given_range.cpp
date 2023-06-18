#include<stdio.h>
int main()
{
	int n1,n2,i,sum=0;
	printf("Enter N1 : \n");
	scanf("%d",&n1);
	printf("Enter N2 : \n");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
