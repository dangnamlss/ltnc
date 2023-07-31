#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isAnagram(const string &str1, const string &str2)
{
    string temp1, temp2;

    for (char c : str1)
    {
        if (isalpha(c))
        {
            temp1 += tolower(c);
        }
    }

    for (char c : str2)
    {
        if (isalpha(c))
        {
            temp2 += tolower(c);
        }
    }

    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());

    return temp1 == temp2;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> strings(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin, strings[i]);
    }

    bool checkAnagram = true;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!isAnagram(strings[i], strings[j]))
            {
                checkAnagram = false;
            }
        }
        if (!checkAnagram)
        {
            break;
        }
    }

    if (checkAnagram)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}