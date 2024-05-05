#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    int32_t even1, even2;
    int32_t odd1, odd2, odd3;
    while (test--){
        cin >> n;
        even1 = even2 = -1;
        odd1 = odd2 = odd3 = -1;
        for (int i = 1; i <= n; i++){
            cin >> x;
            if (x%2==0){
                if (even1==-1) even1 = i;
                else if (even2==-1) even2 = i;
            } else {
                if (odd1==-1) odd1 = i;
                else if (odd2==-1) odd2 = i;
                    else if (odd3==-1) odd3 = i;
            }
        }
        if ((odd1!=-1 && odd2!=-1 && odd3!=-1)||(even1!=-1 && even2!=-1 && odd1!=-1)){
            cout << "YES\n";
            if (odd1!=-1 && odd2!=-1 && odd3!=-1){
                cout << odd1 << " " << odd2 << " " << odd3 << '\n';
            } else cout << even1 << " " << even2 << " " << odd1 << '\n';
        } else cout << "NO\n";
    }
    return 0;
}