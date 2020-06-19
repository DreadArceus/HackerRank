#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << "\n";
    cout << a+b << "\n";
    string ax = a, bx = b;
    swap(ax[0], bx[0]);
    cout << ax << " " << bx << "\n";
    return 0;
}
