#include <stdio.h>
#include <stdlib.h>

long int Fibonacci (int n)
{
	if(n > 2)
		return Fibonacci(n-1)+Fibonacci(n-2);
	else
		return 1;
}

long int Geometric (int n)
{
	if(n > 1)
		return 4*Geometric(n-1);
	else
		return 1;
}

int main (int argc, char* argv[])
{
	int n = atoi(argv[1]);

	if(argv[2][0] == 'f')
	{
		for(int i = 1; i <= n; i++)
		{
			long int number = Fibonacci(i);
			printf("%ld\n", number);
		}
	}

	else if(argv[2][0]=='g')
	{
		for(int i = 1; i <= n; i++)
		{
			long int number = Geometric(i);
			printf("%ld\n", number);
		}
	}
}