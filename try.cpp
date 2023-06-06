#include<stdio.h>
int main()
{
	int arr[100];
	int i,n;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter elements\n");
		for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements are:");
	for(i=0;i<n;i++)
	
	{
	printf("\n%d",arr[i]);
}
return 0;
}
