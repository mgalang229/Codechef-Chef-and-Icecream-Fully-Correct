#include <bits/stdc++.h>

using namespace std;

#define SQ(a) (a)*(a)
#define ll long long
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define vi vector<int>

void decode() {
	int a[1000], f = 0, t = 0, n;
	cin >> n;
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < n; ++i) {
		if(a[i] == 5) {
			f++;
		}
		else if(a[i] == 10) {
			if(f == 0) break;
			else f--;
			t++;
		}
		else {
			if(t == 0 && f <= 1) break;
			else if (t != 0) t--;
			else if(f >= 2) f -= 2;
		}
		cnt++;
	}
	if(cnt == n) cout << "YES";
	else cout << "NO";
	cout << "\n";
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
