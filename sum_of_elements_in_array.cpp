#include<stdio.h>
int main()
{
	int arr[100],n,sum=0;
	printf("Enter the no.of elements : \n");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%d",sum);
}
	
