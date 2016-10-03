/**
 * Author: Shantkum
 * Handle: KwickSilver
 * Problem: http://codeforces.com/problemset/problem/71/A
 * Date: 2 October,2016
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num_words;

    string word;

    cin>>num_words;

    while(num_words--) {
        cin>>word;

        if(word.length()>10) {
            cout<<word[0]<<word.length() - 2<<word[word.length()-1]<<endl;
        }
        else {
            cout<<word<<endl;
        }
    }
}