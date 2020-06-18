#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b) {
    int count = 0;
    for(int x = 0; x < b.length() - 2; x++)
    {
        if(b.at(x) == '0')
        {
            if(b.at(x + 1) == '1' && b.at(x+2) == '0')
            {
                b.at(x+2) = '1';
                count++;
            }
        }
    }
    return count; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}
