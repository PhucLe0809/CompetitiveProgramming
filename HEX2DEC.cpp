#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
vector <int> pow16(1, 1);

int to_dec(string str){
    int num = 0, len = str.size();
    for (int i = 0; i < len; i++){
        int digit;
        if (isdigit(str[i])) digit = (str[i] - '0');
        else digit = (str[i] - 'A') + 10;
        num = num + digit * pow16[len - i - 1];
    }
    return num;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    for (int i = 1; i < 16; i++) pow16.push_back(pow16.back() * 16);
    while (test--){
        string str; cin >> str;
        cout << to_dec(str) << endl;
    }
    return 0;
}