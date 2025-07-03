#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int getMaxIndex(int arr[], int size) {
    int maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIdx])
            maxIdx = i;
    }
    return maxIdx;
}

int getMinIndex(int arr[], int size) {
    int minIdx = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIdx])
            minIdx = i;
    }
    return minIdx;
}

float getAverage(int sum, int size) {
    return static_cast<float>(sum) / size;
}

void reorderEvenOdd(int input[], int output[], int size) {
    int idx = 0;

    // Copy even numbers first
    for (int i = 0; i < size; i++) {
        if (input[i] % 2 == 0) {
            output[idx++] = input[i];
        }
    }

    // Then copy odd numbers
    for (int i = 0; i < size; i++) {
        if (input[i] % 2 != 0) {
            output[idx++] = input[i];
        }
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE], reordered[SIZE];

    cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "\n=== Analyzing Array ===" << endl;

    int sum = getSum(arr, SIZE);
    int maxIdx = getMaxIndex(arr, SIZE);
    int minIdx = getMinIndex(arr, SIZE);
    float average = getAverage(sum, SIZE);

    cout << "Sum = " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average = " << average << endl;
    cout << "Maximum = " << arr[maxIdx] << " at position " << (maxIdx + 1) << endl;
    cout << "Minimum = " << arr[minIdx] << " at position " << (minIdx + 1) << endl;

    reorderEvenOdd(arr, reordered, SIZE);

    cout << "\nReordered Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << reordered[i] << " ";
    }

    cout << endl;
    return 0;
}
