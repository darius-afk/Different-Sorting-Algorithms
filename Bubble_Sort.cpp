#include <iostream>
using namespace std;

int main() {
    int N; // the number of numbers stored
    cin >> N;

    int* array = new int[N]; // dynamically allocate an array of size N

    // Input the array elements
    for (int cnt = 0; cnt < N; cnt++) {
        cin >> array[cnt];
    }

    // Bubble sort algorithm
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    for (int cnt = 0; cnt < N; cnt++) {
        cout << array[cnt] << " ";
    }
    cout << endl;

    delete[] array; // free the allocated memory
    return 0;
}
