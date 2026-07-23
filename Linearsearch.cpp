#include <iostream>
using namespace std;

// Function to perform linear search
// Returns the index if found, otherwise returns -1
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found after checking the entire array
}

int main() {
    int size, key;

    // Prompt user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " integers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Prompt user for the element to search
    cout << "Enter the value to search for: ";
    cin >> key;

    // Perform the linear search
    int result = linearSearch(arr, size, key);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
