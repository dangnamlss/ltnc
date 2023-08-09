#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);

        string evenChars, oddChars;
        for (int j = 0; j < s.length(); j++)
        {
            if (j % 2 == 0)
            {
                evenChars += s[j];
            }
            else
            {
                oddChars += s[j];
            }
        }

        cout << evenChars << " " << oddChars << endl;
    }

    return 0;
}
