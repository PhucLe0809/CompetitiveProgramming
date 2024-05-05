#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k;
	vector <pair<int, int>> inp(n);
	for (int i = 0; i < n; i++){
		cin >> inp[i].second >> inp[i].first;
    }
	sort(inp.begin(), inp.end());
	int answer = 0;
	multiset <int> thend;
	for (int i = 0; i < k; i++) thend.insert(0);
	for (int i = 0; i < n; i++) {
		auto it = thend.upper_bound(inp[i].second);
		if (it == thend.begin()) continue;
		thend.erase(--it);
		thend.insert(inp[i].first);
		answer++;
	}
    cout << answer;
    return 0;
}