#include<stdio.h>

main()
{
	int *p;
	char data [100];
	p = fopen("document.txt","r");
	
		if (p==0)
		{
			printf(" fill is not found");		
		}
		else
		{
//			printf(" fill opened");
			while(fgets(data ,30,p)!=0)
			{
			printf(data);	
			}	
		}
	fclose(p);
	return 0;	
	
}