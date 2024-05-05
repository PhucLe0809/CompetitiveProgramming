#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
	int pivot = 1, calc = 0;
	while (n--){
		int x; cin >> x;
		int res = 1;
		while (x % 2 == 0) res*=2, x/=2;
		if (res > pivot) pivot = res, calc = 0;
		if (res == pivot) calc++;
    }
	cout << pivot << " " << calc << endl;
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