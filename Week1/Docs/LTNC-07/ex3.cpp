#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

int countWays(int X, int N, int num)
{
    int value = X - pow(num, N);
    if (value < 0)
    {
        return 0;
    }
    else if (value == 0)
    {
        return 1;
    }
    else
    {
        return countWays(value, N, num + 1) + countWays(X, N, num + 1);
    }
}

int powerSum(int X, int N)
{
    return countWays(X, N, 1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

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
