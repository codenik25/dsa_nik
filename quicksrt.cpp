#include <iostream>
using namespace std;
void input(int arr[],int n){
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void print(int arr[],int n){
     cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the rightmost element as the pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  // If current element is smaller than the pivot
            i++;
            swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }
    swap(arr[i + 1], arr[high]); // Place the pivot in the correct position
    return (i + 1);              // Return the partition index
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Find the partition index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;

    // Input array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare an array of size n

    // Input array elements
    input(arr,n);
    // Perform Quick Sort
    quickSort(arr, 0, n - 1);

    // Print the sorted array
   print(arr,n);

    return 0;
}
