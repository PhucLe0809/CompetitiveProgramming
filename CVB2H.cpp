#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
vector <int> pow2(1, 1);

int to_dec(string str){
    int num = 0, len = str.size();
    for (int i = 0; i < len; i++){
        num = num + (str[i] - '0') * pow2[len - i - 1];
    }
    return num;
}
string to_hex(int num){
    string ansi = "";
    while (num){
        char key;
        if (num % 16 < 10) key = (char)(num % 16 + '0');
        else key = (char)(num % 16 - 10 + 'A');
        ansi = key + ansi;
        num /= 16;
    }
    return ansi;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    for (int i = 1; i < 63; i++) pow2.push_back(pow2.back() * 2);
    while (test--){
        string str; cin >> str;
        cout << to_hex(to_dec(str)) << endl;
    }
    return 0;
}