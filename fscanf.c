#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp=NULL;
	char newvar[20];
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("file not available");
	}
	else
	{
		fscanf(fp,"%s",newvar);
		printf("%s",newvar);
	}
	fclose(fp);
	getch();
	return 0;
}
