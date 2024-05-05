#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <stdio.h>

using namespace std;
int inp[200000];

void GOTOHANOI(){
    int n; cin >> n;
    for (int i = 0; i < n; ++i) cin >> inp[i];
    int q; cin >> q;
    while (q--){
        int l, r, x, y; cin >> l >> r >> x >> y;
        for (int i = l-1; i < r; i++){
            inp[i] = (inp[i] == x) ? (y):(inp[i]);
        }
    }
    for (int i = 0; i < n; i++) cout << inp[i] << " ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
}