#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x1, p1, x2, p2, n, a, b;
    string str, ansi;
    while (test--){
        cin >> x1 >> p1 >> x2 >> p2;
        str = to_string(x1);
        ansi = to_string(x2);
        if (str.size()+p1 > ansi.size()+p2) cout << ">\n";
        if (str.size()+p1 < ansi.size()+p2) cout << "<\n";
        if (str.size()+p1 == ansi.size()+p2){
            a = str.size(); b = ansi.size();
            n = max(a, b);
            for (int i = 0; i < n-a; i++) str += '0';
            for (int i = 0; i < n-b; i++) ansi += '0';
            if (str > ansi) cout << ">\n";
            else {
                if (str < ansi) cout << "<\n";
                else cout << "=\n";
            }
        }
    }
    return 0;
}