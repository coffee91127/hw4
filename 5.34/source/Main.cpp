#include<stdio.h>
#include<stdlib.h>
int exponent(int a, int b);
int main()
{
	int i, j,k;
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	k = exponent(i,j);
	printf("%d", k);
	system("pause");
	return 0;
}
int exponent(int a, int b)
{
	int c;
	int d=1;
	for (c = 0; c < b; c++)
	{
		d = d * a;
	}
	return d;
}