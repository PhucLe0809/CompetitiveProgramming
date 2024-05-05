#include <bits/stdc++.h>

using namespace std; 

string book_real(int32_t a, int32_t b){
    double exac = 1e14;
    double m = a*1.0/b;
    string out = to_string(int64_t(m))+'.';
    m -= int64_t(m); m *= exac;
    string x = to_string(int64_t(m));
    for (int i = 0; i < 12; i++){
        out += x[i];
    }
    return out;
}
string multi_big_num(string one, string two){
    char ch;
    if (count(one.begin(), one.end(), '.')!=0)
        while (one.back()=='0' || one.back()=='.'){
            ch = one.back();
            one.erase(one.size()-1, 1);
            if (ch=='.') break;
        }
    if (count(two.begin(), two.end(), '.')!=0)
        while (two.back()=='0' || two.back()=='.'){
            ch = two.back();
            two.erase(two.size()-1, 1);
            if (ch=='.') break;
        }
    int32_t x, y;
    x = y = 0;
    for (int i = one.size()-1; i >= 0; i--){
        if (one[i]=='.'){
            x = one.size()-i-1; one.erase(i, 1);
            break;
        }
    }
    for (int i = two.size()-1; i >= 0; i--){
        if (two[i]=='.'){
            y = two.size()-i-1; two.erase(i, 1);
            break;
        }
    }
    int32_t a = one.size();
    int32_t b = two.size();
    int32_t m = max(a, b);
    while (*one.begin() == '0') one.erase(one.begin());
    while (*two.begin() == '0') two.erase(two.begin());
    // while (one.size()<m) one += '0';
    // while (two.size()<m) two += '0';
    vector <string> multi(2005);
    int32_t res, temp;
    string infront, plus;
    for (int i = b-1; i >= 0; i--){
        res = 0; plus = "";
        for (int j = a-1; j > 0; j--){
            temp = (two[i]-'0')*(one[j]-'0')+res;
            plus += to_string(temp%10);
            res = temp/10;
        }
        temp = (two[i]-'0')*(one[0]-'0')+res;
        infront = to_string(temp);
        reverse(infront.begin(), infront.end());
        plus += infront;
        reverse(plus.begin(), plus.end());
        multi[b-i-1] = plus;
    }
    for (int i = 0; i < b; i++){
        for (int j = 0; j < i; j++){
            multi[i].push_back('0');
        }
    }
    int32_t psize = multi[b-1].size();
    for (int i = 0; i < b; i++){
        while (multi[i].size()<psize) multi[i].insert(0, "0");
    }
    string result = "";
    res = 0;
    for (int j = multi[0].size()-1; j >= 0; j--){
        temp = 0;
        for (int i = 0; i < b; i++){
            temp += (multi[i][j]-'0');
        }
        temp += res;
        if (j!=0){
            result += to_string(temp%10);
            res = temp/10;
        }else{
            infront = to_string(temp);
            reverse(infront.begin(), infront.end());
            result += infront;
        }
    }
    reverse(result.begin(), result.end());
    if (x!=0 || y!=0) result.insert(result.size()-(x+y), ".");
    return result;
}
string str_plus(string str, string ansi){
    vector <string> summation;
    int32_t limit = max(str.size(), ansi.size());
    while (str.size() < limit) str.insert(str.begin(), '0');
    while (ansi.size() < limit) ansi.insert(ansi.begin(), '0');
    int32_t res, plus;
    res = 0; 
    for (int i = limit-1; i > 0; i--)
    {
        plus = int(str[i])+int(ansi[i])-2*48 + res;
        summation.push_back(to_string(plus % 10));
        res = plus/10;
    }
    summation.push_back(to_string(int(str[0])+int(ansi[0])-2*48 + res));
    reverse(summation.begin(), summation.end());
    string result = "";
    for (auto x:summation) result += x;
    return result;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> k >> n;
    vector <int32_t> up, down;
    int32_t sz = max(n-k, k);
    for (int i = n; i >= n-k+1; i--) up.push_back(i);
    for (int i = 1; i <= k; i++) down.push_back(i);
    while (up.size()<sz) up.push_back(1);
    while (down.size()<sz) down.push_back(1);
    string result = to_string(up[0]*1.0/down[0]);
    string a, b;
    for (int i = 1; i < sz; i++){
        if (up[i]%down[i]==0){
            result = multi_big_num(result, to_string(up[i]/down[i]));
        }else{
            result = multi_big_num(result, book_real(up[i], down[i]));
            // cout << book_real(up[i], down[i]) << '\n';
        }
    }
    string answer=""; k = -1;
    for (int i = 0; i < result.size(); i++){
        if (result[i]!='.') answer += result[i]; 
        else{ k = i; break; }
    }
    if (k!=-1 && result[k+1]>='5') answer = str_plus(answer, "1");
    cout << answer;
    return 0;
}