#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[31]={1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040};

int main(){
    ll n; cin>>n;
    for(ll i=0;i<n;i++) cout<<a[i]<<" ";
}