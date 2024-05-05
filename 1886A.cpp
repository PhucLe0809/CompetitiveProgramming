#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
	for (int x = 1; x <= 20; x++){
	    for (int y = 1; y <= 20; y++){
	        if (x + y >= n || x == y) continue;
	        int z = n - x - y;
	        if (z == x || z == y) continue;
	        if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) {
	            continue;
	        }
	        cout << "YES\n";
	        cout << x << " " << y << " " << z << endl;
	        return;
	    }
	}
	cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}