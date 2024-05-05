#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string str; cin >> str;
    stack <char> sta;
    for (auto &it:str){
        if (it == 'A'){
            sta.push(it);
        }else{
            if (!sta.empty()) sta.pop();
            else sta.push(it);
        }
    }
    int len = 0;
    while (!sta.empty() && sta.top() == 'A') sta.pop(), len++;
    len += ((int)sta.size() % 2);
    cout << len << endl;
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