#include <bits/stdc++.h>

using namespace std;

bool check(int64_t x, int64_t y, int64_t k){
    int64_t res = (y-x)*(y-x+1)/2-x;
    return res>=k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, k; cin >> n >> k;
    int64_t low, mid, high, answer;
    low = 0; high = n;
    while (low<=high){
        mid = low+(high-low)/2;
        if (check(mid, n, k)){
            answer = mid;
            low = mid+1;
        }else high = mid-1;
    }
    cout << answer;
    return 0;
}