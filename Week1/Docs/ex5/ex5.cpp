#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int temp[] = {a, b, c, d};
    int max = temp[0];

    for (int i = 1; i < 4; i++)
    {
        if (temp[i] > max)
        {
            max = temp[i];
        }
    }

    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
