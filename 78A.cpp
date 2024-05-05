#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string a, b, c;
    getline(cin, a); getline(cin, b); getline(cin, c);
    // cout << a << endl << b << endl << c << endl;
    int32_t x, y, z;
    x = 0;
    for (auto it:a){
        if (it=='a'||it=='o'||it=='e'||it=='u'||it=='i')
            x++;
    }
    y = 0;
    for (auto it:b){
        if (it=='a'||it=='o'||it=='e'||it=='u'||it=='i')
            y++;
    }
    z = 0;
    for (auto it:c){
        if (it=='a'||it=='o'||it=='e'||it=='u'||it=='i')
            z++;
    }
    if (x==5 && y==7 && z==5) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}