#include<stdio.h>
#include"control.c"
#include "scan.c"
int main()
{
	int a;
	scan("%d",&a);
	printf("No : %d\n",a);
return 0;	
}
