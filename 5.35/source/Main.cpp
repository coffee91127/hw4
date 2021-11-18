#include<stdio.h>
#include<stdlib.h>
unsigned int Fibonacci(unsigned long long int a);
unsigned int Fibonaccimost(unsigned long long int b);
int main(void)
{
	unsigned long i,j;
	scanf_s("%d",&j);
	i = Fibonacci(j);
	printf("%d\n",i);
	i = Fibonaccimost(j);
	printf("%d", i);
	system("pause");
	return 0;
}
unsigned int Fibonacci(unsigned long long int a)
{
	int i,temp,temp2,temp3;
	i =2;
	temp = 0;
	temp2 = 1;
	temp3 = 1;
	while (1)
	{
		if (temp3 == temp + temp2)
		{
			i++;
			temp = temp2;
			temp2 = temp3;
		}
		if (i==a)
		{
			return temp3;
			break;
		}
		if (a == 2)
		{
			return 1;
			break;
		}
		temp3++;
	}
}
unsigned int Fibonaccimost(unsigned long long int b)
{
	int i, temp, temp2, temp3;
	i = 2;
	temp = 0;
	temp2 = 1;
	temp3 = 1;
	while (1)
	{
		if (temp3 == temp + temp2)
		{
			i++;
			temp = temp2;
			temp2 = temp3;
			printf("%3d %3d\n",temp3,i);

		}
		temp3++;
		if (temp3 < 0)
		{
			
			break;
		}
	}

	return 0;
	
}