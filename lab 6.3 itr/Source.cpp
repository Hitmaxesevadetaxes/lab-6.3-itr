#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

// Function to create an array with random numbers
vector<int> createArray(int size, int minValue, int maxValue) {
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = minValue + rand() % (maxValue - minValue + 1);
    }
    return arr;
}

// Function to print the array with formatted output
void printArray(const vector<int>& arr) {
    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to find the largest even number using an iterative approach
int findLargestEven(const vector<int>& arr) {
    int largestEven = -1; // Initialize with -1 to indicate no even number found
    for (int num : arr) {
        if (num % 2 == 0 && num > largestEven) {
            largestEven = num;
        }
    }
    return largestEven;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    // Parameters for the random array   
    int size = 10;         
    int minValue = 1;       // Minimum value for random numbers
    int maxValue = 50;      // Maximum value for random numbers

    // Create the array with random numbers
    vector<int> arr = createArray(size, minValue, maxValue);

    // Print the array
    printArray(arr);

    // Find the largest even number using the iterative method
    int largestEven = findLargestEven(arr);

    // Print the result
    if (largestEven != -1) {
        cout << "Найбльше парне число: " << largestEven << endl;
    }
    else {
        cout << "Парні числа відсутні." << endl;
    }

    return 0;
}
