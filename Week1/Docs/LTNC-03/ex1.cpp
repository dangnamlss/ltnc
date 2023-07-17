#include <iostream>
#include <string>
using namespace std;

string newString(string a, char replaceElement)
{
    string newStr = replaceElement + a.substr(1);
    return newStr;
}

int main()
{
    string a, b;
    cin >> a >> b;

    cout << a.length() << ' ' << b.length() << endl;
    cout << a + b << endl;
    cout << newString(a, b[0]) << ' ' << newString(b, a[0]) << endl;

    return 0;
}