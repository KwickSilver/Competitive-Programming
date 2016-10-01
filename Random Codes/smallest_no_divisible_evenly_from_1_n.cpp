//NlogN algo to compute smallest no. divisible evenly by all no. from 1 to n.
#include<bits/stdc++.h>

using namespace std;
long long lcm(long long a,long long b)
{
return (a/__gcd(a,b))*b;

}

int main()
{long long i,j,k,ans,n;
long long l;
cin>>n;
l=1;
for(i=2;i<=n;i++)
{l=lcm(l,i);

}


cout<<l;




}
