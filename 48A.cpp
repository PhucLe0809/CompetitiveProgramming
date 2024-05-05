#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string a, b, c; cin >> a >> b >> c;
    if ((a!=b && b!=c && a!=c)||(a==b && b==c)) cout << "?";
    else{
        vector <string> scan;
        scan.push_back(a); 
        scan.push_back(b);
        scan.push_back(c);
        sort(scan.begin(), scan.end());
        if (scan[0]==scan[1] && (scan[1][0]!='p' || scan[2][0]!='s')) cout << "?";
        else{
            if (scan[1]==scan[2] && scan[0][0]=='p' && scan[2][0]=='s'){ cout << "?"; return 0; }
            string win = scan[0];
            if (scan[0]==scan[1] && scan[1][0]=='p' && scan[2][0]=='s') win = scan[2];
            if (a==win) cout << "F";
            if (b==win) cout << "M";
            if (c==win) cout << "S";
        }
    }
    return 0;
}