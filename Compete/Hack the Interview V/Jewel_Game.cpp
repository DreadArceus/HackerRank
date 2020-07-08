#include <iostream>
#include <string>

using namespace std;

int maxScore(string s);

int main()
{
  string s;
  cin >> s;
  int score = maxScore(s);
  cout << score;
}

int maxScore(string s)
{
  int cnt = 0, i = 0;
  while(i < s.length() - 1) //too slow
  {
    if(s[i] == s[i+1])
    {
      for(i; i < s.length() - 2; i++)
      {
        s[i] = s[i+2];
      }
      s.pop_back();
      s.pop_back();
      i = 0;
      cnt++;
    }
    else
    {
      i++;
    }
  }
  return cnt;
}
