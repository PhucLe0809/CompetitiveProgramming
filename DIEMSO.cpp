#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str; str += 'N';
    int res = 0, cnt = 0;
    for (auto &it:str){
        if (it == 'C') cnt++;
        else{
            res += cnt * (cnt + 1) / 2;
            cnt = 0;
        }
    }
    cout << res;
    return 0;
}