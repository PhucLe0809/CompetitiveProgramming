#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; int32_t n;
    while (test--){
        cin >> str; n = 0;
        map <char, int32_t> mp;
        for (int i = 0; i < 4; i++) mp[str[i]]++;
        if (mp.size()==1) cout << "-1\n";
        else if (mp.size()==4) cout << "4\n";
        else{
            if (mp.size()==2){
                if (mp.begin()->second!=2) cout << "6\n";
                else cout << "4\n";
            }
            if (mp.size()==3) cout << "4\n";
        }
    }
    return 0;
}