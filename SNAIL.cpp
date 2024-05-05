#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, v; cin >> a >> b >> v;
    if (a >= v) cout << 1;
    else{
        if ((v - a) % (a - b) != 0) cout << (v - a) / (a - b) + 2;
        else cout << (v - a) / (a - b) + 1;
    }
}
