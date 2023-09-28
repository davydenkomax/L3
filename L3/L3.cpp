#include <iostream>
#include <cmath>

using namespace std;

int main(){

    setlocale(LC_ALL, "ru");

    // Задание 1

    int num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    // Проверка num1 и num2 на нечетность
    if ((num1 % 2 != 0) && (num2 % 2 != 0)) { 
        cout << "Истина";
    }
    else {
        cout << "Ложь";
    }

    // Задание 2

    float number1, number2;
    cout << "Введите первое число: ";
    cin >> number1;
    cout << "Введите второе число: ";
    cin >> number2;

    // Проверка number1 на неотрицательность
    if (number1 >= 0) { 
        cout << "Ответ: " << number2 * 1000;
    }
    else {
        cout << "Ответ: " << number2 / 10;
    }

    // Задание 3

    float a = 3.9;
    int b = 3;
    float x;

    cout << "Введите значение x: ";
    cin >> x;

    // Проверка значений x
    if (x <= -1) {
        cout << sin(log(abs(x))) << endl;
    }
    else if ((x > -1) && (x < 15)) {
        // Если x ∈ (-1; 15) 
        cout << pow((4 * x + b), 2) << endl;
    }
    else {
        // Если x >= 15
        cout << 1 / (pow(a, 2) + pow(x, 2)) << endl;
    }

    // Задание 4

    int mark;

    cout << "Введите оценку (от 0 до 5): ";
    cin >> mark;

    // Провнрка значния переменной mark
    switch (mark) {
    case 5: cout << "Отлично"; break;
    case 4: cout << "Хорошо"; break;
    case 3: cout << "Средне"; break;
    case 2: cout << "Хуже среднего"; break;
    case 1: cout << "Хуже среднего"; break;
    case 0: cout << "Хуже среднего"; break;
    default: cout << "Неверная запись оценки"; break;
    }
}
