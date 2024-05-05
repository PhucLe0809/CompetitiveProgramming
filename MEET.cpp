#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; char key; cin >> n >> key;
    vector <string> out;
    while (n--){
        string str; cin >> str;
        bool check = true;
        for (auto &it:str) check = check && (it != key);
        if (check) out.push_back(str);
    }
    for (auto &it:out) cout << it << endl;
    return 0;
}