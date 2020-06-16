#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {
    for(int x = 1; x < grid.size() - 1; x++)
    {
        for(int y = 1; y < grid[0].length() - 1; y++)
        {
            char current = grid[x].at(y);
            if(current > grid[x-1].at(y) && current > grid[x+1].at(y)
                && current > grid[x].at(y+1) && current > grid[x].at(y-1))
            {
                grid[x].at(y) = 'X';
            }
        }
    }    
    return grid;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
