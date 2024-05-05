#include <bits/stdc++.h>

using namespace std; 
int64_t inp[20], scan[20], pivot[20];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, a, b;
    int64_t answer; 
    while (test--){
        cin >> n;
        a = b = 0;
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            cnt = 0; pivot[i] = inp[i];
            while (inp[i]%2==0){
                cnt++; inp[i] /= 2;
            }
            scan[i] = cnt;
            a += inp[i]; b += scan[i];
        }
        answer = 0;
        for (int i = 0; i < n; i++){
            answer = max(answer, (a-inp[i])+pivot[i]*int64_t(pow(2, b-scan[i])));
        }
        cout << answer << '\n';
    }
    return 0;
}