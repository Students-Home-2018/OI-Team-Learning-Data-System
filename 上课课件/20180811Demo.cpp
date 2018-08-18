#include<cstdio>

int gcd(int x, int y)//最大公约数 
{
	if(y == 0) return x;
	return gcd(y, x % y);
}
int main()
{
	int n, m;
	while(scanf("%d%d", &n, &m) == 2)
	{
		int temp = gcd(n, m);
		printf("%d\n", temp); 
		printf("%d\n", temp); 
		printf("%d\n", temp); 
		printf("%d\n", temp); 
		printf("%d\n", temp); 
	}
	return 0;
}
