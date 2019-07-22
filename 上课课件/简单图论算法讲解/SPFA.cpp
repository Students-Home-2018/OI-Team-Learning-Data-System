#include<bit/stdc++.h>
const int maxn = 100005, maxm = 500005;
int n, m;
struct Edges
{
    int next, to, weight;
} e[maxm];
int head[maxn], tot;
int dist[maxn];
bool vis[maxn];//判断是否在队列中
void spfa(int s)
{
    std::queue<int> q;//std::queue很慢，如果TLE可以手写队列
    memset(dist, 0x3f, sizeof(dist));
    dist[s] = 0;
    q.push(s); vis[s] = true;//记得标记vis
    while(!q.empty())
    {
        int u = q.front(); q.pop(); vis[u] = false;
        for(int i = head[u]; i; i = e[i].next)
        {
            int v = e[i].to;
            if(dist[v] < dist[u] + e[i].weight)
            {
                dist[v] = dist[u] + e[i].weight;
                if(!vis[v])
                {
                    q.push(v); vis[v] = true;
                }
            }
        }
    }
}
