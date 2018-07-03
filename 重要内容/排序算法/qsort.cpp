#include<algorithm>

const int maxn = 100005;
int a[maxn], n;
void qsort(int l, int r)
{
	int mid = a[(l + r) >> 1];
	int i = l, j = r;
	while(i <= j)
	{
		while(a[i] < mid) i++;
		while(a[j] > mid) j--;
		if(i <= j)
		{
			std::swap(a[i], a[j]);
			i++, j--;
		}
	}
	if(l < j) qsort(l, j);
	if(i < r) qsort(i, r);
}