#include <bits/stdc++.h>

using namespace std; 
int64_t a[30], b[30];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, answer;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        answer = 0;
        for (int i = 0; i < n-1; i++){
            if (abs(a[i]-a[i+1])+abs(b[i]-b[i+1]) > abs(a[i]-b[i+1])+abs(b[i]-a[i+1])){
                answer += abs(a[i]-b[i+1])+abs(b[i]-a[i+1]);
                swap(a[i+1], b[i+1]);
            } else answer += abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
        }
        cout << answer << '\n';
    }
    return 0;
}