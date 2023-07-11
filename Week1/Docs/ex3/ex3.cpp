#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int intValue;
    long longValue;
    char charValue;
    float floatValue;
    double doubleValue;

    cin >> intValue >> longValue >> charValue >> floatValue >> doubleValue;

    printf("%d", intValue);
    cout << endl;
    printf("%ld", longValue);
    cout << endl;
    printf("%c", charValue);
    cout << endl;
    printf("%f", floatValue);
    cout << endl;
    printf("%lf", doubleValue);
    return 0;
}