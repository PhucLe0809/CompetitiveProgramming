#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, d, w, cnt, pivot, vac; 
    while (test--){
        cin >> n >> k >> d >> w;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        cnt = 1; vac = k-1; pivot = 0;
        for (int i = 1; i < n; i++){
            if (vac>0 && inp[i]-(inp[pivot]+w)<=d){
                vac--;
            }else{
                cnt++; vac = k-1; pivot = i;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}