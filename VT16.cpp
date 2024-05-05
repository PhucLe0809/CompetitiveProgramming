#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> scan; int x;
    do{
        cin >> x;
        if (x < 0) scan.push_back(x);
    }while (x != 0);
    if (scan.empty()) cout << "NOT FOUND";
    else for (auto &it:scan) cout << it << " ";
    return 0;
}