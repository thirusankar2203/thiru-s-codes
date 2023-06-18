#include<stdio.h>
int main()
{
	int n1,n2,i,count=0,a;
	printf("Enter the starting range : \n");
	scanf("%d",&n1);
	printf("Enter the ending range : \n");
	scanf("%d",&n2);
	for(a=n1;a<=n2;a++)
	{
		for(i=1;i<=a;i++)
		{
			if(a%i==0)
			count++;
		}
		if(count==2)
		{
			printf("%d,",a);
		}
		count=0;
	}
}
