#include <bits/stdc++.h>

using namespace std; 

int32_t lucky_num(int32_t n){
    string str = to_string(n);
    char a = *max_element(str.begin(), str.end());
    char b = *min_element(str.begin(), str.end());
    return int(a)-int(b);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t l, r;
    int32_t answer, lucky, tmp;
    while (test--){
        cin >> l >> r;
        answer = l;
        lucky = 0;
        for (int i = l; i <= r; i++){
            tmp = lucky_num(i);
            if (lucky < tmp){
                lucky = tmp;
                answer = i;
            }
            if (lucky==9) break;
        }
        cout << answer << '\n';
    }
    return 0;
}