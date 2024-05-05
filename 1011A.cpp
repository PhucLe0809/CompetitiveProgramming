#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    string str; cin >> str;
    sort(str.begin(), str.end());
    string ansi = "";
    for (auto x:str){
        if (ansi.size()==k) break;
        if (x-ansi.back()>1) ansi += x;
    }
    if (ansi.size()!=k) cout << -1;
    else{
        int res = 0;
        for (auto x:ansi) res += (x-'a'+1);
        cout << res;
    }
    return 0;
}