#include<iostream>

using namespace std;
#define EPS .0000001
inline double mod(double p){if(p>0)return p;
                                else return(-p);}

int main()
{long double a,mid;

cin>>a;
int count=0;
mid=a;
while(mod((mid*mid)-a)>EPS)
{count++;
 mid=mid-((mid*mid)-a)/(2*mid);    //Newton raphson formula... x(n+1)= x(n)-f(xn)/f'(xn)
}
cout<<mid<<'\t'<<count;
}

