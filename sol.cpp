#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[1000], n;
	cin >> n;
	int mx = 0, mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mn = min(mn, a[i]);
		mx = max(mx, a[i]);
	}
	cout << max(0, (mx - mn) - n + 1) << '\n';
	return 0;
}
