#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int c, vo, v1, a, l; 
    cin >> c >> vo >> v1 >> a >> l;
    int d = 1;
    int p = vo;
    while (p<c){
        d++;
        p -= l;
        p += min(vo+(d-1)*a, v1);
    }
    cout << d;
    return 0;
}