#include<bit/stdc++.h>
const int maxn = 100005, maxm = 500005;
int n, m;
struct Edges
{
    int next, to, weight;
} e[maxm];
int head[maxn], tot;
int dist[maxn];
bool vis[maxn];//�ж��Ƿ��ڶ�����
void spfa(int s)
{
    std::queue<int> q;//std::queue���������TLE������д����
    memset(dist, 0x3f, sizeof(dist));
    dist[s] = 0;
    q.push(s); vis[s] = true;//�ǵñ��vis
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
