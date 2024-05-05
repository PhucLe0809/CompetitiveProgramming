#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t l, r, answer;
    string str;
    cin >> l >> r;
    answer = -1;
    for (int i = l; i <= r; i++){
        str = to_string(i);
        set <int> st;
        for (auto x:str) st.insert(x);
        if (str.size()==st.size()){
            answer = i; break;
        }
    }
    cout << answer << '\n';
    return 0;
}