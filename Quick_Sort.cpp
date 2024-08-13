#include<iostream>
using namespace std;

void swap (int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main() {
    int N;
    cin >> N;

    int* array = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    quickSort(array, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    delete[] array;
    return 0;
}
