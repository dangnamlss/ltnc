#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string timeType = s.substr(8);
    string hour = s.substr(0, 2);
    string restOfTime = s.substr(2, 6);
    int convertedHour = stoi(hour);
    
    if (timeType == "AM") {
        if (convertedHour == 12) {
            convertedHour = 0;
        }
    } else if (timeType == "PM") {
        if (convertedHour != 12) {
            convertedHour += 12;
        }
    } else {
        return "";
    }
    
    string convertedHourStr = (convertedHour < 10) ? "0" + to_string(convertedHour) : to_string(convertedHour);
    
    return convertedHourStr + restOfTime;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
