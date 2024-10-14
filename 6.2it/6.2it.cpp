#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i];
        if (i < size - 1)
            cout << ", "; 
    }
    cout << endl;
}

int SumOddIndices(int* a, const int size) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) { 
        sum += a[i];
    }
    return sum;
}

void ModifyOddIndices(int* a, const int size) {
    for (int i = 1; i < size; i += 2) {
        a[i] += 1;
    }
}

int main() {
    srand((unsigned)time(NULL)); 
    const int n = 5; 
    int a[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High);
    cout << "Initial array: ";
    Print(a, n);

    int sum = SumOddIndices(a, n);
    cout << "Sum of elements with odd indices: " << sum << endl;
 
    ModifyOddIndices(a, n);

    cout << "Modified array: ";
    Print(a, n);

    return 0;
}
