#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
using ll = unsigned long long;

void solve() {
	int n, k; cin >> n >> k;

	vector<int> a(n);
	for (auto &i : a) {
		cin >> i;
	}
	vector<int> b(a.begin(), a.end());
	sort(b.begin(), b.end());

	if (k <= 1 && b != a) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
	return;
}


signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt ; cin >> tt ;

	while (tt--) {solve();}
	return 0;
}