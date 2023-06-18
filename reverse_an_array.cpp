#include<stdio.h>
int main()
{
	int arr[100],arr1[100],n,i,j=0,smallest,k;
	printf("Enter the no.of elements : \n");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n;i>0;i--)
	{
		arr1[j]=arr[i-1];
		j++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d,",arr1[i]);
	}
}
