#include<stdio.h>
#include<string.h>

struct stu_details
{
	int age;
	int rollnum;
	char name[20];
};

int main()
{
	struct stu_details stu1, stu2;
	
	stu1.age = 45;
	stu1.rollnum = 1001;
	strcpy( stu1.name, "Amit" );
	
	printf("\n Age :%d",stu1.age);
	printf("\n Rollnum :%d",stu1.rollnum);
	printf("\n Name :%s",stu1.name);
	
	
	stu2.age = 22;
	stu2.rollnum = 1002;
	strcpy(stu2.name, "Sachin");
	
	printf("\n Age :%d",stu2.age);
	printf("\n Rollnum :%d",stu2.rollnum);
	printf("\n Name :%s",stu2.name);
	
}
