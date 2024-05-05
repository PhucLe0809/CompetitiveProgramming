#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int32_t up, low, num;
    up = low = num = 0;
    for (auto x:str){
        if ('a'<=x && x<='z') low++;
        if ('A'<=x && x<='Z') up++;
        if ('0'<=x && x<='9') num++;
    }
    if (str.size()>4 && up && low && num) cout << "Correct\n";
    else cout << "Too weak\n";
    return 0;
}