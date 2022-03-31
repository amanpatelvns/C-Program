#include<stdio.h>

void fun(int [],int);
int main()
{
//	printf("Hello World\n");
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int s = sizeof(arr)/sizeof(arr[9]);
	fun(arr,s);
	return 0;
}

void fun(int arr[],int s){
	 if(s>-1){
	 	
	 fun(arr, s-1);
	 printf("arr[%d] is: %d\n",s,arr[s]);
	 
	// printf("arr[%d] is: %d\n",s,arr[s]);
	 //fun(arr, s-1);
	 
	 }
}
