#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("File not available");
	}
	else
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		fclose(fp);
	}
	return 0;
}
