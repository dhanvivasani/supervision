#include<stdio.h>

main()

{
	
	
	FILE *p;
	char data [1000];
	
	p = fopen("d.txt","a");
	if(p==NULL)
	{
		printf("this file is could not open..\n");
	}
	else
	{
		printf("enter data you want to input in text file..");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add sucssefuly....");
		
    }      
	fclose(p);
	
     p=fopen("d,txt","r");
     
     if(p==NULL)
     {
     	  printf("this file can not open..\n");
	 }
	 else
	 {
	 	while(fgets(data,30,p)!=NULL)
        {
        	printf("%s",data);
		}
	 }
	 fclose(p);
	 
}
