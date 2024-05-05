#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_digit(char &key){
    return ('0' <= key && key <= '9');
}
bool is_letter(char &key){
    return ('A' <= key && key <= 'Z');
}
bool is_bracket(char &key){
    return (key == '(' || key == ')');
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    map <int, int> mp;
    mp['C'] = 12; mp['H'] = 1; mp['O'] = 16;
    while (test--){
        string str; cin >> str;
        str = '(' + str + ')';
        stack <int> sta;
        for (int i = 0; i < (int)str.size(); i++){
            if (is_letter(str[i])){
                sta.push(mp[str[i]]);
                continue;
            }
            if (is_digit(str[i])){
                int num = sta.top() * (str[i] - '0');
                sta.pop(); sta.push(num);
                continue;
            }
            if (str[i] == '('){
                sta.push(-1); 
                continue;
            }
            if (str[i] == ')'){
                int sum = 0;
                while (sta.top() != -1) sum += sta.top(), sta.pop();
                sta.pop(); sta.push(sum);
                continue;
            }
        }
        cout << sta.top() << endl;
    }
    return 0;
}