#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> arr;
    int q;
    cin >> q;
    vector<string> result;

    for (int i = 0; i < q; i++) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            arr.insert(x);
        } else if (type == 2) {
            arr.erase(x);
        } else if (type == 3) {
            if (arr.find(x) != arr.end()) {
                result.push_back("Yes");
            } else {
                result.push_back("No");
            }
        }
    }

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}
