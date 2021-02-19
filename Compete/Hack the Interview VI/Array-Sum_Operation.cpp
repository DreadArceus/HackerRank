//TLE
#include <iostream>
#include <vector>
using namespace std;

long sum(vector<long> v)
{
  int sum  = 0;
  for(int a : v)
  {
    sum += a;
  }
  return sum;
}
void operate(vector<long> &p, int op)
{
  for(int a : p)
  {
    if(a == op)
    {
      swap(p[0], p[p.size() - 1]);
      return;
    }
  }
  p[p.size() - 1] = op;
}
int main()
{
  int N = 0, M = 0;
  cin >> N >> M;
  vector<long> p;
  for(int i  = 0; i < N; i++)
  {
    p.push_back(i+1);
  }
  for(int i = 0; i < M; i++)
  {
    int op = 0;
    cin >> op;
    operate(p, op);
    cout << sum(p) << "\n";
  }
}
