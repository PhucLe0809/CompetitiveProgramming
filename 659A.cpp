#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, a, b; cin >> n >> a >> b;
    if (b>0 || -b<=a){
        ((a+b)%n==0)?(cout << n):(cout << (a+b)%n);
    }else{
        (n-abs(a+b)%n==0)?(cout << n):(cout << n-abs(a+b)%n);
    }
    return 0;
}