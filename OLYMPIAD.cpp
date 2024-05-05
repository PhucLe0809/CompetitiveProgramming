#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> scan;  

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, c, k; cin >> n >> c >> k;
    int32_t a, b;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (a>=k) scan.push_back(0);
        else if (b!=0) {
            scan.push_back((k-a)/b+((k-a)%b!=0));
        }
    }
    sort(scan.begin(), scan.end());
    int32_t stu = 0;
    int32_t res = 0;
    while (res<=c && stu<scan.size()){
        res += scan[stu]; stu++;
    }
    if (res>c) cout << stu-1;
    else cout << stu;
    return 0;
}