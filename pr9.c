//Q1.
#include<stdio.h>

void main()
{
	FILE *p1 , *p2;
	
	int i;
	
	
	printf("=>=>=>=>=>  Program to create even & odd number files  <=<=<=<=<=\n");

	
	p1 = fopen("even.txt","w");
	
	if(p1 != NULL)
	{
		printf("File Created even.txt\n");
	}
	else
	{
		printf("File does not created\n");
	}
	
    for(i = 50; i <= 70; i++)
    {
    	if(i % 2 == 0)
    	{
    		fprintf(p1,"%d\n",i);
		}
	}
	
	p2 = fopen("odd.txt","w");
	
	if(p2 != NULL)
	{
		printf("File Created odd.txt\n");
	}
	else
	{
		printf("File does not created\n");
	}
	
    for(i = 50; i <= 70; i++)
    {
    	if(i % 2 != 0)
    	{
    		fprintf(p2,"%d\n",i);
		}
	}
}
