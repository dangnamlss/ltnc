#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int q;
    map<string, int> student;

    cin >> q;

    for (int i = 0; i < q; i++) {
        int type, grade;
        string name;
        
        cin >> type >> name;

       

        if (type == 1) {
            cin >> grade;
            student[name] += grade;
        } else if (type == 2) {
            student.erase(name);
        } else if (type == 3) {
            cout << student[name] << endl;
        }
    }

    return 0;
}
