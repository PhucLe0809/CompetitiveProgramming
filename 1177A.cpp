#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int k; cin >> k;
    string str = "1"; int i = 2;
    while (str.size()<k){
        str += to_string(i); i++;
    }
    cout << str[k-1];
    return 0;
}