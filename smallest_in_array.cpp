#include<stdio.h>
int main()
{
	int arr[100],n,i,smallest;
	printf("Enter the no.of elements : \n");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	smallest=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<smallest)
		smallest=arr[i];
	}
	printf("%d",smallest);
}
