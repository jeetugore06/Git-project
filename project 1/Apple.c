#include<stdio.h>

int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int n=*(*(arr+2))+2;
	printf("%d\n",n);
	
	int m=sizeof(arr[0])/sizeof(int);
	printf("%d",m);
}
