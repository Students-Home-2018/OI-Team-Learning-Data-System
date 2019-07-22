#include<bits/stdc++.h>
const int maxn = 100005, maxm = 500005;
int n, m;
struct Edges
{
    int next, to, weight;
} e[maxm];
int head[maxn], tot;
int dist[maxn];
int cnt[maxn];
struct HeapNode
{
    int d, u;//dist[x]与x
    bool operator < (const HeapNode &rhs) const//重载小于运算符后堆才能维护
    {
        return d > rhs.d;//很奇怪，需要反过来设置
    }
};
void dijkstra_heap(int s)
{
    std::priority_queue<HeapNode> q;
    memset(dist, 0x3f, sizeof(dist));
    dist[s] = 0; q.push((HeapNode){dist[s], s}); cnt[s] = 1;// 初始化 
    while(!q.empty())
    {
        HeapNode sb = q.top(); q.pop();//取堆顶元素，然后堆顶删除
        if(done[sb.u]) continue;
        int u = sb.u;
        done[u] = true;
        for(int i = head[u]; i; i = e[i].next)
        {
            int v = e[i].to;
            if(dist[v] < dist[u] + e[i].weight)
            {
                dist[v] = dist[u] + e[i].weight; 
                q.push((HeapNode){dist[v], v});//已经更新，可能更小，应该进堆
                cnt[v] = cnt[u];// 重新算 
            } else if(dist[v] == dist[u] + e[i].weight) cnt[v] += cnt[u];// 最短路计数 
        }
    }
}
