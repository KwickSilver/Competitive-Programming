/*O(logn solution to modular exponentiation*/
#include<iostream>
#define MOD 1000000007
using namespace std;
//recursive implementation

/* long long fastPower(long long base,long long power,long long M)
{
    if(power==0)
       return 1;
    if(power==1)
    return base;
    long long halfn=fastPower(base,power/2,M);
    if(power%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}

*/
//iterative implementaion
long long power(long long a,long long b)
{long long res=1;
while(b!=0)
{if(b%2==1)
{res=(res*a)%MOD;
}
a=(a*a)%MOD ;
b/=2;

}
return res%MOD;
}
int main()
{long long a,b,res;
cin>>a>>b;
 res=power(a,b);
 cout<<res<<endl;
}
