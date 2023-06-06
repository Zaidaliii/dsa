#include<stdio.h>
int main()
{
	int arr[10][10],i,j,n;
	printf("enter size of array:\n");
	scanf("%d",&n);
	 printf("enter elements:\n");
	  for (i=0;i<n;i++)
	  {
	  	for(j=0;j<n;j++)
	  	scanf("%d",&arr[i][j]);
	  }
	   printf("elements of array are:\n");
	    for(i=0;i<n;i++)
	    {
	    	for(j=0;j<n;j++)
{
						printf("%d",arr[i][j]);
					}
					{
					  printf("\n");
					}
		}
		
return 0;
}