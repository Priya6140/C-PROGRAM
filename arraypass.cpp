#include<stdio.h>
void disp(int);
main()
{
	int i;
	int marks[]={55,65,75,85,95};
	for(i=0;i<5;i++)
	{
		disp(marks[i]);
	}
}
void disp(int m)
{
	printf("%d\t",m);
}
