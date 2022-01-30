#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	printf("enter a string:");
	gets(ch);
	FILE *fp;
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("File is not available");
	}
	else
	{
		fputs(ch,fp);
		printf("Data inserted successfull");
		fclose(fp);
	}
	return 0;
}
