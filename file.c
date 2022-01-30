#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("File not available");
	}
	else
	{
		printf("File available");
	}
	return 0;
}
