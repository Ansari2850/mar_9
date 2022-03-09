#include<stdio.h>
#include<string.h>
#define N1 strlen(str1)
#define N2 strlen(str2)
enum val{no,yes}a;
int compare(char *ptr1, char *ptr2)
{
	int i;
	for(i=0;*(ptr1+i)!='\0';i++)
    {
		if(*(ptr1+i)==*(ptr2+i))
		{
		   return a;
	    }
		else
		   return a;
	}	
}

int main()
{
	char str1[20]="ansari";
	char str2[20]="ansari";
	char *ptr1=str1;
	char *ptr2=str2;
	int i=0;
	int (*func_ptr)(char*,char*) = compare;
	(func_ptr)(str1,str2);

			if(N1>N2)
			{
				printf("str1 is greater than str2");
			}
			else if(N2>N1)
			{
				printf("str2 is greater than str1");
			}
			else
			{
				printf("both strings are same length");
			}
}
