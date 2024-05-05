#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int64_t inp[maxarray];
vector <int64_t> zero, one;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m;
    int64_t x, answer;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        zero.clear(); one.clear();
        for (int i = 0; i < n; i++){
            cin >> x;
            if (inp[i]==0) zero.push_back(x);
            else one.push_back(x);
        }
        sort(zero.begin(), zero.end(), greater<>());
        sort(one.begin(), one.end(), greater<>());
        answer = 0;
        n = zero.size(); m = one.size();
        for (int i = 0; i < min(n, m); i++){
            answer += 2*(zero[i]+one[i]);
        }
        if (n==m) answer -= min(zero[n-1], one[m-1]);
        else{
            if (n>m){
                for (int i = min(n, m); i < n; i++) answer += zero[i];
            }else{
                for (int i = min(n, m); i < m; i++) answer += one[i];
            }
        }
        cout << answer << '\n';
    }
    return 0;
}