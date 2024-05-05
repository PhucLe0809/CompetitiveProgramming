#include <bits/stdc++.h>
using namespace std;
int mp[27];

int main(){
    string str; getline(cin, str);
    fill(mp, mp + 27, 0);
    int len = str.size();
    for (int i = 0; i < len; i++){
        if ('a' <= str[i] && str[i] <= 'z') mp[str[i] - 'a']++;
    }
    for (int i = 0; i <= 26; i++){
        if (mp[i] != 0){
            cout << (char)(i + 97) << ":" << mp[i] << '\n';
        }
    }
}
