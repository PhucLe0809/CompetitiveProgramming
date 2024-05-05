#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    bool a, b, c;
    a = b = true; c = false;
    int x;
    bool check = true;
    for (int i = 0; i < n; i++){
        cin >> x; 
        switch(x){
            case 1:{
                if ((b && c) || (!b && !c)) check = false;
                else (b)?(b=false, c=true):(c=false, b=true);
                break;
            }
            case 2:{
                if ((a && c) || (!a && !c)) check = false;
                else (a)?(a=false, c=true):(c=false, a=true);
                break;
            }
            case 3:{
                if ((b && a) || (!b && !a)) check = false;
                else (b)?(b=false, a=true):(a=false, b=true);
                break;
            }
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}