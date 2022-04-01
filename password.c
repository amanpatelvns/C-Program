#include<stdio.h>

int main()
{
	char ch, pass[100];
	int i=0;
	for(i=0;;)
	{
		ch = getch();
		if(ch==13)
		break;
		
		if(ch==8)
		{
		printf("\b");
		i--;	
		}		
		else
		{		
		printf("*");
		pass[i++] = ch;
    	}
    	
	}
	pass[i] = '\0';
	printf("\nEnter password id %s",pass);
}
