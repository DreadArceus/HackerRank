#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, q;
    cin >> N >> q;
    unordered_map<int, vector<int>> m;
    for(int x = 0; x < N; x++)
    { 
        int len;
        cin >> len;
        vector<int> arr(len);
        for(int y = 0; y < len; y++)
        {
            cin >> arr[y];
        }
        m[x] = arr;
    }
    for(int x = 0; x < q; x++)
    {
        int i, j;
        cin >> i >> j;
        cout << m[i][j] << "\n";
    }
    return 0;
}
