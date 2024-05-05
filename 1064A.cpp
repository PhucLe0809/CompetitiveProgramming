#include <bits/stdc++.h>

using namespace std; 
double triangle[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> triangle[0] >> triangle[1] >> triangle[2];
    sort(triangle, triangle+3);
    if (triangle[0]+triangle[1]>triangle[2]) cout << 0;
    else cout << triangle[2]-(triangle[0]+triangle[1])+1;
    return 0;
}