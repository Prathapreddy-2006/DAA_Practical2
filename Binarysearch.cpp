#include <iostream>
#include <vector>

using namespace std;

// Function that performs binary search.
// Returns the index of target if found, otherwise returns -1.
int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        // Prevents integer overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid; 
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Element was not present in the array
    return -1;
}

int main() {
    // Array must be sorted for binary search to work
    vector<int> sortedArray = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;

    int result = binarySearch(sortedArray, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
