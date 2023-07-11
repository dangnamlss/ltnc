#include <iostream>
#include <unordered_set>

using namespace std;

int findUniqueElement(int a[], int b[], int n) {
    unordered_set<int> uniqueElements;

    for (int i = 0; i < n; i++) {
        uniqueElements.insert(a[i]);
    }

    for (int i = 0; i < n + 1; i++) {
        if (uniqueElements.find(b[i]) == uniqueElements.end()) {
            return b[i];
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n + 1];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n + 1; i++) {
        cin >> b[i];
    }

    int uniqueElement = findUniqueElement(a, b, n);

    cout << uniqueElement << endl;

    return 0;
}
