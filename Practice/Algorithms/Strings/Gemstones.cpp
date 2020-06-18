#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
    int gems = 0;
    bool g = true, t = true;
    for(char x = 'a'; x <= 'z'; x++)
    {
        for(int z = 0; z < arr.size(); z++)
        {
            for(int y = 0; y < arr[z].length(); y++)
            {
                if(arr[z].at(y) == x)
                {
                    t = false;
                    break;
                }
            }
            if(t)
            {
                g = false;
                t = true;
                break;
            }
            t = true;
        }
        if(g)
        {
            gems++;
        }
        g = true;
    }
    return gems;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
