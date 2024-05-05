#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int64_t inp[maxarray], scan[maxarray];
deque <int32_t> dq;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    if (m >= n){
        cout << inp[1] << '\n'; 
        return 0;
    }
    while (dq.size()) dq.pop_front();
    scan[1] = inp[1]; dq.push_back(1);
    for (int i = 2; i <= m; i++){
        scan[i] = inp[1]+inp[i];
        dq.push_back(i);
    }
    int32_t temp;
    for (int i = m+1; i <= n; i++){
        scan[i] = scan[dq.front()] + inp[i];
        while (dq.size() && scan[dq.back()] >= scan[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() + m <= i) dq.pop_front();
    }
    cout << scan[dq.front()] << '\n';
    // for (int i = 1; i <= n; i++) cout << scan[i] << " ";
    return 0;
}