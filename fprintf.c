#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[20];
	int age;
	printf("Enter your name and age:");
	scanf("%s%d",&ch,&age);
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("File not available");
	}
	else
	{
		fprintf(fp,"%s\t%d",ch,age);
		printf("data inserted");
		fclose(fp);
	}
	return 0;
}
