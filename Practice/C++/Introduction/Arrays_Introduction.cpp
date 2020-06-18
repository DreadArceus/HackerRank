#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    int arr[N];
    for(int x = 0; x < N; x++)
    {
        cin >> arr[x];
    }
    for(int x = N - 1; x >= 0; x--)
    {
        cout << arr[x] << " ";
    }
    cout << endl;
    return 0;
}
