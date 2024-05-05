#include <bits/stdc++.h>

using namespace std;

int main(){
	string str; cin >> str;
	int n = str.size();
	int s = 0;
	for (int i = 0; i < n; i++){
		if ('0'<=str[i] && str[i]<='9'){
			s += (str[i]-'0');
		}
	}
	cout << s;
	return 0;
}
