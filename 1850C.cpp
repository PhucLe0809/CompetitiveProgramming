#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        string out; char key;
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                cin >> key;
                if (key!='.') out += key;
            }
        }
        cout << out << '\n';
    }
    return 0;
}