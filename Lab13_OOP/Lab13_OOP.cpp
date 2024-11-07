#include <iostream>
using namespace std;

template <typename T>
pair<int, double> analyzeArray(T* arr, int size) {
    // Підрахунок кількості елементів
    int count = size;

    // Обчислення середнього значення
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;

    return make_pair(count, average);
}

int main() {
    setlocale(LC_ALL, "UKR");
    int n;
    cout << "Введiть кiлькiсть елементiв в масивi: ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Введiть значення елементу №" << i + 1 << ": ";
        cin >> arr[i];
    }

    auto result = analyzeArray(arr, n);
    cout << "Кiлькiсть елементiв: " << result.first << endl;
    cout << "Середнє значення елементiв: " << result.second << endl;

    delete[] arr;
    return 0;
}
