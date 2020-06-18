#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int count = 0;
    for(int x = 0; x < s.length() - 2; x+=3)
    {
        if(s.at(x) != 'S')
        {
            count++;
        }
        if(s.at(x+1) != 'O')
        {
            count++;
        }
        if(s.at(x+2) != 'S')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
