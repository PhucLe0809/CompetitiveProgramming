#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; string s, t;
    while (test--){
        cin >> n >> s >> t;
        vector <int> scan;
        for (int i = 0; i < n; i++){
            if (s[i]!=t[i]) scan.push_back(i);
        }
        if (scan.size()!=0 && scan.size()!=2) cout << "No\n";
        else{
            if (scan.size()==0) cout << "Yes\n";
            else{
                if (s[scan[0]]==s[scan[1]] && t[scan[0]]==t[scan[1]]) cout << "Yes\n";
                else cout << "No\n";
            }
        }
    }
    return 0;
}