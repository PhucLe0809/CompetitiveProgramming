#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    string ansi;
    if ((str.size()-1)%2!=0){
        ansi = str[str.size()-1];
        for (int i = 1; i < str.size(); i++){
            if (i%2!=0) ansi += str[(i-1)/2];
            else ansi += str[str.size()-i/2-1];
        }
    }else{
        ansi = str[0];
        for (int i = 1; i < str.size(); i++){
            if (i%2==0) ansi += str[i/2];
            else ansi += str[str.size()-(i+1)/2];
        }
    }
    reverse(ansi.begin(), ansi.end());
    cout << ansi;
    return 0;
}