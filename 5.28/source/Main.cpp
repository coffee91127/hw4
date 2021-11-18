#include<stdio.h>
#include<stdlib.h>
int case1(int i);
int main()
{
	int k = 1;
	char a, b;
	printf("65A 97a \n");
	while (k=1)
	{
	scanf_s("%c", &a);
	b = case1(a);
	printf("%c", b);
	}

	system("pause");
	return 0;
}
int case1(int  i)
{
	if (i < 97)
	{
		i = i + 32;
	}
	else if (i >= 97)
	{
		i = i - 32;
	}

	return i;

}