#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    int l = 1;
    for(int x = 0; x < str.length()-1; x++)
    {
        if(str.at(x) == ',')
        {
            l++;
        }
    }
    stringstream ss;
    ss << str;
    char d;
    vector<int> ans(l);
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
        cout << integers[i] << "\n";
    }
    
    return 0;
}
