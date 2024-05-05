#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
// Bignumber
string str_plus(string a, string b){
	int n = max(a.size(), b.size());
	while (a.size()<n) a.insert(0, "0");
	while (b.size()<n) b.insert(0, "0");
	int res, tmp; res = 0;
	string c;
	for (int i = n-1; i >= 0; i--){
		tmp = (a[i]-'0')+(b[i]-'0')+res;
		res = tmp/10;
		c += char(tmp%10+'0');
	}
	if (res!=0) c += char(res+'0');
	reverse(c.begin(), c.end());
	return c;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	vector <string> fibo(10001);
	fibo[0] = fibo[1] = "1";
	for (int i = 2; i <= 10000; i++){
		fibo[i] = str_plus(fibo[i-1], fibo[i-2]);
	}
	int t; cin >> t;
	int n;
	for (int i = 0; i < t; i++){
		cin >> n; cout << fibo[n] << '\n';
	}
	return 0;
}
