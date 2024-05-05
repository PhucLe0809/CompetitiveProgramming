#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int cnt_mem(string a, string b){
	int n = max(a.size(), b.size());
	while (a.size()<n) a.insert(0, "0");
	while (b.size()<n) b.insert(0, "0");
	int res, tmp; res = 0;
	string c; int cnt = 0;
	for (int i = n-1; i >= 0; i--){
		tmp = (a[i]-'0')+(b[i]-'0')+res;
		res = tmp/10;
		c += char(tmp%10+'0');
        cnt += (int)(res != 0);
	}
	if (res!=0) c += char(res+'0');
	reverse(c.begin(), c.end());
	return cnt;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a, b; cin >> a >> b;
	cout << cnt_mem(a, b);
    return 0;
}