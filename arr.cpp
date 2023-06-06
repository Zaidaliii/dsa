

#include<stdio.h>
#include<string.h>
int main()
{ int a[10];
int n,i;
 printf("enter size of array\n");
    scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
	for(i=0;i<n;i++)
{
	if(a[i]>a[i+1])
	  a[i]=a[i+1];
	else 
	a[i]=a[i];
}

	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

	return 0;
	}
