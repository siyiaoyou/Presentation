#include <stdio.h>
int combinationNumbers(int up, int down);
int isPrime(int n);
int main()
{
	int up, down, n;
	printf("计算组合数：");
	scanf("%d%d", &up, &down);
	printf("%d\n", combinationNumbers(up, down));
	printf("判断素数：");
	scanf("%d", &n);
	if (isPrime(n))
		printf("是素数\n");
	else
		printf("不是素数\n");
	return 0;
}
int combinationNumbers(int up, int down)
{
	int a;
	double result = 1;
	if(up == 0)
		result = 0;
	else 
	{
		for(a=0;a<up;a++)
		result *= (down-a)/(up-a);
	}
	return result;
}
int isPrime(int n)
{
	int a;
	for (a = (int)sqrt(n); a >= 2; a--)
	{
		if (n%2 == 0)
			break;
	}
	if (a >= 2)
		return 0;
	else
		return 1;
}
