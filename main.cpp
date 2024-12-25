#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Ввод чисел
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    // Вычисление разности
    int difference = a - b;

    // Вывод разности
    cout << "Разность введённых чисел: " << difference << endl;

    return 0;
}
