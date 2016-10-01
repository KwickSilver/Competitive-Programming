//Number of distinct prime factor of number in O(sqrt. N)
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,count=0;;
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;
         count++;
        }

    }
    if(n>1)
       count++;
    cout<<count;
}

