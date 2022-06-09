#include <iostream>
using namespace std;

int main() {
    int n = 10;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--){
            if (numbers[j] > numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j];
                numbers[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << numbers[i];
    }
}
