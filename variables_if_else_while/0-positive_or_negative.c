#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	n=getc(stdin);
	if(n<0){
		printf("is negative");
	}
	else if(n=0){
		printf("is zero");
	}
	 else if(n>0){
                printf("is positive");
        }
	    	return (0);
}
