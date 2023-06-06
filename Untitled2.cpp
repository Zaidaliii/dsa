//array
#include<stdio.h>
#include<string.h>
int main()
{
	int a[3][3]={1,2,3,
	4,6,7,
	8,9,10
	             
	};
	int n,i,j;
    printf("enter size of array");
    scanf("%d",&n);
	printf("enter elements");

	for(i=0;i<n;i++)
{

	for(j=0;j<n;j++)
	
	
	{
		printf("%d\t",a[i][j]);
	}
		printf("\n");
}
	return 0;
	}
