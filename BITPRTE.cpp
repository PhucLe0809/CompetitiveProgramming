#include <bits/stdc++.h>

using namespace std; 

int32_t bin_to_dec(string str){
    bool check = false;
    if (str[0]=='1'){
        check = true;
        int32_t res;
        if (str[31]-'1'== -1){
            str[31]='1'; res=1;
        }
        else{
            str[31]='0'; res=0;
        }
        for (int i = 30; i >= 0; i--){
            if ((str[i]-'0')-res == -1){
                str[i]='1'; res=1;
            }
            else if ((str[i]-'0')-res == 0){
                    str[i]='0'; res=0;
                } else res=0;
        }
        for (int i = 0; i < 32; i++){
            if (str[i]=='0') str[i]='1';
            else str[i]='0';
        }
    }
    int32_t sum = 0;
    for (int i = 31; i >= 0; i--){
        sum += (str[i]-'0')*pow(2, 31-i);
    }
    if (check) return -sum;
    else return sum;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    bitset <64> convert(n);
    convert = (convert<<k);
    string scan = convert.to_string();
    string num = scan.substr(32, 32);
    for (int i = 0; i < k; i++){
        num[32-i-1] = scan[32-i-1];
    }
    bitset <32> out(num);
    if (num[0]=='0') cout << out.to_ulong();
    else cout << bin_to_dec(num);
    return 0;
}