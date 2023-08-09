#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int actualDay, actualMonth, actualYear;
    int expectedDay, expectedMonth, expectedYear;

    cin >> actualDay >> actualMonth >> actualYear;
    cin >> expectedDay >> expectedMonth >> expectedYear;

    int fine = 0;

    if (actualYear > expectedYear)
    {
        fine = 10000;
    }
    else if (actualYear == expectedYear)
    {
        if (actualMonth > expectedMonth)
        {
            fine = 500 * (actualMonth - expectedMonth);
        }
        else if (actualMonth == expectedMonth && actualDay > expectedDay)
        {
            fine = 15 * (actualDay - expectedDay);
        }
    }

    cout << fine << endl;
    return 0;
}
