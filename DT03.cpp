#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int arr[105];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int pos = -1;
	for (int i = 0; i <= n-2; i++){
		if (abs(arr[i+1]-arr[i])%2==0){
			pos = i+1; break;
		}
	}
	cout << pos;
	return 0;
}
