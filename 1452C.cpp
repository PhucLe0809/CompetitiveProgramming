#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str;
    int32_t one, two;
    int64_t answer;
    while (n--){
        cin >> str;
        one = two = answer = 0;
        for (auto it:str){
            switch (it){
                case '(': one++; break;
                case ')': if (one){one--; answer++;} break;
                case '[': two++; break;
                case ']': if (two){two--; answer++;} break;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}