#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_vowel(char &key){
    key = tolower(key);
    return (key == 'a' || key == 'o' || key == 'e' || key == 'u' || key == 'i');
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test; cin.ignore(1);
    for (int t = 1; t <= test; t++){
        int n; cin >> n; cin.ignore(1);
        string str; getline(cin, str);
        int i = 0;
        while (i < (int)str.size()-1){
            if (str[i] == str[i+1] && is_vowel(str[i]) && is_vowel(str[i+1])) str.erase(str.begin() + i);
            i++;
        }
        cout << "Case #" << t << ": " << str << endl;
    }
    return 0;
}