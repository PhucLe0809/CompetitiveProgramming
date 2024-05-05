#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t arr[maxarray], scan[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m; bool check;
    while (test--){
        cin >> n;
        m = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            m = max(m, arr[i]);
        }
        scan[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--) scan[i]=max(scan[i+1], arr[i]);
        check = false;
        set <int32_t> st;
        for (int i = 0; i < n; i++){
            if (!check && scan[i]!=m) st.insert(scan[i]);
            if (scan[i]==m) check - true;
        }
        cout << st.size() << '\n';
    }
    return 0;
}