#include <iostream>
#include <string>

using namespace std;

string maxXOR(string x, int k);

int main()
{
  string x; //Bits
  int k; //Max Bits allowed to be set in y
  cin >> x >> k;
  string y = maxXOR(x,k);
  cout << y;
}

string maxXOR(string x, int k)
{
  for(int i = 0; i < x.length(); i++)
  {
    if(x[i] == '0' && k != 0) //Changes 0 to 1 if k allows it
    {
      x[i] = '1';
      k--;
    }
    else //Changes everything else to 0
    {
      x[i] = '0';
    }
  }
  return x;
}
