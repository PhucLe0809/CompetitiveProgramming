#include <bits/stdc++.h>

using namespace std; 
int32_t month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t m, d; cin >> m >> d;
    m = month[m-1]+d-1;
    cout << m/7+(m%7!=0);
    return 0;
}