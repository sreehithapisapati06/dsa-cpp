#include <iostream>
#include <vector>
using namespace std;

int main() {
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int low = 0;
    int high = n - 1;
    int index = -1;

    while (low <= high) {
        int middle = low + (high - low) / 2;

        if (nums[middle] == target) {
            index = middle;
            break;
        }
        else if (target < nums[middle]) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    }
    else {
        cout << "Element not found (-1)" << endl;
    }

    return 0;
}
