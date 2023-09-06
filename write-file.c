#include<stdio.h>

main()
{
	int *p;
	char data [100];
	p = fopen("document.txt","a");
	
		if (p==0)
		{
			printf(" fill is not found");		
		}
		else
		{
			printf("enter data = ");
			gets(data);	
			fputs(data,p);
			printf("data add successful");
			
		}
	fclose(p);
	return 0;	
	
}