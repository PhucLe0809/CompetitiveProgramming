#include <bits/stdc++.h>
#define maxarray 100005
#define m 1000000007

using namespace std; 
int64_t num[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t multi = 1;
    num[0] = 1;
    for (int i = 1; i <= maxarray; i++){
        multi = ((multi%m)*(i%m))%m;
        num[i] = multi;
    }
    int64_t n, answer;
    while (test--){
        cin >> n;
        answer = (n*(n-1))%m;
        answer = ((answer%m)*(num[n]))%m;
        cout << answer << '\n';
    }
    return 0;
}