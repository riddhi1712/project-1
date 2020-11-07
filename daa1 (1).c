#include<stdio.h>
void main()
{
	int a[10], i,j, num, flag=0, temp, l=0,u=9, mid;
	
	for(i=0;i<=9;i++)
	{
		printf("enter the number");
		scanf("%d",&a[i]);
	}
	printf("enter the no. to be searched");
	scanf("%d",&num);
	for(i=0;i<=8;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	while(l<=u)
	{
		mid=(l+u)/2;
		if(a[mid]==num)
		{
			printf("present");
			flag=1;
			break;
		}
		if(num>a[mid])
		{
			l=mid+1;
		}
		if(num<a[mid])
		{
			u=mid-1;
		}
	}
	if(flag==0)
	{
		printf("not present");
	}
}
