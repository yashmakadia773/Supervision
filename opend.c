#include<stdio.h>

main()
{
	int *p;
	char data[1000];
	
	p = fopen("document.txt","a");
	
	if(p==0)
	{
		printf("File could not open");
	}
	else
	{
		printf("Enter data = ");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data add successfull.....");
	}
	fclose(p);
	
		printf("\n\n--------Read Data----------\n");
		
	p = fopen("demo.txt","r");
	
	if(p==0)
	{
		printf("File could not open");
	}
	else
	{
		while(fgets(data,30,p)!=0)
		{
			printf(data);
		}
	}
	fclose(p);
}
