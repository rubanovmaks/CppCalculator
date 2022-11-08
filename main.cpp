#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int value1;
    cout << "Введите число:" << endl;
    cin >> value1;
    int value2;
    cout << "Введите второе число:" << endl;
    cin >> value2;
    int operators;
    cout << "Введите оператор:" << endl;
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl;
    cout << "4. Деление" << endl;
    cout << "5. Остаток от деления" << endl;
    cout << "6. Проверка на равенство" << endl;
    cout << "7. Проверка на неравенство" << endl;
    cin >> operators;
    int result;
    bool result1;
    switch (operators) {
        case 1:
            result = value1 + value2;
            cout << "Результат: " << result << endl;
            break;
        case 2:
            result = value1 - value2;
            cout << "Результат: " << result << endl;
            break;
        case 3:
            result = value1 * value2;
            cout << "Результат: " << result << endl;
            break;
        case 4:
            result = value1 / value2;
            cout << "Результат: " << result << endl;
            break;
        case 5:
            result = value1 % value2;
            cout << "Результат: " << result << endl;
            break;
        case 6:
            result1 = value1 == value2;
            cout << "Результат: " << result1 << endl;
            break;
        case 7:
            result1 = value1 != value2;
            cout << "Результат: " << result1 << endl;
            break;
        default:
            cout << "error" << endl;
    }
}
