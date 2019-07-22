#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
#define ll long long

const int maxn = 100005;
ll a[maxn];
int n, m;

struct segTree {
	ll minv[maxn << 2], sum[maxn << 2], lazy[maxn << 2];
	#define lson (root << 1)
	#define rson (root << 1 | 1)
	void pushup(int root) {
		minv[root] = std::min(minv[lson], minv[rson]);
		sum[root] = sum[lson] + sum[rson];
	}
	void pushdown(int root, int l, int r) {
		if(lazy[root]) {
			int mid = (l + r) >> 1;
			sum[lson] += (mid - l + 1) * lazy[root];
			sum[rson] += (r - mid) * lazy[root];
			minv[lson] += lazy[root];
			minv[rson] += lazy[root];
			lazy[lson] += lazy[root];
			lazy[rson] += lazy[root];
			lazy[root] = 0;
		}
	}
	void build(int root, int l, int r) {
		lazy[root] = 0;
		if(l == r) minv[root] = sum[root] = a[l];
		else {
			int mid = (l + r) >> 1;
			build(lson, l, mid);
			build(rson, mid + 1, r);
			pushup(root);
		}
	}
	void update(int root, int l, int r, int x, int y, ll k) {
		if(r < x || y < l) return;
		if(x <= l && r <= y) {
			sum[root] += (r - l + 1) * k;
			minv[root] += k;
			lazy[root] += k;
			return;
		}
		pushdown(root, l, r);
		int mid = (l + r) >> 1;
		update(lson, l, mid, x, y, k);
		update(rson, mid + 1, r, x, y, k);
		pushup(root);
	}
	ll query(int root, int l, int r, int x, int y) {
		if(r < x || y < l) return 0;
		if(x <= l && r <= y) return sum[root];
		pushdown(root, l, r);
		int mid = (l + r) >> 1;
		return query(lson, l, mid, x, y) + query(rson, mid + 1, r, x, y);
	}
} seg;
int main() {
	std::ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	seg.build(1, 1, n);
	int opt, x, y; ll k;
	while(m--) {
		cin >> opt;
		if(opt == 1) {
			cin >> x >> y >> k;
			seg.update(1, 1, n, x, y, k);
		} else if(opt == 2) {
			cin >> x >> y;
			cout << seg.query(1, 1, n, x, y) << endl;
		}
	}
	return 0;
}
