#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t a, b, c, d, key;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        scan.push_back(a+b+c+d);
        if (i==0) key = a+b+c+d;
    }
    sort(scan.begin(), scan.end(), greater<>());
    for (int i = 0; i < n; i++){
        if (scan[i]==key){
            cout << i+1;
            break;
        }
    }
    return 0;
}