#include<stdio.h>
void print(int *ptr1, int n)
{
	int i;
	printf("\nthe copied elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr1+i));
	}
}
int copy(int *ptr,int *ptr1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(ptr1+i) = *(ptr+i); 
	}
}
int main()
{
	int a[100],b[100];
	int *ptr,*ptr1;
	ptr=a;
	ptr1=b;
	int i,n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	int (*func_1)(int*,int*,int) = &copy;      ///////////////function pointer 1
	(*func_1)(a,b,n);
	void (*func_2)(int*,int) = print;          ////////////////////////function pointer 2
	(func_2)(b,n);
}
