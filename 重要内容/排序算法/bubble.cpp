#include<algorithm>
const int maxn = 1005;
int a[maxn], n;
void bubble_sort()
{
    for(int i = n - 1; i >= 1; i--)//起始时不能是n，否则数组越界RE
    {
        for(int j = 1; j <= i; j++)
        {
            if(a[j] > a[j + 1]) std::swap(a[j], a[j + 1]);
        }
    }
}