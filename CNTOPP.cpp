#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

int count_by_bruteforce(vector<int> &inp, int &n){
    // Complexity: O(n^2)
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            cnt += (inp[i] > inp[j]);
        }
    }
    return cnt;
}
int count_by_recursion(vector<int> &inp, int l, int r){
    // T(n) =  Σ(k * ((n / (2^k))^2)), k : 1 --> log2(n)
    // Ta có thể tính từng thành phần riêng lẻ:
    // Giả sử T(k) là thành phần thứ k trong chuỗi, tức là T(k) = k * ((n / (2^k))^2)
    // Ta có:
    // T(k) = k * ((n / (2^k))^2)
    // = k * (n^2 / (2^(2k)))
    // = (k * n^2) / (4^k)
    // Vậy, tổng của chuỗi có thể viết lại thành:
    // T(n) = Σ((k * n^2) / (4^k)), k : 1 --> log2(n)
    // Công thức tổng của dãy số hình học là:
    // S = a / (1 - r)
    // Trong đó:
    // S là tổng của dãy số
    // a là phần tử đầu tiên của dãy số
    // r là tỷ số giữa các phần tử liên tiếp trong dãy số (trong trường hợp này là 1/4)
    // Ta có: a = n^2 / 4, r = 1/4
    // Do đó, tổng của chuỗi là:
    // Tổng = (n^2 / 4) / (1 - 1/4)
    // = (n^2 / 4) / (3/4)
    // = (n^2 / 4) * (4/3)
    // = (n^2) / 3
    
    // Complexity: O((n^2) / 3)
    int len = r - l + 1;
    if (len == 1) return 0;
    if (len == 2) return (inp[l] > inp[r]);

    int mid = l + (r - l) / 2;
    int combine = 0;
    for (int i = l; i <= mid; i++){
        for (int j = mid + 1; j <= r; j++){
            combine += (inp[i] > inp[j]);
        }
    }
    int lef = count_by_recursion(inp, l, mid);
    int rgh = count_by_recursion(inp, mid+1, r);
    return lef + rgh + combine;
}

signed main(){
    
    int n; cin >> n;
    vector <int> inp(n+5);
    for (int i = 1; i <= n; i++) cin >> inp[i];

    cout << count_by_bruteforce(inp, n) << endl;
    cout << count_by_recursion(inp, 1, n) << endl;

    return 0;
}