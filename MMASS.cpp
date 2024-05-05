#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int getm(char key){
    switch (key){
        case 'C': return 12;
        case 'H': return 1;
        case 'O': return 16;
    }
    return -1;
}

void GOTOHANOI(){
    string str; cin >> str;

    stack <int> sta;
    for (auto &it:str){
        if (it == '('){
            sta.push(-1); continue;
        }
        if (it == ')'){
            int calc = 0;
            while (sta.top() != -1){
                calc += sta.top(); sta.pop();
            }
            sta.pop(); sta.push(calc);
            continue;
        }
        if (isdigit(it)){
            int num = sta.top() * (it - '0');
            sta.pop(); sta.push(num);
            continue;
        }
        sta.push(getm(it));
        // cout << sta.top() << " ";
    }

    int res = 0;
    while (!sta.empty()){
        res += sta.top(); sta.pop();
    }

    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}