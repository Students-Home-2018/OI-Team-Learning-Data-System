#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
#define ll long long
const ll maxn = 500005;
ll a[maxn];
ll n, m;

struct BIT {
	ll c[maxn];
	inline ll lowbit(ll x) {
		return x & -x;
	}
	void add(ll i, ll v) {
		for(; i <= n; i += lowbit(i)) {
			c[i] += v;
		}
	}
	ll query(ll i) {
		ll ans = 0;
		for(; i >= 1; i -= lowbit(i)) {
			ans += c[i];
		}
		return ans;
	}
} s;
int main() {
	std::ios::sync_with_stdio(false);
	cin >> n >> m;
	for(ll i = 1; i <= n; i++) {
		cin >> a[i];
		s.add(i, a[i]);
	}
	ll opt, x, y, k;
	while(m--) {
		cin >> opt;
		if(opt == 1) {
			cin >> x >> k;
			s.add(x, k);
		} else if(opt == 2) {
			cin >> x >> y;
			cout << s.query(y) - s.query(x - 1) << endl;
		}
	}
	return 0;
}
