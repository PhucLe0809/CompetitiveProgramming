#include <bits/stdc++.h>

using namespace std;
int arr[105][105];

bool is_prime(int n){
	if (n<2) return false;
	for (int i = 2; i < n; i++){
		if (n%i==0) return false;
	}
	return true;
}

int main(){
	//local variable
	int m, n; cin >> m >> n;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	int answer = INT_MAX;
	int s_row;
	for (int i = 0; i < m; i++){
		s_row = 0;
		for (int j = 0; j < n; j++){
			if (is_prime(arr[i][j])==true) s_row += arr[i][j];
		}
		answer = min(answer, s_row);
	}
	cout << answer;
	return 0;
}
