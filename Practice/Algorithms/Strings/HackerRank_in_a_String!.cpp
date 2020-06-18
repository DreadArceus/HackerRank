#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    bool h = true, a1 = false, c = false, k1 = false, e = false, r1 = false,
    r2 = false, a2 = false,n = false,k2 = false;
    for(int x = 0; x < s.length(); x++)
    {
        if(h && s.at(x) == 'h')
        {
            h = false;
            a1 = true;
        }
        else if(a1 && s.at(x) == 'a')
        {
            a1 = false;
            c = true;
        }
        else if(c && s.at(x) == 'c')
        {
            c = false;
            k1 = true;
        }
        else if(k1 && s.at(x) == 'k')
        {
            k1 = false;
            e = true;
        }
        else if(e && s.at(x) == 'e')
        {
            e = false;
            r1 = true;
        }
        else if(r1 && s.at(x) == 'r')
        {
            r1 = false;
            r2 = true;
        }
        else if(r2 && s.at(x) == 'r')
        {
            r2 = false;
            a2 = true;
        }
        else if(a2 && s.at(x) == 'a')
        {
            a2 = false;
            n = true;
        }
        else if(n && s.at(x) == 'n')
        {
            n = false;
            k2 = true;
        }
        else if(k2 && s.at(x) == 'k')
        {
            k2 = false;
            return "YES";
        }
    }
    return "NO";
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

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
