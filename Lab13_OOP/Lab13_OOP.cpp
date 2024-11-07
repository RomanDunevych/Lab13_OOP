#include <iostream>
using namespace std;

template <typename T>
pair<int, double> analyzeArray(T* arr, int size) {
    // ϳ�������� ������� ��������
    int count = size;

    // ���������� ���������� ��������
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
    cout << "����i�� �i���i��� �������i� � �����i: ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "����i�� �������� �������� �" << i + 1 << ": ";
        cin >> arr[i];
    }

    auto result = analyzeArray(arr, n);
    cout << "�i���i��� �������i�: " << result.first << endl;
    cout << "������ �������� �������i�: " << result.second << endl;

    delete[] arr;
    return 0;
}
