#include <iostream>

using namespace std;

bool isEqualCaseInsensitive(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    for (size_t i = 0; i < s1.length(); i++)
    {
        if (tolower(s1[i]) != tolower(s2[i]))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (isEqualCaseInsensitive(s1, s2))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}