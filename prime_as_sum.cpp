#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter a number : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;(k<=i||k<=j);k++)
			{
				if(i+j==n)
				{
					if((i%k==0 && j%k==0))
					printf("%d,%d\n",i,j);
				}
			}
		}
	}
}
