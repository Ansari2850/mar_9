#include<stdio.h>
int swap(int *ptr, int *ptr1, int n)
{
	int i,temp;
	for(i=0;i<n;i++)
	{
		temp = ptr[i];
		ptr[i] = ptr1[i];
		ptr1[i] = temp;
	}
}
void print_1(int *ptr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a=%d ",*(ptr+i));
	}
}
void print_2(int *ptr1, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nb=%d ",*(ptr1+i));
	}
}
int main()
{
	int a[]={10,20,30},b[]={40,50,60};
	int *ptr,*ptr1;
	ptr=a;
	ptr1=b;
	int n=sizeof(a)/sizeof(a[0]);
	int i,temp;
	printf("elements after swap:");
	int (*fun_ptr1)(int*,int*,int) = swap;
	(fun_ptr1)(a,b,n);
	void (*fun_ptr2)(int*,int) = &print_1;
	(*fun_ptr2)(a,n);
	void (*fun_ptr3)(int*,int) = print_2;
	(fun_ptr3)(b,n);
}
