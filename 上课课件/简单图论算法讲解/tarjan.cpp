#include<bits/stdc++.h>
const int maxn = 100005, maxm = 500005;
struct Edges {
	int next, to, weight;
} e[maxm];
int head[maxn], tot;
int dfn[maxn], low[maxn], dtot;
std::stack<int> sta;
bool vis[maxn];

void tarjan(int u) {
	dfn[u] = low[u] = ++dtot;
	sta.push(u); vis[u] = true;
	for(int i = head[u]; i; i = e[i].next) {
		int v = e[i].to;
		if(!dfn[v]) {
			tarjan(v); low[u] = std::min(low[u], low[v]);
		} else if(vis[v]) low[u] = std::min(low[u], dfn[v]);
	}
	if(dfn[u] == low[u]) {
		while(sta.top() != u) {
			int x = sta.top(); sta.pop(); vis[x] = false;
		}
		int x = sta.top(); sta.pop(); vis[x] = false;
	}
}
int main() {
	for(int i = 1; i <= n; i++) if(!dfn[i]) tarjan(i);
}
