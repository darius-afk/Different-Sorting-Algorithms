#include<iostream>
using namespace std;

int main() {
    int N;// Number of elements in the sorted vecctor
    cin >> N;

    int* array = new int[N]; // dynamically allocate an array of size N

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < N; i++) {
        int minIndex = i;
        for (int j = i + 1; j < N; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(array[i], array[minIndex]);
        }
    }

    for (int i = 0; i < N; i++)
        cout << array[i] << " ";
    cout << endl;
}
