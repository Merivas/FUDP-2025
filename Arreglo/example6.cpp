#include <iostream>
using namespace std;

void ponerCeroDuplicados(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0);  // Ignorar si ya es 0
        
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                arr[j] = 0;  // Poner a cero la posición duplicada
            }
        }
    }
}

int main() {
    int arr[100] = {1, 2, 2, 3, 4, 3, 5};
    int n = 7;

    ponerCeroDuplicados(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
