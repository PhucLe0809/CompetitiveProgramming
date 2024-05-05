#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int m, n; cin >> n; m = n;
	int matrix[m][n];
	int row = m, col = n, k = 1, p = 0, i, j;
	while (k <= m*n){
		for (i = p; i < col; i++) matrix[p][i] = k++;
		for (i = p+1; i < row; i++) matrix[i][col-1] = k++;
		if (p != row - 1){
			for (i = col-2; i >= p; i--) matrix[row-1][i] = k++;
		}	
		if (p != col-1){
			for (i = row-2; i > p; i--) matrix[i][p] = k++;
		}	
		p++; row --; col--;
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			cout << matrix[i][j] << " ";
        }
		cout << endl;
	}
    return 0;
}