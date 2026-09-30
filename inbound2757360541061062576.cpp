#include <iostream>

using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // Ask user for input
    cout << "Enter " << SIZE << " numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Display original numbers
    cout << "\nOriginal:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    // Sort the numbers using Bubble Sort
    bubbleSort(numbers, SIZE);

    // Display sorted numbers
    cout << "\nSorted:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    return 0;
}