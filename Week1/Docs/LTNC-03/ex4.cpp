#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    if(s.size() == 0) {
        return 0;
    }
    
    int wordCount = 1;
    
    for(size_t i = 0; i < s.size(); i++) {
        if(isupper(s[i])) {
            wordCount++;
        }
    }
    
    return wordCount;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
