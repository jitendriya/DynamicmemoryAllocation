#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int *pArr;
	int i;
	pArr = (int *)calloc(5,sizeof(int));
	printf("\n Default values:");
	for(i = 0 ;i < 5;i++)
	{
	printf("%d\t",pArr[i]);
	}
	*pArr = 'C';
	printf("\n Asigned Values :");
	for(i = 0 ; i < 5; i++,++(*pArr))
	{
	printf("%c\t",*pArr);

	}	
	
	//free(pArr);
	return 0;
}
