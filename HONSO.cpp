#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct fraction{
    int up;
    int down;

    fraction(__int128_t a, __int128_t b){
        __int128_t gcd = __gcd(a, b);
        up = (int)(a / gcd);
        down = (int)(b / gcd);
        if (down < 0){
            up *= (-1); down *= (-1);
        }
    }
    void standardized(){
        int gcd = __gcd(up, down);
        up = up / gcd;
        down = down / gcd;
        if (down < 0){
            up *= (-1); down *= (-1);
        }
    }
    void output_normal(){
        cout << up << "/" << down << endl;
    }
    void output_format(){
        cout << up / down << "+";
        cout << up % down << "/" << down << endl;
    }
};

signed main(){

    int a, b, c; cin >> a >> b >> c;
    int d, e, f; cin >> d >> e >> f;

    fraction one((__int128_t)a * c + (__int128_t)b, c);
    fraction two((__int128_t)d * f + (__int128_t)e, f);    
    one.output_normal();
    two.output_normal();
    
    fraction thr(one.up * two.down + one.down * two.up, one.down * two.down);
    fraction fou(one.up * two.up, one.down * two.down);   
    thr.output_format();
    fou.output_format();

    return 0;
}