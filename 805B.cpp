#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str;
    for (int i = 0; i < n/2; i++){
        if (i%2==0) str += "aa";
        else str += "bb";
    }
    if (n%2!=0){
        str += (str.back()=='a')?('b'):('a');
    }
    cout << str;
    return 0;
}