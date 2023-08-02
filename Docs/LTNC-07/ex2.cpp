#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateStrings(const vector<char> &characters, int length, string currentString)
{
    if (length == 0)
    {
        cout << currentString << endl;
        return;
    }

    for (char c : characters)
    {
        generateStrings(characters, length - 1, currentString + c);
    }
}

int main()
{
    vector<char> characters = {'a', 'b', 'c', 'd'};
    int length = 3;
    string currentString = "";

    generateStrings(characters, length, currentString);

    return 0;
}
