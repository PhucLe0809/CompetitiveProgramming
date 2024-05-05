#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; 
    int32_t cnt, up, down;
    while (test--){
        cin >> str;
        cnt = up = down = 0;
        for (auto x:str){
            if (x=='>'){
                cnt++; up++;
            }
            if (x=='<'){
                cnt--; down++;
            }
        }
        if (cnt==0) cout << "=\n";
        else{
            if (cnt>0 && cnt==up) cout << ">\n";
            else if (cnt<0 && -cnt==down) cout << "<\n";
                else cout << "?\n";
        }
    }
    return 0;
}