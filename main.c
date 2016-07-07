#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int a1, b, c1;
	char operator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &a1, &operator, &b);
	
	
	switch (operator)
	{
		case '+':
			c = add(a1, b);
			break;
		case '-':
			c = sub(a1, b);
			break;
		case '*':
			c = multi(a1, b);
			break;
		case '/':
			c = div(a1, b);
			break;
	}
	
	printf("result is %d.\n", c1);
	
	return 0;
}
 
int add(int a, int b)
{
	int result = a+b;
	prinft("###a+b="+ result);
	return result;
}
 
int sub(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int multi(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int div(int a, int b)
{
	//TODO implementation
	return 0;
}