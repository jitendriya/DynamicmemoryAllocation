#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int *pArr;
	int i,n1,n2;
	printf("\n enter the size "); 
	scanf("%d",&n1);

	pArr = (int *)calloc(n1,sizeof(int));
	
	for(i = 0 ;i <n1;i++)
	{
	scanf("%d",&pArr[i]);
	}
	printf("\n Asigned Values :");
	for(i = 0 ; i < n1; i++,++(*pArr))
	{
	printf("%d\t",pArr[i]);

	}	
	printf("\n extended upto another n2 values:");
	scanf("%d",&n2);

	pArr = (int *)realloc(pArr,sizeof(int)*(n1+n2));
	for( i =0; i<(n1+n2);i++)
	{
	scanf("%d",&pArr[i]);
	}
	 for(i = 0 ; i < n1+n2; i++,++(*pArr))
        {
        printf("%d\t",pArr[i]);

        } 
	

	free(pArr);
	return 0;
}
