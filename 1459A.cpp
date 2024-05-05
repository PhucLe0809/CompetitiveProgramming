#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, red, blue;
    string str, ansi;
    while (test--){
        cin >> n >> str >> ansi;
        red = blue = 0;
        for (int i = 0; i < n; i++){
            if (str[i]>ansi[i]) red++;
            if (str[i]<ansi[i]) blue++;
        }
        if (red > blue) cout << "RED\n";
        else if (red < blue) cout << "BLUE\n";
            else cout << "EQUAL\n";
    }
    return 0;
}