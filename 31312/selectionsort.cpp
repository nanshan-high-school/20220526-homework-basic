#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int numbers[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int min;
    for (int i = 0; i < n; i++) {
        min = numbers[i];
        for (int j = i; j < n; j++) {
            if (numbers[j] < min) {
                min = numbers[j];
            }
        }
        numbers[i] = min;
    }

    for (int i = 0; i < n; i++) {
        cout << numbers[i];
    }
}
