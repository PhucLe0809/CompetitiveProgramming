#include <bits/stdc++.h>
#define maxarray 400005

using namespace std;
int inp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m, save, cat;
    while (test--){
        cin >> n >> m;
        for (int i = 0; i < m; i++) cin >> inp[i];
        sort(inp, inp+m);
        save = cat = 0;
        for (int i = m-1; i >= 0; i--){
            cat += (n-inp[i]);
            inp[i] = -1;
            save++;
            if (inp[i-1]<=cat) break;
        }
        cout << save << '\n';
    }
    return 0;
}