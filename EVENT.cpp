#include <bits/stdc++.h>

using namespace std;
int32_t scan[12]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; 

bool check(int32_t num){
    string ansi = to_string(num);
    for (auto x:ansi){
        if (x!='1') return false;
    }
    return true;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    if (n==7 || check(n)){
        cout << "NO SOLUTION"; return 0;
    }
    string str = to_string(n);
    int32_t digits = 0;
    for (auto x:str) digits += scan[x-'0'];
    int32_t temp;
    while (true){   
        n++; str = to_string(n);
        temp = 0;
        for (auto x:str) temp += scan[x-'0'];
        if (temp == digits) break;
    }
    cout << n << '\n';
    return 0;
}