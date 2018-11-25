#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;
	printf("水仙花数是:");
	for (n = 100; n < 1000; n++)
	{
		i = n / 100;
		j = n / 10 % 10;
		k = n % 10;
		if (i * 100 + j * 10 + k == i * i * i + j * j * j + k * k * k)
		{
			printf("%d\n",n);
		}
	}
	system("pause");
	return 0;
}