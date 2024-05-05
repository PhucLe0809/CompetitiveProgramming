#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n; int i;
        vector <bool> inp(n+1, true);
        for (int t = n; t > 0; t--){
            if (inp[t]){
                inp[t] = false;
                cout << t << " ";
                i = t;
                while (i % 2 == 0 && i != 0){
                    if (inp[i/2]){
                        cout <<  i/2 << " ";
                        inp[i/2] = false;
                    } 
                    i /= 2;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}