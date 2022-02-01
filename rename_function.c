#include<stdio.h>
#include<conio.h>
int main()
{
	if(rename("abc.txt","part.txt")==0)
	{
		printf("file renamed successfully");
	}
	else
	{
		printf("Error");
	}
	getch();
	return 0;
}
