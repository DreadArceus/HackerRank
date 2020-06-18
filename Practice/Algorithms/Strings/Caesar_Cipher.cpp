#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
    if(k > 26)
    {
        k %= 26;
    }
    for(int x = 0; x < s.length(); x++)
    {
        if(s.at(x) >= 'A' && s.at(x) <= 'Z')
        {
            if(s.at(x) + k > 'Z')
            {
                s.at(x) += k - 26;
            }
            else
            {
                s.at(x) += k;
            }
        }
        else if(s.at(x) >= 'a' && s.at(x) <= 'z')
        {
            if(s.at(x) + k > 'z')
            {
                s.at(x) += k - 26;
            }
            else
            {
                s.at(x) += k;
            }
        }
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
