#include<bits/stdc++.h>
struct Edge
{
    int u, v, w;
} s[maxm << 1];
int fa[maxn];
int n, m, ans;
bool cmp(const Edge a, const Edge b)
{
    return a.w < b.w;
}
int find(int x)
{
    if(fa[x] == x) return x;
    return fa[x] = find(fa[x]);
}
int main()
{
    //the process of input
    for(int i = 1; i <= n; i++) fa[i] = i;
    sort(s + 1, s + m + 1, cmp);
    for(int i = 1; i <= m; i++)
    {
        int x = find(s[i].u), y = find(s[i].v);
        if(x != y)//x == y means they link together
        {
            fa[x] = y;
            ans++;
            if(ans == n - 1)
            {
                printf("%d %d\n", ans, s[i].w);
                return 0;
            }
        }
    }
} 
