#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

string to_hex(int num){
    string ansi = "";
    while (num){
        char key;
        if (num % 16 < 10) key = (char)(num % 16 + '0');
        else key = (char)(num % 16 - 10 + 'A');
        ansi = key + ansi;
        num /= 16;
    }
    return ansi;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        cout << to_hex(n) << endl;
    }
    return 0;
}