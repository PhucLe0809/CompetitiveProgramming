#include <bits/stdc++.h>

using namespace std;

int convert(string str){
	int out = 0;
	for (int i = 0; i < str.size(); i++){
		out += (str[i]-'0');
	}
	return out;
}

int main(){
	int n; cin >> n;
	string arr[155];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int tmp, cnt = 0; 
	int pivot = convert(arr[n-1]);
	for (int i = 0; i < n-1; i++){
		tmp = convert(arr[i]);
		if (tmp < pivot) cnt++;
		else cnt--;
	}
	cout << cnt;
	return 0;
}
