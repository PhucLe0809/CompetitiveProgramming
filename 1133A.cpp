#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string a, b; cin >> a >> b;
    int start = ((a[0]-'0')*10+(a[1]-'0'))*60 + ((a[3]-'0')*10+(a[4]-'0'));
    int thend = ((b[0]-'0')*10+(b[1]-'0'))*60 + ((b[3]-'0')*10+(b[4]-'0'));
    int mid = start+abs(thend-start)/2;
    int h = mid/60; int m = mid%60;
    (h<10)?(cout << 0 << h << ":"):(cout << h << ":");
    (m<10)?(cout << 0 << m):(cout << m);
    return 0;
}