#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int count = 0;
    bool a = false,b = false,c =false,d =false;
    for(int x = 0; x < password.length(); x++)
    {
        if(((password.at(x) >= '!' && password.at(x) <= '-') || 
        password.at(x) == '^' || password.at(x) == '@') && !a)
        {
            count++;
            a = true;
        }
        if(password.at(x) >= '0' && password.at(x) <= '9' && !b)
        {
            count++;
            b = true;
        }
        if (password.at(x) >= 'A' && password.at(x) <= 'Z' && !c)
        {
            count ++;
            c = true;
        }
        if (password.at(x) >= 'a' && password.at(x) <= 'z' && !d)
        {
            count ++;
            d = true;
        }
    }
    int e = 6 - n - (4 - count);
    if(n < 6 && e > 0)
    {
        return 6 - n;
    }
    return 4 - count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
