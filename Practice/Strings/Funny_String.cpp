#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
    string reverse;
    reverse.resize(s.length());
    for(int x = 0; x < s.length(); x++)
    {
        reverse.at(x) = s.at(s.length() - 1 - x);
    }
    for(int x = 0; x < s.length() - 1; x++)
    {
        if(abs(s.at(x) - s.at(x+1)) != abs(reverse.at(x) - reverse.at(x+1)))
        {
            return "Not Funny";
        }
    }
    return "Funny";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
