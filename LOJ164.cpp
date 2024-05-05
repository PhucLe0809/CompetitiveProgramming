/**
 *  origin author : Nyaan
 *  date : 2023-04-16 23:43:11
 */

#define NDEBUG
#define PROBLEM "https://judge.yosupo.jp/problem/division_of_big_integers"
//
using namespace std;

// intrinstic
#include <immintrin.h>

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfenv>
#include <cfloat>
#include <chrono>
#include <cinttypes>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <streambuf>
#include <string>
#include <tuple>
#include <type_traits>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

// utility
namespace Nyaan {
using ll = long long;
using i64 = long long;
using u64 = unsigned long long;
using i128 = __int128_t;
using u128 = __uint128_t;

template <typename T>
using V = vector<T>;
template <typename T>
using VV = vector<vector<T>>;
using vi = vector<int>;
using vl = vector<long long>;
using vd = V<double>;
using vs = V<string>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<long long>>;

template <typename T, typename U>
struct P : pair<T, U> {
    template <typename... Args> P(Args... args) : pair<T, U>(args...) {}

    using pair<T, U>::first;
    using pair<T, U>::second;

    P &operator+=(const P &r) {
        first += r.first;
        second += r.second;
        return *this;
    }
    P &operator-=(const P &r) {
        first -= r.first;
        second -= r.second;
        return *this;
    }
    P &operator*=(const P &r) {
        first *= r.first;
        second *= r.second;
        return *this;
    }
    template <typename S>
    P &operator*=(const S &r) {
        first *= r, second *= r;
        return *this;
    }
    P operator+(const P &r) const {
        return P(*this) += r;
    }
    P operator-(const P &r) const {
        return P(*this) -= r;
    }
    P operator*(const P &r) const {
        return P(*this) *= r;
    }
    template <typename S>
    P operator*(const S &r) const {
        return P(*this) *= r;
    }
    P operator-() const {
        return P{-first, -second};
    }
};

using pl = P<ll, ll>;
using pi = P<int, int>;
using vp = V<pl>;

constexpr int inf = 1001001001;
constexpr long long infLL = 4004004004004004004LL;

template <typename T>
int sz(const T &t) {
    return t.size();
}

template <typename T, typename U>
inline bool amin(T &x, U y) {
    return (y < x) ? (x = y, true) : false;
}
template <typename T, typename U>
inline bool amax(T &x, U y) {
    return (x < y) ? (x = y, true) : false;
}

template <typename T>
inline T Max(const vector<T> &v) {
    return *max_element(begin(v), end(v));
}
template <typename T>
inline T Min(const vector<T> &v) {
    return *min_element(begin(v), end(v));
}
template <typename T>
inline long long Sum(const vector<T> &v) {
    return accumulate(begin(v), end(v), 0LL);
}

template <typename T>
int lb(const vector<T> &v, const T &a) {
    return lower_bound(begin(v), end(v), a) - begin(v);
}
template <typename T>
int ub(const vector<T> &v, const T &a) {
    return upper_bound(begin(v), end(v), a) - begin(v);
}

constexpr long long TEN(int n) {
    long long ret = 1, x = 10;

    for (; n; x *= x, n >>= 1)
        ret *= (n & 1 ? x : 1);

    return ret;
}

template <typename T, typename U>
pair<T, U> mkp(const T &t, const U &u) {
    return make_pair(t, u);
}

template <typename T>
vector<T> mkrui(const vector<T> &v, bool rev = false) {
    vector<T> ret(v.size() + 1);

    if (rev) {
        for (int i = int(v.size()) - 1; i >= 0; i--)
            ret[i] = v[i] + ret[i + 1];
    } else {
        for (int i = 0; i < int(v.size()); i++)
            ret[i + 1] = ret[i] + v[i];
    }

    return ret;
};

template <typename T>
vector<T> mkuni(const vector<T> &v) {
    vector<T> ret(v);
    sort(ret.begin(), ret.end());
    ret.erase(unique(ret.begin(), ret.end()), ret.end());
    return ret;
}

template <typename F>
vector<int> mkord(int N, F f) {
    vector<int> ord(N);
    iota(begin(ord), end(ord), 0);
    sort(begin(ord), end(ord), f);
    return ord;
}

template <typename T>
vector<int> mkinv(vector<T> &v) {
    int max_val = *max_element(begin(v), end(v));
    vector<int> inv(max_val + 1, -1);

    for (int i = 0; i < (int)v.size(); i++)
        inv[v[i]] = i;

    return inv;
}

vector<int> mkiota(int n) {
    vector<int> ret(n);
    iota(begin(ret), end(ret), 0);
    return ret;
}

template <typename T>
T mkrev(const T &v) {
    T w{v};
    reverse(begin(w), end(w));
    return w;
}

template <typename T>
bool nxp(vector<T> &v) {
    return next_permutation(begin(v), end(v));
}

template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

}  // namespace Nyaan

// bit operation
namespace Nyaan {
__attribute__((target("popcnt"))) inline int popcnt(const u64 &a) {
    return _mm_popcnt_u64(a);
}
inline int lsb(const u64 &a) {
    return a ? __builtin_ctzll(a) : 64;
}
inline int ctz(const u64 &a) {
    return a ? __builtin_ctzll(a) : 64;
}
inline int msb(const u64 &a) {
    return a ? 63 - __builtin_clzll(a) : -1;
}
template <typename T>
inline int gbit(const T &a, int i) {
    return (a >> i) & 1;
}
template <typename T>
inline void sbit(T &a, int i, bool b) {
    if (gbit(a, i) != b)
        a ^= T(1) << i;
}
constexpr long long PW(int n) {
    return 1LL << n;
}
constexpr long long MSK(int n) {
    return (1LL << n) - 1;
}
}  // namespace Nyaan

// inout
namespace Nyaan {

template <typename T, typename U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
    os << p.first << " " << p.second;
    return os;
}
template <typename T, typename U>
istream &operator>>(istream &is, pair<T, U> &p) {
    is >> p.first >> p.second;
    return is;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    int s = (int)v.size();

    for (int i = 0; i < s; i++)
        os << (i ? " " : "") << v[i];

    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &x : v)
        is >> x;

    return is;
}

istream &operator>>(istream &is, __int128_t &x) {
    string S;
    is >> S;
    x = 0;
    int flag = 0;

    for (auto &c : S) {
        if (c == '-') {
            flag = true;
            continue;
        }

        x *= 10;
        x += c - '0';
    }

    if (flag)
        x = -x;

    return is;
}

istream &operator>>(istream &is, __uint128_t &x) {
    string S;
    is >> S;
    x = 0;

    for (auto &c : S) {
        x *= 10;
        x += c - '0';
    }

    return is;
}

ostream &operator<<(ostream &os, __int128_t x) {
    if (x == 0)
        return os << 0;

    if (x < 0)
        os << '-', x = -x;

    string S;

    while (x)
        S.push_back('0' + x % 10), x /= 10;

    reverse(begin(S), end(S));
    return os << S;
}
ostream &operator<<(ostream &os, __uint128_t x) {
    if (x == 0)
        return os << 0;

    string S;

    while (x)
        S.push_back('0' + x % 10), x /= 10;

    reverse(begin(S), end(S));
    return os << S;
}

void in() {}
template <typename T, class... U>
void in(T &t, U &...u) {
    cin >> t;
    in(u...);
}

void out() {
    cout << "\n";
}
template <typename T, class... U, char sep = ' '>
void out(const T &t, const U &...u) {
    cout << t;

    if (sizeof...(u))
        cout << sep;

    out(u...);
}

struct IoSetupNya {
    IoSetupNya() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(15);
        cerr << fixed << setprecision(7);
    }
} iosetupnya;

}  // namespace Nyaan

// debug

#ifdef NyaanDebug
#define trc(...) (void(0))
#else
#define trc(...) (void(0))
#endif

#ifdef NyaanLocal
#define trc2(...) (void(0))
#else
#define trc2(...) (void(0))
#endif

// macro
#define each(x, v) for (auto&& x : v)
#define each2(x, y, v) for (auto&& [x, y] : v)
#define all(v) (v).begin(), (v).end()
#define rep(i, N) for (long long i = 0; i < (long long)(N); i++)
#define repr(i, N) for (long long i = (long long)(N)-1; i >= 0; i--)
#define rep1(i, N) for (long long i = 1; i <= (long long)(N); i++)
#define repr1(i, N) for (long long i = (N); (long long)(i) > 0; i--)
#define reg(i, a, b) for (long long i = (a); i < (b); i++)
#define regr(i, a, b) for (long long i = (b)-1; i >= (a); i--)
#define fi first
#define se second
#define ini(...)   \
  int __VA_ARGS__; \
  in(__VA_ARGS__)
#define inl(...)         \
  long long __VA_ARGS__; \
  in(__VA_ARGS__)
#define ins(...)      \
  string __VA_ARGS__; \
  in(__VA_ARGS__)
#define in2(s, t)                           \
  for (int i = 0; i < (int)s.size(); i++) { \
    in(s[i], t[i]);                         \
  }
#define in3(s, t, u)                        \
  for (int i = 0; i < (int)s.size(); i++) { \
    in(s[i], t[i], u[i]);                   \
  }
#define in4(s, t, u, v)                     \
  for (int i = 0; i < (int)s.size(); i++) { \
    in(s[i], t[i], u[i], v[i]);             \
  }
#define die(...)             \
  do {                       \
    Nyaan::out(__VA_ARGS__); \
    return;                  \
  } while (0)

namespace Nyaan {
void solve();
}
int main() {
    Nyaan::solve();
}

//

using namespace std;





template <uint32_t mod>
struct LazyMontgomeryModInt {
    using mint = LazyMontgomeryModInt;
    using i32 = int32_t;
    using u32 = uint32_t;
    using u64 = uint64_t;

    static constexpr u32 get_r() {
        u32 ret = mod;

        for (i32 i = 0; i < 4; ++i)
            ret *= 2 - mod * ret;

        return ret;
    }

    static constexpr u32 r = get_r();
    static constexpr u32 n2 = -u64(mod) % mod;
    static_assert(r * mod == 1, "invalid, r * mod != 1");
    static_assert(mod < (1 << 30), "invalid, mod >= 2 ^ 30");
    static_assert((mod & 1) == 1, "invalid, mod % 2 == 0");

    u32 a;

    constexpr LazyMontgomeryModInt() : a(0) {}
    constexpr LazyMontgomeryModInt(const int64_t &b)
        : a(reduce(u64(b % mod + mod) * n2)) {};

    static constexpr u32 reduce(const u64 &b) {
        return (b + u64(u32(b) * u32(-r)) * mod) >> 32;
    }

    constexpr mint &operator+=(const mint &b) {
        if (i32(a += b.a - 2 * mod) < 0)
            a += 2 * mod;

        return *this;
    }

    constexpr mint &operator-=(const mint &b) {
        if (i32(a -= b.a) < 0)
            a += 2 * mod;

        return *this;
    }

    constexpr mint &operator*=(const mint &b) {
        a = reduce(u64(a) * b.a);
        return *this;
    }

    constexpr mint &operator/=(const mint &b) {
        *this *= b.inverse();
        return *this;
    }

    constexpr mint operator+(const mint &b) const {
        return mint(*this) += b;
    }
    constexpr mint operator-(const mint &b) const {
        return mint(*this) -= b;
    }
    constexpr mint operator*(const mint &b) const {
        return mint(*this) *= b;
    }
    constexpr mint operator/(const mint &b) const {
        return mint(*this) /= b;
    }
    constexpr bool operator==(const mint &b) const {
        return (a >= mod ? a - mod : a) == (b.a >= mod ? b.a - mod : b.a);
    }
    constexpr bool operator!=(const mint &b) const {
        return (a >= mod ? a - mod : a) != (b.a >= mod ? b.a - mod : b.a);
    }
    constexpr mint operator-() const {
        return mint() - mint(*this);
    }

    constexpr mint pow(u64 n) const {
        mint ret(1), mul(*this);

        while (n > 0) {
            if (n & 1)
                ret *= mul;

            mul *= mul;
            n >>= 1;
        }

        return ret;
    }

    constexpr mint inverse() const {
        return pow(mod - 2);
    }

    friend ostream &operator<<(ostream &os, const mint &b) {
        return os << b.get();
    }

    friend istream &operator>>(istream &is, mint &b) {
        int64_t t;
        is >> t;
        b = LazyMontgomeryModInt<mod>(t);
        return (is);
    }

    constexpr u32 get() const {
        u32 ret = reduce(a);
        return ret >= mod ? ret - mod : ret;
    }

    static constexpr u32 get_mod() {
        return mod;
    }
};
template <typename mint>
struct NTT {
    static constexpr uint32_t get_pr() {
        uint32_t _mod = mint::get_mod();
        using u64 = uint64_t;
        u64 ds[32] = {};
        int idx = 0;
        u64 m = _mod - 1;

        for (u64 i = 2; i * i <= m; ++i) {
            if (m % i == 0) {
                ds[idx++] = i;

                while (m % i == 0)
                    m /= i;
            }
        }

        if (m != 1)
            ds[idx++] = m;

        uint32_t _pr = 2;

        while (1) {
            int flg = 1;

            for (int i = 0; i < idx; ++i) {
                u64 a = _pr, b = (_mod - 1) / ds[i], r = 1;

                while (b) {
                    if (b & 1)
                        r = r * a % _mod;

                    a = a * a % _mod;
                    b >>= 1;
                }

                if (r == 1) {
                    flg = 0;
                    break;
                }
            }

            if (flg == 1)
                break;

            ++_pr;
        }

        return _pr;
    };

    static constexpr uint32_t mod = mint::get_mod();
    static constexpr uint32_t pr = get_pr();
    static constexpr int level = __builtin_ctzll(mod - 1);
    mint dw[level], dy[level];

    void setwy(int k) {
        mint w[level], y[level];
        w[k - 1] = mint(pr).pow((mod - 1) / (1 << k));
        y[k - 1] = w[k - 1].inverse();

        for (int i = k - 2; i > 0; --i)
            w[i] = w[i + 1] * w[i + 1], y[i] = y[i + 1] * y[i + 1];

        dw[1] = w[1], dy[1] = y[1], dw[2] = w[2], dy[2] = y[2];

        for (int i = 3; i < k; ++i) {
            dw[i] = dw[i - 1] * y[i - 2] * w[i];
            dy[i] = dy[i - 1] * w[i - 2] * y[i];
        }
    }

    NTT() {
        setwy(level);
    }

    void fft4(vector<mint> &a, int k) {
        if ((int)a.size() <= 1)
            return;

        if (k == 1) {
            mint a1 = a[1];
            a[1] = a[0] - a[1];
            a[0] = a[0] + a1;
            return;
        }

        if (k & 1) {
            int v = 1 << (k - 1);

            for (int j = 0; j < v; ++j) {
                mint ajv = a[j + v];
                a[j + v] = a[j] - ajv;
                a[j] += ajv;
            }
        }

        int u = 1 << (2 + (k & 1));
        int v = 1 << (k - 2 - (k & 1));
        mint one = mint(1);
        mint imag = dw[1];

        while (v) {
            // jh = 0
            {
                int j0 = 0;
                int j1 = v;
                int j2 = j1 + v;
                int j3 = j2 + v;

                for (; j0 < v; ++j0, ++j1, ++j2, ++j3) {
                    mint t0 = a[j0], t1 = a[j1], t2 = a[j2], t3 = a[j3];
                    mint t0p2 = t0 + t2, t1p3 = t1 + t3;
                    mint t0m2 = t0 - t2, t1m3 = (t1 - t3) * imag;
                    a[j0] = t0p2 + t1p3, a[j1] = t0p2 - t1p3;
                    a[j2] = t0m2 + t1m3, a[j3] = t0m2 - t1m3;
                }
            }
            // jh >= 1
            mint ww = one, xx = one * dw[2], wx = one;

            for (int jh = 4; jh < u;) {
                ww = xx * xx, wx = ww * xx;
                int j0 = jh * v;
                int je = j0 + v;
                int j2 = je + v;

                for (; j0 < je; ++j0, ++j2) {
                    mint t0 = a[j0], t1 = a[j0 + v] * xx, t2 = a[j2] * ww,
                         t3 = a[j2 + v] * wx;
                    mint t0p2 = t0 + t2, t1p3 = t1 + t3;
                    mint t0m2 = t0 - t2, t1m3 = (t1 - t3) * imag;
                    a[j0] = t0p2 + t1p3, a[j0 + v] = t0p2 - t1p3;
                    a[j2] = t0m2 + t1m3, a[j2 + v] = t0m2 - t1m3;
                }

                xx *= dw[__builtin_ctzll((jh += 4))];
            }

            u <<= 2;
            v >>= 2;
        }
    }

    void ifft4(vector<mint> &a, int k) {
        if ((int)a.size() <= 1)
            return;

        if (k == 1) {
            mint a1 = a[1];
            a[1] = a[0] - a[1];
            a[0] = a[0] + a1;
            return;
        }

        int u = 1 << (k - 2);
        int v = 1;
        mint one = mint(1);
        mint imag = dy[1];

        while (u) {
            // jh = 0
            {
                int j0 = 0;
                int j1 = v;
                int j2 = v + v;
                int j3 = j2 + v;

                for (; j0 < v; ++j0, ++j1, ++j2, ++j3) {
                    mint t0 = a[j0], t1 = a[j1], t2 = a[j2], t3 = a[j3];
                    mint t0p1 = t0 + t1, t2p3 = t2 + t3;
                    mint t0m1 = t0 - t1, t2m3 = (t2 - t3) * imag;
                    a[j0] = t0p1 + t2p3, a[j2] = t0p1 - t2p3;
                    a[j1] = t0m1 + t2m3, a[j3] = t0m1 - t2m3;
                }
            }
            // jh >= 1
            mint ww = one, xx = one * dy[2], yy = one;
            u <<= 2;

            for (int jh = 4; jh < u;) {
                ww = xx * xx, yy = xx * imag;
                int j0 = jh * v;
                int je = j0 + v;
                int j2 = je + v;

                for (; j0 < je; ++j0, ++j2) {
                    mint t0 = a[j0], t1 = a[j0 + v], t2 = a[j2], t3 = a[j2 + v];
                    mint t0p1 = t0 + t1, t2p3 = t2 + t3;
                    mint t0m1 = (t0 - t1) * xx, t2m3 = (t2 - t3) * yy;
                    a[j0] = t0p1 + t2p3, a[j2] = (t0p1 - t2p3) * ww;
                    a[j0 + v] = t0m1 + t2m3, a[j2 + v] = (t0m1 - t2m3) * ww;
                }

                xx *= dy[__builtin_ctzll(jh += 4)];
            }

            u >>= 4;
            v <<= 2;
        }

        if (k & 1) {
            u = 1 << (k - 1);

            for (int j = 0; j < u; ++j) {
                mint ajv = a[j] - a[j + u];
                a[j] += a[j + u];
                a[j + u] = ajv;
            }
        }
    }

    void ntt(vector<mint> &a) {
        if ((int)a.size() <= 1)
            return;

        fft4(a, __builtin_ctz(a.size()));
    }

    void intt(vector<mint> &a) {
        if ((int)a.size() <= 1)
            return;

        ifft4(a, __builtin_ctz(a.size()));
        mint iv = mint(a.size()).inverse();

        for (auto &x : a)
            x *= iv;
    }

    vector<mint> multiply(const vector<mint> &a, const vector<mint> &b) {
        int l = a.size() + b.size() - 1;

        if (min<int>(a.size(), b.size()) <= 40) {
            vector<mint> s(l);

            for (int i = 0; i < (int)a.size(); ++i)
                for (int j = 0; j < (int)b.size(); ++j)
                    s[i + j] += a[i] * b[j];

            return s;
        }

        int k = 2, M = 4;

        while (M < l)
            M <<= 1, ++k;

        setwy(k);
        vector<mint> s(M);

        for (int i = 0; i < (int)a.size(); ++i)
            s[i] = a[i];

        fft4(s, k);

        if (a.size() == b.size() && a == b) {
            for (int i = 0; i < M; ++i)
                s[i] *= s[i];
        } else {
            vector<mint> t(M);

            for (int i = 0; i < (int)b.size(); ++i)
                t[i] = b[i];

            fft4(t, k);

            for (int i = 0; i < M; ++i)
                s[i] *= t[i];
        }

        ifft4(s, k);
        s.resize(l);
        mint invm = mint(M).inverse();

        for (int i = 0; i < l; ++i)
            s[i] *= invm;

        return s;
    }

    void ntt_doubling(vector<mint> &a) {
        int M = (int)a.size();
        auto b = a;
        intt(b);
        mint r = 1, zeta = mint(pr).pow((mint::get_mod() - 1) / (M << 1));

        for (int i = 0; i < M; i++)
            b[i] *= r, r *= zeta;

        ntt(b);
        copy(begin(b), end(b), back_inserter(a));
    }
};

namespace ArbitraryNTT {
using i64 = int64_t;
using u128 = __uint128_t;
constexpr int32_t m0 = 167772161;
constexpr int32_t m1 = 469762049;
constexpr int32_t m2 = 754974721;
using mint0 = LazyMontgomeryModInt<m0>;
using mint1 = LazyMontgomeryModInt<m1>;
using mint2 = LazyMontgomeryModInt<m2>;
constexpr int r01 = mint1(m0).inverse().get();
constexpr int r02 = mint2(m0).inverse().get();
constexpr int r12 = mint2(m1).inverse().get();
constexpr int r02r12 = i64(r02) * r12 % m2;
constexpr i64 w1 = m0;
constexpr i64 w2 = i64(m0) * m1;

template <typename T, typename submint>
vector<submint> mul(const vector<T> &a, const vector<T> &b) {
    static NTT<submint> ntt;
    vector<submint> s(a.size()), t(b.size());

    for (int i = 0; i < (int)a.size(); ++i)
        s[i] = i64(a[i] % submint::get_mod());

    for (int i = 0; i < (int)b.size(); ++i)
        t[i] = i64(b[i] % submint::get_mod());

    return ntt.multiply(s, t);
}

template <typename T>
vector<int> multiply(const vector<T> &s, const vector<T> &t, int mod) {
    auto d0 = mul<T, mint0>(s, t);
    auto d1 = mul<T, mint1>(s, t);
    auto d2 = mul<T, mint2>(s, t);
    int n = d0.size();
    vector<int> ret(n);
    const int W1 = w1 % mod;
    const int W2 = w2 % mod;

    for (int i = 0; i < n; i++) {
        int n1 = d1[i].get(), n2 = d2[i].get(), a = d0[i].get();
        int b = i64(n1 + m1 - a) * r01 % m1;
        int c = (i64(n2 + m2 - a) * r02r12 + i64(m2 - b) * r12) % m2;
        ret[i] = (i64(a) + i64(b) * W1 + i64(c) * W2) % mod;
    }

    return ret;
}

template <typename mint>
vector<mint> multiply(const vector<mint> &a, const vector<mint> &b) {
    if (a.size() == 0 && b.size() == 0)
        return {};

    if (min<int>(a.size(), b.size()) < 128) {
        vector<mint> ret(a.size() + b.size() - 1);

        for (int i = 0; i < (int)a.size(); ++i)
            for (int j = 0; j < (int)b.size(); ++j)
                ret[i + j] += a[i] * b[j];

        return ret;
    }

    vector<int> s(a.size()), t(b.size());

    for (int i = 0; i < (int)a.size(); ++i)
        s[i] = a[i].get();

    for (int i = 0; i < (int)b.size(); ++i)
        t[i] = b[i].get();

    vector<int> u = multiply<int>(s, t, mint::get_mod());
    vector<mint> ret(u.size());

    for (int i = 0; i < (int)u.size(); ++i)
        ret[i] = mint(u[i]);

    return ret;
}

template <typename T>
vector<u128> multiply_u128(const vector<T> &s, const vector<T> &t) {
    if (s.size() == 0 && t.size() == 0)
        return {};

    if (min<int>(s.size(), t.size()) < 128) {
        vector<u128> ret(s.size() + t.size() - 1);

        for (int i = 0; i < (int)s.size(); ++i)
            for (int j = 0; j < (int)t.size(); ++j)
                ret[i + j] += i64(s[i]) * t[j];

        return ret;
    }

    auto d0 = mul<T, mint0>(s, t);
    auto d1 = mul<T, mint1>(s, t);
    auto d2 = mul<T, mint2>(s, t);
    int n = d0.size();
    vector<u128> ret(n);

    for (int i = 0; i < n; i++) {
        i64 n1 = d1[i].get(), n2 = d2[i].get();
        i64 a = d0[i].get();
        i64 b = (n1 + m1 - a) * r01 % m1;
        i64 c = ((n2 + m2 - a) * r02r12 + (m2 - b) * r12) % m2;
        ret[i] = a + b * w1 + u128(c) * w2;
    }

    return ret;
}
}  // namespace ArbitraryNTT

namespace MultiPrecisionIntegerImpl {
struct TENS {
    static constexpr int offset = 30;
    constexpr TENS() : _tend() {
        _tend[offset] = 1;

        for (int i = 1; i <= offset; i++) {
            _tend[offset + i] = _tend[offset + i - 1] * 10.0;
            _tend[offset - i] = 1.0 / _tend[offset + i];
        }
    }
    long double ten_ld(int n) const {
        assert(-offset <= n and n <= offset);
        return _tend[n + offset];
    }

private:
    long double _tend[offset * 2 + 1];
};
}  // namespace MultiPrecisionIntegerImpl

// 0 は neg=false, dat={} として扱う
struct MultiPrecisionInteger {
    using M = MultiPrecisionInteger;
    inline constexpr static MultiPrecisionIntegerImpl::TENS tens = {};

    static constexpr int D = 1000000000;
    static constexpr int logD = 9;
    bool neg;
    vector<int> dat;

    MultiPrecisionInteger() : neg(false), dat() {}

    MultiPrecisionInteger(bool n, const vector<int> &d) : neg(n), dat(d) {}

    template < typename I, enable_if_t < is_integral_v<I> ||
                                         is_same_v<I, __int128_t >> * = nullptr > MultiPrecisionInteger(I x) : neg(false) {
        if constexpr(is_signed_v<I> || is_same_v<I, __int128_t>) {
            if (x < 0)
                neg = true, x = -x;
        }

        while (x)
            dat.push_back(x % D), x /= D;
    }

    MultiPrecisionInteger(const string &S) : neg(false) {
        assert(!S.empty());

        if (S.size() == 1u && S[0] == '0')
            return;

        int l = 0;

        if (S[0] == '-')
            ++l, neg = true;

        for (int ie = S.size(); l < ie; ie -= logD) {
            int is = max(l, ie - logD);
            long long x = 0;

            for (int i = is; i < ie; i++)
                x = x * 10 + S[i] - '0';

            dat.push_back(x);
        }
    }

    friend M operator+(const M &lhs, const M &rhs) {
        if (lhs.neg == rhs.neg)
            return {lhs.neg, _add(lhs.dat, rhs.dat)};

        if (_leq(lhs.dat, rhs.dat)) {
            // |l| <= |r|
            auto c = _sub(rhs.dat, lhs.dat);
            bool n = _is_zero(c) ? false : rhs.neg;
            return {n, c};
        }

        auto c = _sub(lhs.dat, rhs.dat);
        bool n = _is_zero(c) ? false : lhs.neg;
        return {n, c};
    }
    friend M operator-(const M &lhs, const M &rhs) {
        return lhs + (-rhs);
    }

    friend M operator*(const M &lhs, const M &rhs) {
        auto c = _mul(lhs.dat, rhs.dat);
        bool n = _is_zero(c) ? false : (lhs.neg ^ rhs.neg);
        return {n, c};
    }
    friend pair<M, M> divmod(const M &lhs, const M &rhs) {
        auto dm = _divmod_newton(lhs.dat, rhs.dat);
        bool dn = _is_zero(dm.first) ? false : lhs.neg != rhs.neg;
        bool mn = _is_zero(dm.second) ? false : lhs.neg;
        return {M{dn, dm.first}, M{mn, dm.second}};
    }
    friend M operator/(const M &lhs, const M &rhs) {
        return divmod(lhs, rhs).first;
    }
    friend M operator%(const M &lhs, const M &rhs) {
        return divmod(lhs, rhs).second;
    }

    M &operator+=(const M &rhs) {
        return (*this) = (*this) + rhs;
    }
    M &operator-=(const M &rhs) {
        return (*this) = (*this) - rhs;
    }
    M &operator*=(const M &rhs) {
        return (*this) = (*this) * rhs;
    }
    M &operator/=(const M &rhs) {
        return (*this) = (*this) / rhs;
    }
    M &operator%=(const M &rhs) {
        return (*this) = (*this) % rhs;
    }

    M operator-() const {
        if (is_zero())
            return *this;

        return {!neg, dat};
    }
    M operator+() const {
        return *this;
    }
    friend M abs(const M &m) {
        return {false, m.dat};
    }
    bool is_zero() const {
        return _is_zero(dat);
    }

    friend bool operator==(const M &lhs, const M &rhs) {
        return lhs.neg == rhs.neg && lhs.dat == rhs.dat;
    }
    friend bool operator!=(const M &lhs, const M &rhs) {
        return lhs.neg != rhs.neg || lhs.dat != rhs.dat;
    }
    friend bool operator<(const M &lhs, const M &rhs) {
        if (lhs == rhs)
            return false;

        return _neq_lt(lhs, rhs);
    }
    friend bool operator<=(const M &lhs, const M &rhs) {
        if (lhs == rhs)
            return true;

        return _neq_lt(lhs, rhs);
    }
    friend bool operator>(const M &lhs, const M &rhs) {
        if (lhs == rhs)
            return false;

        return _neq_lt(rhs, lhs);
    }
    friend bool operator>=(const M &lhs, const M &rhs) {
        if (lhs == rhs)
            return true;

        return _neq_lt(rhs, lhs);
    }

    // a * 10^b (1 <= |a| < 10) の形で渡す
    // 相対誤差：10^{-16} ~ 10^{-19} 程度 (処理系依存)
    pair<long double, int> dfp() const {
        if (is_zero())
            return {0, 0};

        int l = max<int>(0, _size() - 3);

        int b = logD * l;

        string prefix{};

        for (int i = _size() - 1; i >= l; i--) {
            prefix += _itos(dat[i], i != _size() - 1);
        }

        b += prefix.size() - 1;
        long double a = 0;

        for (auto &c : prefix)
            a = a * 10.0 + (c - '0');

        a *= tens.ten_ld(-((int)prefix.size()) + 1);
        a = clamp<long double>(a, 1.0, nextafterl(10.0, 1.0));

        if (neg)
            a = -a;

        return {a, b};
    }
    string to_string() const {
        if (is_zero())
            return "0";

        string res;

        if (neg)
            res.push_back('-');

        for (int i = _size() - 1; i >= 0; i--) {
            res += _itos(dat[i], i != _size() - 1);
        }

        return res;
    }
    long double to_ld() const {
        auto [a, b] = dfp();

        if (-tens.offset <= b and b <= tens.offset) {
            return a * tens.ten_ld(b);
        }

        return a * powl(10, b);
    }
    long long to_ll() const {
        long long res = _to_ll(dat);
        return neg ? -res : res;
    }
    __int128_t to_i128() const {
        __int128_t res = _to_i128(dat);
        return neg ? -res : res;
    }

    friend istream &operator>>(istream &is, M &m) {
        string s;
        is >> s;
        m = M{s};
        return is;
    }

    friend ostream &operator<<(ostream &os, const M &m) {
        return os << m.to_string();
    }

    // 内部の関数をテスト
    static void _test_private_function(const M &, const M &);

private:
    // size
    int _size() const {
        return dat.size();
    }
    // a == b
    static bool _eq(const vector<int> &a, const vector<int> &b) {
        return a == b;
    }
    // a < b
    static bool _lt(const vector<int> &a, const vector<int> &b) {
        if (a.size() != b.size())
            return a.size() < b.size();

        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] != b[i])
                return a[i] < b[i];
        }

        return false;
    }
    // a <= b
    static bool _leq(const vector<int> &a, const vector<int> &b) {
        return _eq(a, b) || _lt(a, b);
    }
    // a < b (s.t. a != b)
    static bool _neq_lt(const M &lhs, const M &rhs) {
        assert(lhs != rhs);

        if (lhs.neg != rhs.neg)
            return lhs.neg;

        bool f = _lt(lhs.dat, rhs.dat);

        if (f)
            return !lhs.neg;

        return lhs.neg;
    }
    // a == 0
    static bool _is_zero(const vector<int> &a) {
        return a.empty();
    }
    // a == 1
    static bool _is_one(const vector<int> &a) {
        return (int)a.size() == 1 && a[0] == 1;
    }
    // 末尾 0 を削除
    static void _shrink(vector<int> &a) {
        while (a.size() && a.back() == 0)
            a.pop_back();
    }
    // 末尾 0 を削除
    void _shrink() {
        while (_size() && dat.back() == 0)
            dat.pop_back();
    }
    // a + b
    static vector<int> _add(const vector<int> &a, const vector<int> &b) {
        vector<int> c(max(a.size(), b.size()) + 1);

        for (int i = 0; i < (int)a.size(); i++)
            c[i] += a[i];

        for (int i = 0; i < (int)b.size(); i++)
            c[i] += b[i];

        for (int i = 0; i < (int)c.size() - 1; i++) {
            if (c[i] >= D)
                c[i] -= D, c[i + 1]++;
        }

        _shrink(c);
        return c;
    }
    // a - b
    static vector<int> _sub(const vector<int> &a, const vector<int> &b) {
        assert(_leq(b, a));
        vector<int> c{a};
        int borrow = 0;

        for (int i = 0; i < (int)a.size(); i++) {
            if (i < (int)b.size())
                borrow += b[i];

            c[i] -= borrow;
            borrow = 0;

            if (c[i] < 0)
                c[i] += D, borrow = 1;
        }

        assert(borrow == 0);
        _shrink(c);
        return c;
    }
    // a * b (fft)
    static vector<int> _mul_fft(const vector<int> &a, const vector<int> &b) {
        if (a.empty() || b.empty())
            return {};

        auto m = ArbitraryNTT::multiply_u128(a, b);

        vector<int> c;

        c.reserve(m.size() + 3);

        __uint128_t x = 0;

        for (int i = 0;; i++) {
            if (i >= (int)m.size() && x == 0)
                break;

            if (i < (int)m.size())
                x += m[i];

            c.push_back(x % D);
            x /= D;
        }

        _shrink(c);
        return c;
    }
    // a * b (naive)
    static vector<int> _mul_naive(const vector<int> &a, const vector<int> &b) {
        if (a.empty() || b.empty())
            return {};

        vector<long long> prod(a.size() + b.size() - 1 + 1);

        for (int i = 0; i < (int)a.size(); i++) {
            for (int j = 0; j < (int)b.size(); j++) {
                long long p = 1LL * a[i] * b[j];
                prod[i + j] += p;

                if (prod[i + j] >= (4LL * D * D)) {
                    prod[i + j] -= 4LL * D * D;
                    prod[i + j + 1] += 4LL * D;
                }
            }
        }

        vector<int> c(prod.size() + 1);
        long long x = 0;
        int i = 0;

        for (; i < (int)prod.size(); i++)
            x += prod[i], c[i] = x % D, x /= D;

        while (x)
            c[i] = x % D, x /= D, i++;

        _shrink(c);
        return c;
    }
    // a * b
    static vector<int> _mul(const vector<int> &a, const vector<int> &b) {
        if (_is_zero(a) || _is_zero(b))
            return {};

        if (_is_one(a))
            return b;

        if (_is_one(b))
            return a;

        if (min<int>(a.size(), b.size()) <= 128) {
            return a.size() < b.size() ? _mul_naive(b, a) : _mul_naive(a, b);
        }

        return _mul_fft(a, b);
    }
    // 0 <= A < 1e18, 1 <= B < 1e9
    static pair<vector<int>, vector<int>> _divmod_li(const vector<int> &a,
    const vector<int> &b) {
        assert(0 <= (int)a.size() && (int)a.size() <= 2);
        assert((int)b.size() == 1);
        long long va = _to_ll(a);
        int vb = b[0];
        return {_integer_to_vec(va / vb), _integer_to_vec(va % vb)};
    }
    // 0 <= A < 1e18, 1 <= B < 1e18
    static pair<vector<int>, vector<int>> _divmod_ll(const vector<int> &a,
    const vector<int> &b) {
        assert(0 <= (int)a.size() && (int)a.size() <= 2);
        assert(1 <= (int)b.size() && (int)b.size() <= 2);
        long long va = _to_ll(a), vb = _to_ll(b);
        return {_integer_to_vec(va / vb), _integer_to_vec(va % vb)};
    }
    // 1 <= B < 1e9
    static pair<vector<int>, vector<int>> _divmod_1e9(const vector<int> &a,
    const vector<int> &b) {
        assert((int)b.size() == 1);

        if (b[0] == 1)
            return {a, {}};

        if ((int)a.size() <= 2)
            return _divmod_li(a, b);

        vector<int> quo(a.size());
        long long d = 0;
        int b0 = b[0];

        for (int i = a.size() - 1; i >= 0; i--) {
            d = d * D + a[i];
            assert(d < 1LL * D * b0);
            int q = d / b0, r = d % b0;
            quo[i] = q, d = r;
        }

        _shrink(quo);
        return {quo, d ? vector<int>{int(d)} : vector<int>{}};
    }
    // 0 <= A, 1 <= B
    static pair<vector<int>, vector<int>> _divmod_naive(const vector<int> &a,
    const vector<int> &b) {
        if (_is_zero(b)) {
            cerr << "Divide by Zero Exception" << endl;
            exit(1);
        }

        assert(1 <= (int)b.size());

        if ((int)b.size() == 1)
            return _divmod_1e9(a, b);

        if (max<int>(a.size(), b.size()) <= 2)
            return _divmod_ll(a, b);

        if (_lt(a, b))
            return {{}, a};

        // B >= 1e9, A >= B
        int norm = D / (b.back() + 1);

        vector<int> x = _mul(a, {norm});
        vector<int> y = _mul(b, {norm});
        int yb = y.back();
        vector<int> quo(x.size() - y.size() + 1);
        vector<int> rem(x.end() - y.size(), x.end());

        for (int i = quo.size() - 1; i >= 0; i--) {
            if (rem.size() < y.size()) {
                // do nothing
            } else if (rem.size() == y.size()) {
                if (_leq(y, rem)) {
                    quo[i] = 1, rem = _sub(rem, y);
                }
            } else {
                assert(y.size() + 1 == rem.size());
                long long rb = 1LL * rem[rem.size() - 1] * D + rem[rem.size() - 2];
                int q = rb / yb;
                vector<int> yq = _mul(y, {q});

                // 真の商は q-2 以上 q+1 以下だが自信が無いので念のため while を回す
                while (_lt(rem, yq))
                    q--, yq = _sub(yq, y);

                rem = _sub(rem, yq);

                while (_leq(y, rem))
                    q++, rem = _sub(rem, y);

                quo[i] = q;
            }

            if (i)
                rem.insert(begin(rem), x[i - 1]);
        }

        _shrink(quo), _shrink(rem);
        auto [q2, r2] = _divmod_1e9(rem, {norm});
        assert(_is_zero(r2));
        return {quo, q2};
    }

    // 0 <= A, 1 <= B
    static pair<vector<int>, vector<int>> _divmod_dc(const vector<int> &a,
                                       const vector<int> &b);

    // 1 / a を 絶対誤差 B^{-deg} で求める
    static vector<int> _calc_inv(const vector<int> &a, int deg) {
        assert(!a.empty() && D / 2 <= a.back() and a.back() < D);
        int k = deg, c = a.size();

        while (k > 64)
            k = (k + 1) / 2;

        vector<int> z(c + k + 1);
        z.back() = 1;
        z = _divmod_naive(z, a).first;

        while (k < deg) {
            vector<int> s = _mul(z, z);
            s.insert(begin(s), 0);
            int d = min(c, 2 * k + 1);
            vector<int> t{end(a) - d, end(a)}, u = _mul(s, t);
            u.erase(begin(u), begin(u) + d);
            vector<int> w(k + 1), w2 = _add(z, z);
            copy(begin(w2), end(w2), back_inserter(w));
            z = _sub(w, u);
            z.erase(begin(z));
            k *= 2;
        }

        z.erase(begin(z), begin(z) + k - deg);
        return z;
    }

    static pair<vector<int>, vector<int>> _divmod_newton(const vector<int> &a,
    const vector<int> &b) {
        if (_is_zero(b)) {
            cerr << "Divide by Zero Exception" << endl;
            exit(1);
        }

        if ((int)b.size() <= 64)
            return _divmod_naive(a, b);

        if ((int)a.size() - (int)b.size() <= 64)
            return _divmod_naive(a, b);

        int norm = D / (b.back() + 1);
        vector<int> x = _mul(a, {norm});
        vector<int> y = _mul(b, {norm});
        int s = x.size(), t = y.size();
        int deg = s - t + 2;
        vector<int> z = _calc_inv(y, deg);
        vector<int> q = _mul(x, z);
        q.erase(begin(q), begin(q) + t + deg);
        vector<int> yq = _mul(y, {q});

        while (_lt(x, yq))
            q = _sub(q, {1}), yq = _sub(yq, y);
        vector<int> r = _sub(x, yq);

        while (_leq(y, r))
            q = _add(q, {1}), r = _sub(r, y);
        _shrink(q), _shrink(r);
        auto [q2, r2] = _divmod_1e9(r, {norm});
        assert(_is_zero(r2));
        return {q, q2};
    }

    // int -> string
    // 先頭かどうかに応じて zero padding するかを決める
    static string _itos(int x, bool zero_padding) {
        assert(0 <= x && x < D);
        string res;

        for (int i = 0; i < logD; i++) {
            res.push_back('0' + x % 10), x /= 10;
        }

        if (!zero_padding) {
            while (res.size() && res.back() == '0')
                res.pop_back();

            assert(!res.empty());
        }

        reverse(begin(res), end(res));
        return res;
    }

    // convert ll to vec
    template < typename I, enable_if_t < is_integral_v<I> ||
                                         is_same_v<I, __int128_t >> * = nullptr >
    static vector<int> _integer_to_vec(I x) {
        if constexpr(is_signed_v<I> || is_same_v<I, __int128_t>) {
            assert(x >= 0);
        }

        vector<int> res;

        while (x)
            res.push_back(x % D), x /= D;

        return res;
    }

    static long long _to_ll(const vector<int> &a) {
        long long res = 0;

        for (int i = (int)a.size() - 1; i >= 0; i--)
            res = res * D + a[i];

        return res;
    }

    static __int128_t _to_i128(const vector<int> &a) {
        __int128_t res = 0;

        for (int i = (int)a.size() - 1; i >= 0; i--)
            res = res * D + a[i];

        return res;
    }

    static void _dump(const vector<int> &a, string s = "") {
        if (!s.empty())
            cerr << s << " : ";

        cerr << "{ ";

        for (int i = 0; i < (int)a.size(); i++)
            cerr << a[i] << ", ";

        cerr << "}" << endl;
    }
};

using bigint = MultiPrecisionInteger;

/**
 * @brief 多倍長整数
 */



using namespace std;

namespace fastio {
static constexpr int SZ = 1 << 17;
char inbuf[SZ], outbuf[SZ];
int in_left = 0, in_right = 0, out_right = 0;

struct Pre {
    char num[40000];
    constexpr Pre() : num() {
        for (int i = 0; i < 10000; i++) {
            int n = i;

            for (int j = 3; j >= 0; j--) {
                num[i * 4 + j] = n % 10 + '0';
                n /= 10;
            }
        }
    }
} constexpr pre;

inline void load() {
    int len = in_right - in_left;
    memmove(inbuf, inbuf + in_left, len);
    in_right = len + fread(inbuf + len, 1, SZ - len, stdin);
    in_left = 0;
}

inline void flush() {
    fwrite(outbuf, 1, out_right, stdout);
    out_right = 0;
}

inline void skip_space() {
    if (in_left + 32 > in_right)
        load();

    while (inbuf[in_left] <= ' ')
        in_left++;
}

inline void rd(char &c) {
    if (in_left + 32 > in_right)
        load();

    c = inbuf[in_left++];
}
inline void rd(string &S) {
    skip_space();

    while (true) {
        if (in_left == in_right)
            load();

        int i = in_left;

        for (; i != in_right; i++) {
            if (inbuf[i] <= ' ')
                break;
        }

        copy(inbuf + in_left, inbuf + i, back_inserter(S));
        in_left = i;

        if (i != in_right)
            break;
    }
}
template <typename T>
inline void rd(T &x) {
    if (in_left + 32 > in_right)
        load();

    char c;

    do
        c = inbuf[in_left++];

    while (c < '-');

    [[maybe_unused]] bool minus = false;

    if constexpr(is_signed<T>::value == true) {
        if (c == '-')
            minus = true, c = inbuf[in_left++];
    }

    x = 0;

    while (c >= '0') {
        x = x * 10 + (c & 15);
        c = inbuf[in_left++];
    }

    if constexpr(is_signed<T>::value == true) {
        if (minus)
            x = -x;
    }
}
inline void rd() {}
template <typename Head, typename... Tail>
inline void rd(Head &head, Tail &... tail) {
    rd(head);
    rd(tail...);
}

inline void wt(const char &c) {
    if (out_right > SZ - 32)
        flush();

    outbuf[out_right++] = c;
}
inline void wt(const bool &b) {
    if (out_right > SZ - 32)
        flush();

    outbuf[out_right++] = b ? '1' : '0';
}
inline void wt(const string &S) {
    int i = 0;

    while (i != (int)S.size()) {
        if (out_right == SZ)
            flush();

        int len = min((int)S.size() - i, SZ - out_right);
        trc(len);
        memcpy(outbuf + out_right, S.data() + i, sizeof(char) * len);
        i += len, out_right += len;
    }
}
template < typename T,
           enable_if_t < is_integral_v<T> &&sizeof(T) <= 8 > * = nullptr >
inline void wt(const T &_x) {
    if (out_right > SZ - 40)
        flush();

    if (!_x) {
        outbuf[out_right++] = '0';
        return;
    }

    T x = _x;

    if constexpr(is_signed<T>::value == true) {
        if (x < 0)
            outbuf[out_right++] = '-', x = -x;
    }

    int i = 12;
    char buf[16];

    while (x >= 10000) {
        memcpy(buf + i, pre.num + (x % 10000) * 4, 4);
        x /= 10000;
        i -= 4;
    }

    if (x < 100) {
        if (x < 10) {
            outbuf[out_right] = '0' + x;
            ++out_right;
        } else {
            uint32_t q = (uint32_t(x) * 205) >> 11;
            uint32_t r = uint32_t(x) - q * 10;
            outbuf[out_right] = '0' + q;
            outbuf[out_right + 1] = '0' + r;
            out_right += 2;
        }
    } else {
        if (x < 1000) {
            memcpy(outbuf + out_right, pre.num + (x << 2) + 1, 3);
            out_right += 3;
        } else {
            memcpy(outbuf + out_right, pre.num + (x << 2), 4);
            out_right += 4;
        }
    }

    memcpy(outbuf + out_right, buf + i + 4, 12 - i);
    out_right += 12 - i;
}
inline void wt() {}
template <typename Head, typename... Tail>
inline void wt(const Head &&head, const Tail &&... tail) {
    wt(head);
    wt(forward<Tail>(tail)...);
}
template <typename... Args>
inline void wtn(Args &&... x) {
    wt(forward<Args>(x)...);
    wt('\n');
}

struct Dummy {
    Dummy() {
        atexit(flush);
    }
} dummy;

}  // namespace fastio
using fastio::rd;
using fastio::skip_space;
using fastio::wt;
using fastio::wtn;


using namespace Nyaan;

char buf1[2001000], buf2[2001000];

void q() {
    int t = 1;
    string S, T;

    while (t--) {
        scanf("%s %s\n", buf1, buf2);
        bigint a = S = buf1, b = T = buf2;
        auto q = a / b;
        // auto [q, r] = divmod(a, b);
        // trc(q, r);
        auto Q = q.to_string();
        // auto R = r.to_string();
        wt(Q);
        // wt(' ');
        // wt(R);
        wt('\n');
    }
}

void Nyaan::solve() {
    int t = 1;

    // in(t);
    while (t--)
        q();
}
