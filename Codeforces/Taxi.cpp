#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, group;
    int one, two, three;
    int taxi = 0;
    one = two = three = 0;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>group;
        if(group == 1){
            one++;
        }else if (group == 2) {
            two++;
        }else if (group ==3) {
            three++;
        }else {
            taxi++;
        }

    }
    taxi += three;
    if(three > one){
        one =0;
    }
    else {
        one -= three;
    }
    taxi += two/2;
    two %=2;
    taxi+=two;
    if(one > two*2)
        taxi+=ceil((double)(one-two*2)/4);
    cout<<taxi;
}