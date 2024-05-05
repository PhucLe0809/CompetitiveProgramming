#include <bits/stdc++.h>
#define endl '\n'
#define en 500

using namespace std;

typedef vector<int> bignum;
typedef vector<bignum> bignum2D;

ifstream finp("CHUTIEU.INP");
ofstream fout("CHUTIEU.OUT");
bignum2D t(en + 1, bignum(en + 1, 0));
bignum2D f(en + 1, bignum(en + 1, 0));
bignum2D g(en + 1, bignum(en + 1, 0));

bignum aaa(en + 1, 0);

bignum iplus(bignum a, bignum b){
    bignum c(en + 1, 0);
    int carry = 0;
    int j = max(a[en], b[en]);
    c[en] = j;
    for (int i = 1; i <= c[en]; i++){
        j = a[i] + b[i] + carry;
        carry = j / 10;
        j %= 10;
        c[i] = j;
    }
    if (carry > 0){
        c[en]++;
        c[c[en]] = carry;
    }
    return c;
}
bignum imult(bignum a, bignum b){
    bignum c(en + 1, 0);
    c[en] = a[en] + b[en] - 1;
    int tmp = 0;
    for (int i = 1; i <= c[en]; i++){
        for (int j = max(1, i - b[en] + 1); j <= min(i, a[en]); j++){
            tmp += a[j] * b[i - j + 1];
        }
        c[i] = tmp % 10;
        tmp /= 10;
    }
    if (tmp > 0){
        c[en]++;
        c[c[en]] = tmp;
    }
    return c;
}
void dp(bignum2D &t, bignum2D &f, bignum2D &g){
    for (int i = 1; i <= en; i++) aaa[i] = 0;

    t[1][1] = 1;   t[1][en] = 1;
    t[2][1] = 2;   t[2][en] = 1;
    t[3][1] = 4;   t[3][en] = 1;

    for (int i = 4; i <= 500; i++){
        t[i] = iplus(iplus(t[i - 1], t[i - 2]), t[i - 3]);
    }

    f[1][1] = 1;   f[1][en] = 1;
    f[2][1] = 2;   f[2][en] = 1;
    f[0][1] = 1;   f[0][en] = 1;

    for (int i = 3; i <= 500; i++){
        f[i] = iplus(f[i - 1], f[i - 2]);
    }

    g[1][1] = 0;    g[1][en] = 1;
    g[2][1] = 0;    g[2][en] = 1;
    g[0][1] = 1;    g[0][en] = 1;

    for (int i = 3; i <= 500; i++){
        g[i] = iplus(iplus(g[i - 1], g[i - 2]), f[i - 3]);
    }
}
void process(bignum2D &t, bignum2D &f, bignum2D &g){
    int m, n;
    while (finp >> m >> n){
        bignum res = imult(imult(t[m], t[n]), imult(f[m], g[n]));
        for (int i = res[en]; i >= 1; i--){
            fout << res[i];
        }
        fout << endl;
    }
}

void GOTOHANOI(){
    dp(t, f, g);
    process(t, f, g);
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    finp.close(); fout.close();
    return 0;
}

// maxarray = 501

// def init():
//     global f, t, g
//     f = [0] * maxarray
//     t = [0] * maxarray
//     g = [0] * maxarray
    
//     f[1], f[2] = 1, 2
//     for i in range(3, maxarray):
//         f[i] = f[i-1] + f[i-2]
    
//     t[1], t[2], t[3] = 1, 2, 4
//     for i in range(4, maxarray):
//         t[i] = t[i-1] + t[i-2] + t[i-3]
    
//     g[1], g[2], g[3] = 0, 0, 1
//     for i in range(4, maxarray):
//         g[i] = g[i-1] + g[i-2] + f[i-3]

// def GOTOHANOI():
//     init()
//     for line in finp:
//         m, n = map(int, line.split())
//         fout.write(str(t[m] * t[n] * g[n] * f[m]) + '\n')

// if __name__ == "__main__":
//     finp = open("CHUTIEU.INP", "r")
//     fout = open("CHUTIEU.OUT", "w")
//     test = 1
//     while test:
//         GOTOHANOI()
//         test -= 1
//     finp.close()
//     fout.close()
