#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;

    int **arrays = new int *[n];
    int results[q];

    for (int i = 0; i < n; i++)
    {
        int arrayLength = 0;
        cin >> arrayLength;
        arrays[i] = new int[arrayLength];
        for (int j = 0; j < arrayLength; j++)
        {
            cin >> arrays[i][j];
        }
    }

    for (int k = 0; k < q; k++)
    {
        int i, j;
        cin >> i >> j;
        results[k] = arrays[i][j];
    }

    for (int i = 0; i < q; i++)
    {
        cout << results[i] << endl;
    }

    return 0;
}