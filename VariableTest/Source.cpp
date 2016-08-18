#include<iostream>
int main()
{
	int num = 5;
	{
		int x = 25;
		num = x;
	}
	printf("%i", num);
	system("pause");
	return 0;
}