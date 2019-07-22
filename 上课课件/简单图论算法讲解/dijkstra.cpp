#include<bits/stdc++.h>
const int maxn = 1005, INF = 19260817;//INF����Ŀ����
int n, m;
int G[maxn][maxn];
int dist[maxn];//���·
bool vis[maxn];//�Ƿ���ʹ�

void dijkstra(int s)
{
    vis[s] = true;//�������
    for(int i = 1; i <= n; i++) dist[i] = G[s][i];//�Ѿ�����1�θ���
    for(int j = 1; j < n; j++)//�ٽ���n-1�θ���
    {
        int minw = INF, minidx = -1;//minidx��ֵ����ν���������ᱻ����
        for(int i = 1; i <= n; i++)//����dist���飬�ҵ���Сֵ����Сֵ���±�
        {
            if(!vis[i] && dist[i] < minw)//ȷ���ҵ��ĵ��ǰ׵�
            {
                minw = dist[i];
                minidx = i;
            }
        }
        vis[minidx] = true;//���׵����
        for(int i = 1; i <= n; i++)
        {
            if(!vis[i] && dist[i] < dist[minidx] + G[minidx][i])//ֻ���°׵�
            {
                dist[i] = dist[minidx] + G[minidx][i];
            }
        }
    }
}
