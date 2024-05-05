#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    bool odd, even; odd = even = false;
    for (int i = 0; i < 8; i++)
        if (str[i] == 'B'){
            if (i%2 == 0) even = true;
            else odd = true;
        }
    if (!(odd && even))
        cout << "No";
    else{
        int32_t infront, mid, behind;
        infront = mid = behind = -1;
        for (int i = 0; i < 8; i++)
            if (str[i] == 'R'){
                infront = i; break;
            }
        if (infront == -1) cout << "No";
        else{
            for (int i = infront; i < 8; i++)
                if (str[i] == 'K'){
                    mid = i; break;
                }
            if (mid == -1) cout << "No";
            else{
                for (int i = mid; i < 8; i++)
                    if (str[i] == 'R'){
                        behind = i; break;
                    }
                if (behind == -1) cout << "No";
                else cout << "Yes";
            }
        }
    }
    return 0;
}