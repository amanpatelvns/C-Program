#include<stdio.h>
int fact(int,int f);
int main()
{
	int num=3;
	printf("\n Fact of %d is %d",num , fact(num,6));
	return 0;
	
}
int fact(int num,int f)
{
	if(num==0 || num==1)
	return f;
	else
	return fact(num-1, f*num);
}
