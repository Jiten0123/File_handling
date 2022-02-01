#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp=NULL;
	char ch[20];
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("File not available");
	}
	else
	{
		while(!feof(fp))
		{
			fgets(ch,20,fp);
			printf("%s",ch);
		}
	}
	fclose(fp);
	getch();
	return 0;
}
