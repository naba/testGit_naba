
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "main.h"
#include "test.h"


int main()
{
	int result = 0;
	int a,b;
	printf("Enter two number:\n");
	scanf("%d%d",&a,&b);

	result = add(a,b);
	printf("Result is:%d\n",result);//display the result
	getch();
	return 0;
}
