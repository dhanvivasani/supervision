#include<stdio.h>

main()

{
	
	
	FILE *p;
	char data [1000];
	
	p = fopen("fhand.txt","w");
	if(p==NULL)
	
	{
		  printf(" this file is not open...\n");
	}
	else
	{
		printf("enter data you want to input in text file..");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add sucssefuly..............");
	}
	fclose(p);
}
