#include <bits/stdc++.h>

using namespace std;

long long convert(string str){
	long long result = 0;
	long long tmp;
	int n = str.size();
	for (int i = 0; i < str.size(); i++){
		if ('0'<=str[i] && str[i]<='9'){
			tmp = str[i]-'0';
		}else tmp = (str[i]-'A')+10;
		result += tmp*pow(16, n-i-1);
	}
	return result;
}

int main(){
	string a, b; cin >> a >> b;
	long long A = convert(a);
	long long B = convert(b);
	cout << A+B;
	return 0;
}
