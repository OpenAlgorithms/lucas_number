#include <stdio.h>

int l1(int n)
{
	if(n == 0)
		return 1;
	else if(n == 1)
		return 3;
	else
		return l1(n - 2) + l1(n - 1);
}

int l2(int n)
{
	if(n == 0)
		return 1;
	else if(n == 1)
		return 3;
	else
	{
		int x = 1, y = 3, z;
		while(n > 1)
		{
			z = y;
			y += x;
			x = z;
			n--;
		}
		return y;
	}
}

int main()
{
	for(int i = 0; i < 10; i++)
		printf("%i ", l1(i));
	printf("\n");

	for(int i = 0; i < 10; i++)
		printf("%i ", l2(i));
	printf("\n");

	return 0;
}
