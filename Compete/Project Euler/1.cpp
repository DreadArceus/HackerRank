#include <iostream>

using namespace std;

long sumOfM35(long N)
{
  long sum = 0;
  // for(int i = 1; i * 3 < N; i++) Slow loops
  // {
  //   sum += i * 3;
  //   if(i * 5 < N)
  //   {
  //     sum += i * 5;
  //   }
  //   if(i * 15 < N)
  //   {
  //     sum -= i * 15;
  //   }
  // }
  sum += 3*(((N-1)/3)*((N-1)/3 + 1))/2; //Fast Math
  sum += 5*(((N-1)/5)*((N-1)/5 + 1))/2;
  sum -= 15*(((N-1)/15)*((N-1)/15 + 1))/2;
  return sum;
}

int main()
{
  long N;
  cin >> N;
  long x = sumOfM35(N);
  cout << x;
}
