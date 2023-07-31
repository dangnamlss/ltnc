#include <iostream>
#include <vector>

using namespace std;

int binarySearchRecursive(vector<int> &arr, int target, int left, int right)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            return binarySearchRecursive(arr, target, left, mid - 1);
        }
        else
        {
            return binarySearchRecursive(arr, target, mid + 1, right);
        }
    }
    return -1;
}

void testBinarySearch()
{
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int target = 23;
    int result = binarySearchRecursive(arr, target, 0, arr.size() - 1);
    if (result != -1)
    {
        cout << "Phan tu " << target << " duoc tim thay tai chi so " << result << endl;
    }
    else
    {
        cout << "Khong tim thay phan tu " << target << " trong mang." << endl;
    }
}

int main()
{
    testBinarySearch();
    return 0;
}
