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
    int d, u;//dist[x]��x
    bool operator < (const HeapNode &rhs) const//����С���������Ѳ���ά��
    {
        return d > rhs.d;//����֣���Ҫ����������
    }
};
void dijkstra_heap(int s)
{
    std::priority_queue<HeapNode> q;
    memset(dist, 0x3f, sizeof(dist));
    dist[s] = 0; q.push((HeapNode){dist[s], s}); cnt[s] = 1;// ��ʼ�� 
    while(!q.empty())
    {
        HeapNode sb = q.top(); q.pop();//ȡ�Ѷ�Ԫ�أ�Ȼ��Ѷ�ɾ��
        if(done[sb.u]) continue;
        int u = sb.u;
        done[u] = true;
        for(int i = head[u]; i; i = e[i].next)
        {
            int v = e[i].to;
            if(dist[v] < dist[u] + e[i].weight)
            {
                dist[v] = dist[u] + e[i].weight; 
                q.push((HeapNode){dist[v], v});//�Ѿ����£����ܸ�С��Ӧ�ý���
                cnt[v] = cnt[u];// ������ 
            } else if(dist[v] == dist[u] + e[i].weight) cnt[v] += cnt[u];// ���·���� 
        }
    }
}
