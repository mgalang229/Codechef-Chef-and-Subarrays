#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int n;
	cin >> n;
	vector<long int> a;
	for(int i = 0; i < n; ++i) {
		long int x;
		cin >> x;
		a.push_back(x);
	}
	int cnt = 0;
	long int s, p;
	for(int i = 0; i < n; ++i) {
		s = 0;
		p = 1;
		for(int j = i; j < n; ++j) {
			s += a[j];
			p *= a[j];
			if(s == p) cnt++;
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
