#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string str; cin >> str;
    str = "R" + str; str += "R";
    int dis = 1, pre = 0;
    for (int i = 1; i < (int)str.size(); i++){
        if (str[i] != 'R') continue;
        dis = max(dis, i - pre);
        pre = i;
    }
    cout << dis << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}