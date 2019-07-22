#include<bits/stdc++.h>
int n, ans;
int G[maxn][maxn];
int minv[maxn];
bool vis[maxn];
void prim()
{
    for(int i = 1; i <= n; i++) minv[i] = G[1][i];
    vis[1] = true;
    for(int i = 1; i < n; i++)
    {
        int min_index = maxn, min_weight = INF;
        for(int j = 1; j <= n; j++)
        {
            if(!vis[j] && min_weight > minv[j])
            {
                min_weight = minv[j];
                min_index = j;
            }
        }
        ans += min_weight;
        vis[min_index] = true;
        for(int j = 1; j <= n; j++)
        {
            if(!vis[j] && minv[j] > G[min_index][j])
            {
                minv[j] = G[min_index][j];
            }
        }
    }
} 
