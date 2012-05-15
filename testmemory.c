#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	int *arr;
	int n = 10,i,sum = 0;
	arr = (int *)malloc(sizeof(int)*n);
	printf("\n default values of arr:");
	for(i = 0; i < n; i++)
	printf("\n %d",arr[i]);
	printf("\n enter %d values :",n);
	for(i = 0; i < n;i++)
	scanf("\n %d",&arr[i]);
	printf("\n ArrList: \n");
	for(i =0 ;i < n;i++)
	{
	printf("%d \t",arr[i]);
	sum += arr[i];
	}
	printf("\n sum of list:%d",sum);

	return 0;
	
}
