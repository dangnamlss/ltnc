#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    vector<int> binary;
    while (n > 0)
    {
        binary.push_back(n % 2);
        n /= 2;
    }

    reverse(binary.begin(), binary.end());

    int maxConsecutiveOnes = 0;
    int currentConsecutiveOnes = 0;

    for (int digit : binary)
    {
        if (digit == 1)
        {
            currentConsecutiveOnes++;
            maxConsecutiveOnes = max(maxConsecutiveOnes, currentConsecutiveOnes);
        }
        else
        {
            currentConsecutiveOnes = 0;
        }
    }

    cout << maxConsecutiveOnes << endl;
    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
