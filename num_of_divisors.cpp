
#include<bits/stdc++.h>// Program for number of divisor in O( sqrt.(n))

using namespace std;

int main()
{
    long long n,i,j,divisor=1;
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {j=0;
            while(n%i==0)
                {n/=i;
                j++;
                }


            divisor*=(j+1);
        }

    }
    if(n>1)
        divisor*=2;

    cout<<divisor;
}

