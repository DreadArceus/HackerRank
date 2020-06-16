#include <bits/stdc++.h>

using namespace std;

// Complete the stones function below.
vector<int> stones(int n, int a, int b) {
    if(a == b)
    {
        vector<int> os(1);
        os[0] = a*(n-1);
        return os;
    }
    else
    {
        vector<int> os(n);
        for(int x = 0; x < n; x++)
        {
            if(a < b)
            {
                os[x] = a*(n - x - 1) + b*x;
            }
            else
            {
                os[x] = a*x + b*(n - x - 1);
            }
        }
        return os;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}
