#include<stdio.h>
#include<string.h>
int main()
{
	char ch[]="Jiten das";
	int count,i;
	FILE *fp;
	count=strlen(ch);
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("File is not available");
	}
	else
	{
		for(i=0;i<count;i++)
		{
			fputc(ch[i],fp);
		}
		printf("Data inserted successfull");
		fclose(fp);
	}
	return 0;
}
