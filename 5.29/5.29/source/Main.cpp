#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int lcm(int i, int j);
int main()
{
	int a, b,c;
	srand(time(NULL));
	a = rand() % 100;
	b = rand() % 100;
	printf("%d \n %d\n", a, b);
	c = lcm(a, b);
	printf("%d", c);
	
	system("pause");
	return 0;
	
}
int lcm(int i, int j)
{
	int k,temp=i*j;
	
	for (k = i * j; k > j; k--)
	{
		if (k%j == 0 && k%i == 0 && k<temp)
		{
			temp = k;
		}

	}

	return temp;

}