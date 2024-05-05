#include <bits/stdc++.h>

using namespace std;

string str_plus(string one, string two){
	while (one[0]=='0') one.erase(0, 1);
	while (two[0]=='0') two.erase(0, 1);
	int m = max(one.size(), two.size());
	while (one.size() < m) one.insert(0, "0");
	while (two.size() < m) two.insert(0, "0");
	string plus = "";
	int temp, res;
	res = 0;
	for (int i = m-1; i >= 0; i--){
		temp = one[i]+two[i]-2*('0') + res;
		plus += char(temp%10+'0');
	    res = temp/10;
	}
	if (res!=0 || plus.empty()) plus += char(res + '0');
	reverse(plus.begin(), plus.end());
	return plus;
}

int main(){
	int test; cin >> test;
    string a, b;
    while (test--){
        cin >> a >> b;
        cout << str_plus(a, b) << '\n';
    }
	return 0;
}
