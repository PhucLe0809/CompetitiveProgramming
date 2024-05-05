#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

string str_plus(string a, string b){
	int n = max(a.size(), b.size());
	while ((int)a.size() < n) a.insert(0, "0");
	while ((int)b.size() < n) b.insert(0, "0");
	int res, tmp; res = 0;
	string c;
	for (int i = n-1; i >= 0; i--){
		tmp = (a[i]-'0')+(b[i]-'0')+res;
		res = tmp/10;
		c += char(tmp%10+'0');
	}
	if (res != 0) c += char(res+'0');
	reverse(c.begin(), c.end());
	return c;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a, b; cin >> a >> b;
    int m = b.size();
    vector <string> fibo = {"1", "1"};
    while ((fibo.back()).size() <= m){
        fibo.push_back(str_plus(*(--fibo.end()), *(--(--fibo.end()))));
    }
    int cnt = 0; b = '0' + b;
    while ((int)a.size() <= m) a = '0' + a;
    for (auto &it:fibo){
        while (it.size() <= m) it = '0' + it;
        cnt += (int)(a <= it && it <= b);
    }
    cout << cnt;
    return 0;
}