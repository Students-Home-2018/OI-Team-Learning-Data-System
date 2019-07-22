#include<bits/stdc++.h>
const int maxn = 1005, INF = 19260817;//INF随题目而定
int n, m;
int G[maxn][maxn];
int dist[maxn];//最短路
bool vis[maxn];//是否访问过

void dijkstra(int s)
{
    vis[s] = true;//点变蓝了
    for(int i = 1; i <= n; i++) dist[i] = G[s][i];//已经进行1次更新
    for(int j = 1; j < n; j++)//再进行n-1次更新
    {
        int minw = INF, minidx = -1;//minidx初值无所谓，反正都会被更新
        for(int i = 1; i <= n; i++)//遍历dist数组，找到最小值及最小值的下标
        {
            if(!vis[i] && dist[i] < minw)//确保找到的点是白点
            {
                minw = dist[i];
                minidx = i;
            }
        }
        vis[minidx] = true;//将白点变蓝
        for(int i = 1; i <= n; i++)
        {
            if(!vis[i] && dist[i] < dist[minidx] + G[minidx][i])//只更新白点
            {
                dist[i] = dist[minidx] + G[minidx][i];
            }
        }
    }
}
