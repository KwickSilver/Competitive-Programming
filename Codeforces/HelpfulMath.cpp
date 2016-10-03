#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    vector<char> digits;
    int sz;
    cin>>str;
    int n = str.length();

    for(int i=0; i < n ; i+=2) {
        digits.push_back(str[i]);
    }

    sort(digits.begin(), digits.end());
    sz = digits.size();

    for(int i = 0; i < sz-1; i++) {
        cout<<digits[i]<<"+";
    }
    cout<<digits[sz-1];
}