#include <bits/stdc++.h>
#define inf 1000000000000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n, a, b; cin >> n >> a >> b;
	vector <int64_t> prefix(n+1);
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		prefix[i] = prefix[i-1] + x;
	}
	int64_t answer = -inf;
	multiset <int64_t> st;
	for (int i = a; i <= n; i++){
		if (i > b) st.erase(st.find(prefix[i-b - 1]));
		st.insert(prefix[i - a]);
		answer = max(answer, prefix[i] - *st.begin()); 
	}
	cout << answer;
}