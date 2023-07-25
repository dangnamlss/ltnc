#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int index;
    cin >> index;
      
    arr.erase(arr.begin() + index - 1);
    
    int range[2];
    cin >> range[0] >> range[1];
    arr.erase(arr.begin() + range[0] - 1, arr.begin() + range[1] - 1);
    
    cout << arr.size() << endl;
    for(size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    
    return 0;
}
