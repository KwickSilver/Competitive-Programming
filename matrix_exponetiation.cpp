
//Matrix exponentiation to find Nth fibonacci number modulo a prime no. in O(logN) time

#include<bits/stdc++.h>

/*Linear time approch:
long long findFibonacci(long long n,long long M)
{
  if(n==1)
    return 0;
  if(n==2)
    return 1;
  long long i,prevterm1=0,prevterm2=1,thisterm;
  for(i=3;i<=n;i++)
  {
    thisterm=(prevterm1+prevterm2)%M;
    prevterm1=prevterm2;
    prevterm2=thisterm;

  }
  return thisterm;
}

*/
void multiply(int F[2][2], int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

void power(int F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}


int fib(int n)
{
  int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}

/* Optimized version of power() in method 4 */


using namespace std;

int main()
{
cout<<fib(3)<<endl;

}
