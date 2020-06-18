#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    int l = s.length();
    for(int x = 0; x < l - 1; x++)
    {
        if(s.at(x) == s.at(x+1))
        {
            s.replace(x,2,"");
            x = -1;
            l = s.length();
        }
    }
    if(s == "")
    {
        return "Empty String";
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
