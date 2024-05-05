#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    int32_t i, j;
    i = str.size()-1; j = ansi.size()-1;
    while (str[i]==ansi[j] && i>-1 && j>-1){ i--; j--; }
    cout << (i+j)+2 << " ";
    return 0;
}