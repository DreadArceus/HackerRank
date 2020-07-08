#include <iostream>
#include <cmath>

using namespace std;

long ssdif(long N)
{
  long sumOfSquares = (N * (N + 1) * (2 * N + 1))/6;
  long squareOfSum = pow((N * (N + 1))/2, 2);

  return squareOfSum - sumOfSquares;
}

int main()
{
  long N;
  cin >> N;
  long dif = ssdif(N);
  cout << dif;
}
