#include<iostream>
const int maxn = 1005;
int n, m;
int G[maxn][maxn];
void floyd()
{
    for(int k = 1; k <= n; k++)//最重要的地方：k在最外层！
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                G[i][j] = std::min(G[i][j], G[i][k] + G[k][j]);
            }
        }
    }
}