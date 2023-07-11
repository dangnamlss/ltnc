#include <iostream>

using namespace std;

int calculateBalance(long int arr[], int arrLength) {
    int balance;
    long int product = 1;
    
    for (int i = 0; i < arrLength; i++) {
        product *= arr[i];
    }
    
    balance = product % 1307;
    
    return balance;
}

int main() {
    int n;
    cin >> n;
    
    long int arr[1000];
    if(n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << calculateBalance(arr, n) << endl;
        
    }
    
    system("pause");
    return 0;
}
