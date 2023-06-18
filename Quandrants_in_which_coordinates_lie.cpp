#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the x and y co-ordinates : \n");
	scanf("%d",&x);
	scanf("%d",&y);
	if(x>0 && y>0)
	printf("(%d,%d) lies in the first quadrant\n",x,y);
	else if(x<0 && y>0)
	printf("(%d,%d) lies in the second quadrant\n",x,y);
	else if(x>0 && y<0)
	printf("(%d,%d) lies in the third quadrant\n",x,y);
	else if(x>0 && y<0)
	printf("(%d,%d) lies in the fourth quadrant\n",x,y);
	else if(x==0)
	printf("(%d,%d) lies in the y-axis\n",x,y);
	else if(y==0)
	printf("(%d,%d) lies in the x-axis\n",x,y);
	else
	printf("(%d,%d) lies in the origin\n",x,y);
}
