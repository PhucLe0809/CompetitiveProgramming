#include <bits/stdc++.h>
#define maxarray 1005
#define maxvalue 100005

using namespace std; 
bool eratos[maxvalue];
int32_t failure[maxarray];
vector <int32_t> scan;

bool is_prime(int32_t num){
    int32_t i = 2;
    while (i <= round(sqrt(num))){
        if (num%i==0) return false;
        else i++;
    }
    return true;
}

void make_is_prime_array(){
    fill(eratos, eratos+maxvalue, true);
    eratos[0] = eratos[1] = false;
    for (int i = 2; i <= round(sqrt(maxvalue)); i++){
        if (is_prime(i)){
            for (int j = 2*i; j <= maxvalue; j += i)
                eratos[j] = false;
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    make_is_prime_array();
    int32_t x;
    scan.push_back(maxvalue);
    for (int i = 0; i < n; i++){
        cin >> x;
        if (eratos[x]) scan.push_back(x);
    }
    int32_t answer = 0;
    for (int i = 1; i <= scan.size(); i++){
        failure[i] = 1;
        for (int j = 1; j < i; j++){
            if (scan[j]<=scan[i] && failure[j]+1>failure[i]){
                failure[i] = failure[j]+1;
            }
        }
        answer = max(answer, failure[i]);
    }
    cout << answer;
    return 0;
}