#include <bits/stdc++.h>

using namespace std;

class dsu{
    public:
        vector <int> parent;
        vector <int> size;
        dsu(int n){
            parent.assign(n,-1);
            size.assign(n,1);
        }
        void make_set(int v){
            parent[v]=v;
            size[v]=1;
        }
        int find_parent(int v){
            if(v==parent[v]){
                return v;
            }
            return parent[v]=find_parent(parent[v]);
        }
        void union_set(int a, int b){
            a = find_parent(a);
            b = find_parent(b);
            if (a==b) return;
            if(size[a] <= size[b]){
                parent[a] = b;
                size[b] += size[a];
            }else{
                parent[b] = a;
                size[a] += size[b];
            }
        }
};
  
void solve(){
    int n; cin >> n;
    dsu temp(n);
    for (int i = 0; i < n; i++){
        temp.make_set(i);
    }
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        temp.union_set(i, x-1);
    }
    for (int i = 0; i < n; i++){
        cout << temp.size[temp.find_parent(i)] << " ";
    }
    cout << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test = 1;
    while (test--){
        solve();
    }
    return 0;
}