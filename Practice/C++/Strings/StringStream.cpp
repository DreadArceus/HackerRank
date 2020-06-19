#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss;
    ss << str;
    char d;
    vector<int> ans(str.length()/2);
    for(int x = 0; x < ans.size(); x++)
    {
        ss >> ans[x] >> d;
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        if(integers[i] != 0 || integers[i+1] != 0)
        {
            cout << integers[i] << "\n";
        }
        else
        {
            break;
        }
    }
    
    return 0;
}
