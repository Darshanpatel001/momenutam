#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter any character : ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("%c is alphabet",ch);
	}
	else if(ch>='1' && ch<='9')
	{
		printf("%c is numeric",ch);
	}
	else
	{
		printf("%c is special character",ch);
	}
}