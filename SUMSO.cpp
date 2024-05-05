#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

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
    string str; getline(cin, str);
    vector <string> scan; str += '.';
    string ansi = "";
    for (int i = 0; i < (int)str.size(); i++){
        if (isdigit(str[i])) ansi += str[i];
        else{
            if (!ansi.empty()) scan.push_back(ansi);
            ansi = "";
        }
    }
    string answer = "0";
    for (auto &it:scan) answer = str_plus(answer, it);
    while (answer.size() > 1 && answer[0] == '0') answer.erase(answer.begin());
    cout << answer;
    return 0;
}