#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* array = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    for (int i = 1; i < N; i++) {
        int key = array[i];
        int j = i - 1;
// move elements [0.. i-1] with bigger value than key one position further
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    for (int i = 0; i < N; i++)
        cout << array[i] << " ";
    cout << endl;

    delete[] array;

    return 0;
}
