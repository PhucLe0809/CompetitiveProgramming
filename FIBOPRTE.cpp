#include <bits/stdc++.h>

using namespace std; 
vector <string> scan(105);

string str_plus(string one, string two){
    int32_t a = one.size();
    int32_t b = two.size();
    int32_t m = max(a, b);
    while (one.size()<m) one.insert(0, "0");
    while (two.size()<m) two.insert(0, "0");
    int32_t res, temp;
    string plus;
    res = 0; plus = "";
    for (int i = m-1; i >= 0; i--){
        temp = (two[i]-'0')+(one[i]-'0')+res;
        plus.insert(0, 1, char(temp%10+'0'));
        res = temp/10;
    }
    if (res>0) plus.insert(0, 1, char(res+'0'));
    return plus;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t f1, f2, f;
    f1 = 1; f2 = 0;
    scan[0]="0"; scan[1]="1";
    for (int i = 2; i <= 90; i++){
        f = f1+f2; scan[i]=to_string(f);
        f2 = f1; f1 = f;
    }
    if (n<=90) cout << scan[n];
    else{
        for (int i = 90; i <= n; i++){
            scan[i] = str_plus(scan[i-1], scan[i-2]);
        }
        cout << scan[n];
    }
    return 0;
}