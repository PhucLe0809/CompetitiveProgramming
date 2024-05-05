#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    while (test--){
        cin >> n;
        if (n % 3 == 0)
        {
            cout << (n / 3) << " 0 0" << '\n';
            continue;
        }
        else if (n % 5 == 0)
        {
            cout << "0 " << (n / 5) << " 0" << '\n';
            continue;
        }
        else if (n % 7 == 0)
        {
            cout << "0 0 " << (n / 7) << '\n';
            continue;
        }
        else
        {
            x = n - 7;
            if (x % 3 == 0 and x>=3)
            {
                cout << (x / 3) << " 0 1" << '\n';
                continue;
            }
            if (x % 5 == 0 and x>=5)
            {
                cout << "0 " << (x / 5) << " 1" << '\n';
                continue;
            }
            x = n - 5;
            if (x % 3 == 0 and x>=3)
            {
                cout << (x / 3) << " 1 0" << '\n';
                continue;
            }
            if (x % 7 == 0 and x>=7)
            {
                cout << "0 1 " << (x / 7) << '\n';
                continue;
            }
            x = n - 3;
            if (x % 5 == 0 and x>=5)
            {
                cout << "1 " << (x / 5) << " 0" << '\n';
                continue;
            }
            if (x % 7 == 0 and x>=7)
            {
                cout << "1 0 " << (x / 7) << '\n';
                continue;
            }
            cout <<"-1\n";
            continue;
        }
    }
   return 0;
}