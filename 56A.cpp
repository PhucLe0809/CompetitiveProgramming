#include <bits/stdc++.h>

using namespace std;
string alco[11]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", 
"RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <string> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int age, cnt = 0;
    bool check;
    for (auto &it:inp){
        if ('0'<=it[0] && it[0]<='9'){
            age = stoi(it); 
            if (age<18) cnt++;
        }else{
            check = false;
            for (int i = 0; i < 12; i++){
                if (alco[i]==it){ check = true; break; }
            }
            if (check) cnt++;
        }
    }
    cout << cnt;
    return 0;
}