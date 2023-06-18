#include<stdio.h>
int main()
{
	int arr[100],n,i,j;
	printf("Enter n : \n");
	scanf("%d",&n);
	printf("Enter the elemenst : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count>1)
		printf("%d,",arr[i]);
	}
	
}
