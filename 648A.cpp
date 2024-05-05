#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
	int n, m; cin >> n >> m;
    vector <int> scan(m+1);
	for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            char key; cin >> key;
            if (key == '*') scan[j+1]++;
        }
    }
    int up = 0, down = 0;
	for (int k = 1; k < m; k++){
		if (scan[k] - scan[k+1] <= 0 && up <= abs(scan[k] - scan[k+1])){
            up = abs(scan[k] - scan[k+1]);
        }else{
            if (scan[k] - scan[k+1] >= 0 && down <= abs(scan[k] - scan[k+1])){
                down = abs(scan[k] - scan[k+1]);
            }
        }
	}
	cout << up << " " << down << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}