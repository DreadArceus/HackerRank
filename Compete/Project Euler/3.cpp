#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long lPrime(long N);

int main()
{
  long N;
  cin >> N;
  int x = lPrime(N);
  cout << x;
}

long lPrime(long N)
{
  /* Slower Method, based on Prime_Check v1 (Calculator)
  bool isPrime = true;
  vector<long> p(2);
  p[0] = 2;
  p[1] = 3;
  for(int i = 4; i < N; i++)
  {
    for(int j : p)
    {
      if(i % j == 0)
      {
        isPrime = false;
      }
    }
    if(isPrime)
    {
      p.push_back(i);
    }
    isPrime = true;
  }
  int maxFactor = 1;
  for(int i : p)
  {
    if(N % i == 0)
    {
      maxFactor = i;
    }
  }
  cout << maxFactor;*/
  while(N % 2 == 0)
  {
    N /= 2;
    if(N == 1)
    {
      return 2;
    }
  }
  for(long i = 3; i <= sqrt(N); i += 2) //The limiting condition is MATH101
  {
    while(N % i == 0)
    {
      N /= i;
      if(N == 1)
      {
        return i;
      }
    }
  }
  return N;
}
