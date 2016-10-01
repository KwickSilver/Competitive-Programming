#include<iostream>

using namespace std;
#define EPS 0.00000001
inline double mod(double p){if(p>0)return p;
                                else return(-p);
                                }
int main()
{long double a,mid,left,right;

cin>>a;
left=0;
right=a;

int count=0;
mid=left+(right-left)/2;
while(mod((mid*mid)-a)>EPS)
{count++;


if(mid*mid>a)
{

    right=mid;

    mid=(left+right)/2;
}

else
    {left=mid;
     mid=(left+right)/2;}


}
cout<<"no.of iteration"<<count<<"\n"<<mid<<endl;



}
