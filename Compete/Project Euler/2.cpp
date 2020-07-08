#include <iostream>
#include <vector>

using namespace std;

long long fibSum(long long N); //If fibonacci series is not given
long long fibSum(long long N, vector<long long> series); //If the series is given

int main()
{
  long long N;
  cin >> N;
  long long sum = fibSum(N);
  cout << sum;
}

long long fibSum (long long N)
{
  long long i = 1, j = 2;
  long long sum = 0;
  while(j < N)
  {
    if(j % 2 == 0)
    {
      sum += j;
    }
    swap(i,j);
    j += i;
  }
  return sum;
}

long long fibSum(long long N, vector<long long> series)
{
  long long sum = 0;
  for(int i = 0; series[1 + i * 3] < N; i++)
  {
    sum += series[1 + i * 3];
  }
  return sum;
}
