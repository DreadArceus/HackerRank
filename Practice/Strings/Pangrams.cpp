#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    for(int x = 0; x < s.length(); x++)
    {
        s.at(x) = tolower(s.at(x));
    }
    bool check = true;
    for(char x = 'a'; x <= 'z'; x++)
    {
        for(int y = 0; y < s.length(); y++)
        {
            if(s.at(y) == x)
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            return "not pangram";
        }
        check = true;
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
