#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1005

using namespace std;
int matrix[maxarray][maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
	int row = m, col = n, k = 1, p = 0, i, j;
    vector <int> out;
	while (k <= m*n){
		for (i = p; i < col; i++){
            out.push_back(matrix[p][i]);
            k++;
        }
		for (i = p + 1; i < row; i++){
            out.push_back(matrix[i][col-1]);
            k++;
        }
		if (p != row-1){
			for(i = col-2; i >= p; i--){
                out.push_back(matrix[row-1][i]);
                k++;
            }
		}	
		if (p != col-1){
			for (i = row-2; i > p; i--){
                out.push_back(matrix[i][p]);
                k++;
            }
		}	
		p++; row--; col--;
	}
    for (auto &it:out) cout << it << " ";
    return 0;
}