#include <bits/stdc++.h>

using namespace std;
int cnt[255];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; bool check;
    string str;
    while (test--){
        cin >> n >> str;
        fill(cnt, cnt+255, 0);
        for (auto x:str) cnt[x]++;
        check = false;
        for (char i = '1'; i <= '9' && !check; i++){
            if (cnt[i]!=0 && (i!='2'&&i!='3'&&i!='5'&&i!='7')){
                cout << 1 << '\n' << i << '\n';
                check = true;
            }
        }
        for (int i = 0; i < n && !check; i++){
            if (str[i]=='2'){
                if (str.find("2", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 22 << '\n';
                    check = true; continue;
                }
                if (str.find("5", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 25 << '\n';
                    check = true; continue;
                }
                if (str.find("7", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 27 << '\n';
                    check = true; continue;
                }
            }
            if (str[i]=='3'){
                if (str.find("2", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 32 << '\n';
                    check = true; continue;
                }
                if (str.find("3", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 33 << '\n';
                    check = true; continue;
                }
                if (str.find("5", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 35 << '\n';
                    check = true; continue;
                }
            }
            if (str[i]=='5'){
                if (str.find("2", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 52 << '\n';
                    check = true; continue;
                }
                if (str.find("5", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 55 << '\n';
                    check = true; continue;
                }
                if (str.find("7", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 57 << '\n';
                    check = true; continue;
                }
            }
            if (str[i]=='7'){
                if (str.find("2", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 72 << '\n';
                    check = true; continue;
                }
                if (str.find("5", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 75 << '\n';
                    check = true; continue;
                }
                if (str.find("7", i+1, 1)!=string::npos){
                    cout << 2 << '\n' << 77 << '\n';
                    check = true; continue;
                }
            }
        }
        if (!check) cout << 0 << '\n' << "" << '\n';
    }
    return 0;
}