#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sortArr(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int checkImposter(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return b[i];
        }
    }

    return b[n];
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
    }

    sortArr(a, n);
    sortArr(b, n + 1);

    cout << checkImposter(a, b, n);

    delete[] a;
    delete[] b;

    return 0;
}
