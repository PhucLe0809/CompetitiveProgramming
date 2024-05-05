#include <bits/stdc++.h>

using namespace std;
int arr[105][105];

int main(){
	int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            arr[i][j] = 0;
        }
    }
    char type;
    int x, y, z, t, v;
    bool check = true;
    while (q--){
        cin >> type >> x >> y;
        if (type=='A'){
            cout << arr[x][y] << '\n';
            check = false;
        }
        else{
            cin >> z >> t >> v;
            for (int i = x; i <= z; i++){
                for (int j = y; j <= t; j++){
                    arr[i][j] += v;
                }
            }
        }
    }
    if (check) cout << -1;
	return 0;
}
