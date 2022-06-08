#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
using namespace std;

int Begin(int choice);
int Integer(int choice);
int Boolean(int choice);
int If(int choice);
int Case(int choice);
int For(int choice);
int While(int choice);

int main(bool error) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice, buffer = 0;

    cout << "<===> Ввод и вывод данных <===>" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "   [" << i << "]" << " Begin-" << i << endl;
    }
    cout << "\n<===> Целые числа <===>" << endl;
    for (int i = 11; i <= 40; i++) {
        buffer += 1;
        cout << "   [" << i << "]" << " Integer-" << buffer << endl;
    }
    cout << "\n<===> Логические выражения <===>" << endl;
    buffer = 1;
    for (int i = 41; i <= 46; i++) {
        cout << "   [" << i << "] Boolean-" << buffer << endl;
        buffer += 1;
    }
    buffer = 17;
    for (int i = 47; i <= 60; i++) {
        cout << "   [" << i << "] If-" << buffer << endl;
        buffer += 1;
    }
    cout << "\n<===> Оператор выбора <===>" << endl;
    buffer = 1;
    for (int i = 61; i <= 69; i++) {
        cout << "   [" << i << "] Case-" << buffer << endl;
        buffer += 1;
    }
    cout << "\n<===> Цикл с параметром <===>" << endl;
    buffer = 1;
    for (int i = 70; i <= 85; i++) {
        cout << "   [" << i << "] For-" << buffer << endl;
        buffer += 1;
    }
    cout << "\n<===>Цикл с условием<===>" << endl;
    buffer = 1;
    for (int i = 86; i <= 91; i++) {
        cout << "   [" << i << "] While-" << buffer << endl;
        buffer += 1;
    } buffer = 12;
    for (int i = 92; i <= 100; i++) {
        cout << "   [" << i << "] While-" << buffer << endl;
        buffer += 1;
    }
    cout << "\n" << endl;
    if (error == false) {
        cout << "\n[*] Ошибка!Введите корректные данные!" << endl;
    }
    cout << "[*] Выберите: ";
    cin >> choice;

    if ((1 <= choice) && (choice <= 10)) {
        Begin(choice);
    }
    else if ((11 <= choice) && (choice <= 40)) {
        Integer(choice);
    }
    else if ((41 <= choice) && (choice <= 46)) {
        Boolean(choice);
    }
    else if ((47 <= choice) && (choice <= 60)) {
        If(choice);
    }
    else if ((61 <= choice) && (choice <= 69)) {
        Case(choice);
    }
    else if ((70 <= choice) && (choice <= 85)) {
        For(choice);
    }
    else if ((86 <= choice) && (choice <= 100)) {
        While(choice);
    }
    else {
        system("cls");
        main(false);
    }

    system("pause");
    return 0;
}

//Ввод и вывод данных
int Begin(int choice) {
    int a, b, c, d, p, s, V, S;
    float pi = 3.14, LL, SS, RR;
    switch (choice) {
    case 1:
        //begin 1
        cout << "a: ";
        cin >> a;

        p = 4 * a;
        cout << "P = " << p << endl;
        break;
    case 2:
        //begin 2
        cout << "a: ";
        cin >> a;

        s = pow(a, 2);
        cout << "s = " << s << endl;
        break;
    case 3:
        //begin 3
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        s = a * b;
        p = 2 * (a + b);

        cout << "S = " << s << endl;
        cout << "P = " << p << endl;
        break;
    case 4:
        //begin 4
        float l;

        cout << "d = ";
        cin >> d;

        l = pi * d;
        cout << "l = " << l << endl;
        break;
    case 5:
        //begin 5

        cout << "a = ";
        cin >> a;
        // Berilgen S = a ** 3 degenimiz a ni biz cubtaimiz sol ushn 3ti cubtaimiz

        V = pow(a, 3);
        S = 6 * pow(a, 2);

        cout << "V = a^3 = " << V << endl;
        cout << "S = 6 * a^2 = " << S << endl;
        break;
    case 6:
        //begin 6
        cout << "a = ";
        cin >> a;

        cout << "b = ";
        cin >> b;

        cout << "c = ";
        cin >> c;

        V = a * b * c;

        s = 2 * (a * b + b * c + a * c);
        cout << "V = " << V << endl;
        cout << "S = " << s << endl;
        break;
    case 7:
        //begin 7
        cout << "R = ";
        cin >> RR;

        LL = 2 * pi * RR;
        SS = pi * pow(RR, 2);

        cout << "L = " << LL << endl;
        cout << "S = " << SS << endl;

        break;
    case 8:
        //begin 8
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;

        s = (a * b) / 2;
        cout << s << endl;
        break;
    case 9:
        //begin 9
        cout << "a = ";
        cin >> a;

        cout << "b = ";
        cin >> b;
        S = sqrt(a * b);
        cout << S << endl;

        break;
    case 10:
        //begin 10
        int sum;

        cout << "a = ";
        cin >> a;

        cout << "b = ";
        cin >> b;

        sum = a + b;
        cout << "summa: " << sum << endl;

        if (a > b) {
            cout << a << " > " << b << endl;
        }
        else if (a == b) {
            cout << a << " = " << b << endl;

        }
        else {
            cout << a << " < " << b << endl;
        }

        cout << a << "+" << b << " = " << a + b << endl;
        cout << a << "-" << b << " = " << a - b << endl;
        cout << a << "*" << b << " = " << a * b << endl;

        cout << "\na^2 = " << pow(a, 2) << endl;
        cout << "b^2 = " << pow(b, 2) << endl;
        break;


    default:
        system("cls");
        cout << "[*] Ошибка!" << endl;
        break;
    }

    return 0;
}

//Целые числа
int Integer(int choice) {
    int a, b, n, L, M, byte, num, k;
    switch (choice) {
    case 11:
        //integer 1

        cout << "L: ";
        cin >> L;

        cout << L / 100 << endl;
        break;
    case 12:
        //integer 2

        cout << "M: ";
        cin >> M;

        cout << M / 1000 << endl;


        break;
    case 13:
        //integer 3

        cout << "Byte: ";
        cin >> byte;

        cout << byte / 1024 << endl;


        break;
    case 14:
        //integer 4

        cout << "a: ";
        cin >> a;

        cout << "b: ";
        cin >> b;

        cout << a / b << endl;

        break;
    case 15:
        //integer 5

        cout << "a: ";
        cin >> a;

        cout << "b: ";
        cin >> b;

        cout << a % b << endl;
        break;
    case 16:
        //integer 6
        cout << "a: ";
        cin >> a;

        cout << a / 10 << " and " << a % 10 << endl;

        return 0;

        break;
    case 17:
        //integer 7

        cout << "num: ";
        cin >> a;

        cout << "sum = " << (a / 10) + (a % 10) << endl;
        cout << "Proisvedenie = " << (a / 10) * (a % 10) << endl;
        break;
    case 18:
        //integer 8

        cout << "a: ";
        cin >> a;

        cout << a % 10 << a / 10 << endl;
        break;
    case 19:
        //integer 9

        cout << "a: ";
        cin >> a;

        cout << a / 100 << endl;
        break;
    case 20:
        //integer 10

        cout << "num: ";
        cin >> num;

        cout << num % 10 << " and " << (num % 100) / 10 << endl;
        break;
    case 21:
        //integer11
        //int a;
        cout << "a: ";
        cin >> a;
        cout << "Сумма: " << (a / 100) + (a / 10 % 10) + (a % 10) << "\nПроизведение: " << (a / 100) * (a / 10 % 10) * (a % 10) << endl;
        break;
    case 22:
        //integer12
        //int a = 0;
        cout << "Введите число: ";
        cin >> a;
        cout << (a % 10) << (a / 10 % 10) << (a / 100) << endl;
        break;
    case 23:
        //integer13
        cout << "Введите число: ";
        cin >> a;
        cout << (a / 10 % 10) << (a % 10) << a / 100 << endl;
        break;
    case 24:
        //integer14
        cout << "Введите число: ";
        cin >> a;
        cout << a % 10 << a / 100 << a / 10 % 10 << endl;
        break;
    case 25:
        //integer15
        cout << "Введите число: ";
        cin >> a;
        cout << a / 10 % 10 << a / 100 << a % 10 << endl;
        break;
    case 26:
        //integer16
        cout << "Введите число: ";
        cin >> a;
        cout << a / 100 << a % 10 << a / 10 % 10 << endl;
        break;
    case 27:
        //integer17
        cout << "Введите число: ";
        cin >> a;
        cout << a / 100 % 10 << endl;
        break;
    case 28:
        //integer18
        cout << "Введите число: ";
        cin >> a;
        cout << a % 10000 / 1000 << endl;
        break;
    case 29:
        //integer19
        cout << "Введите секунды N: ";
        cin >> n;
        cout << "Прошло " << n / 60 << " минут" << endl;
        break;
    case 30:
        //intger20
        cout << "Введите секунды N: ";
        cin >> n;
        cout << "Прошло " << n / 3600 << " часов" << endl;
        break;
    case 31:
        //intger21
        cout << "Введите секунды N: ";
        cin >> n;
        cout << "Прошло " << n % 60 << " секунд с начала последней минуты" << endl;
        break;
    case 32:
        //intger22
        cout << "Введите секунды N: ";
        cin >> n;
        cout << "Прошло " << n % 3600 << " секунд с начала последнего часа" << endl;
        break;
    case 33:
        //intger23
        cout << "Введите секунды N: ";
        cin >> n;
        cout << "Rоличество полных минут, прошедших с начала последнего часа: " << n % 3600 / 60 << endl;
        break;
    case 34:
        //intger24;
        cout << "Введите значение K: ";
        cin >> k;
        k = k % 7;
        if (k == 0) {
            cout << "воскресенье" << endl;
        }
        else if (k == 1) {
            cout << "понидельник" << endl;
        }
        else if (k == 2) {
            cout << "вторник" << endl;
        }
        else if (k == 3) {
            cout << "среда" << endl;
        }
        else if (k == 4) {
            cout << "четверг" << endl;
        }
        else if (k == 5) {
            cout << "пятница" << endl;
        }
        else if (k == 6) {
            cout << "суббота" << endl;
        }
        else {
            cout << "ошибка!" << endl;
        }
        break;

    case 35:
        //integer25
        cout << "K: ";
        cin >> b;
        cout << endl;

        a = (b + 3) % 7;
        cout << a << endl;

        break;
    case 36:
        //integer26
        cout << "K: ";
        cin >> b;
        a = (b % 7) + 1;
        cout << a << endl;
        break;

    case 37:
        //integer27
        cout << "K:";
        cin >> k;

        a = ((k + 4) % 7) + 1;
        cout << a << endl;

        break;

    case 38:
        //integer28
        cout << "K:";
        cin >> k;
        cout << "N:";
        cin >> b;

        b = b - 2;
        a = ((k + b) % 7) + 1;
        cout << a << endl;
        break;

    case 39:
        //integer29
        int b, c;
        cout << "Введите число A: ";
        cin >> a;
        cout << "Введите число B: ";
        cin >> b;
        cout << "Введите число С: ";
        cin >> c;
        cout << "Количество квадратов, размещенных на прямоугольнике: " << (a * b) / (c * c) << " Площадь незанятой части прямоугольник: " << (a * b) % (c * c) << endl;
        break;
    case 40:
        //integer30
        cout << "Введите год: " << endl;
        cin >> a;
        cout << (a / 100) + 1 << endl;

        break;


    default:
        system("cls");
        cout << "[*] Ошибка!" << endl;
        break;
    }


    return 0;
}

//Логические выражения
int Boolean(int choice) {
    int a, b;

    switch (choice) {
    case 41:
        //boolean 1
        cout << "A: ";
        cin >> a;

        if (a > 0) {
            cout << "Число " << a << " является положительным" << endl;
        }
        else {
            cout << "Число " << a << " не является положительным" << endl;
        }
        break;
    case 42:
        //boolean 2
        cout << "A: ";
        cin >> a;

        if ((a % 2) != 0) {
            cout << "Число " << a << " является нечетным" << endl;
        }
        else {
            cout << "Число " << a << " не является нечетным" << endl;
        }
        break;
    case 43:
        //boolean 3
        cout << "A: ";
        cin >> a;

        if ((a % 2) == 0) {
            cout << "Число " << a << " является четным" << endl;
        }
        else {
            cout << "Число " << a << " не является четным" << endl;
        }
        break;
    case 44:
        //boolean 4
        cout << "A: ";
        cin >> a;
        cout << "B: ";
        cin >> b;

        if (a > 2 && b <= 3) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
        break;
    case 45:
        //boolean 5
        cout << "A: ";
        cin >> a;
        cout << "B: ";
        cin >> b;

        if (a >= 0 || b < -2) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
        break;
    case 46:
        //boolean 6
        int c;

        cout << "A: ";
        cin >> a;
        cout << "B: ";
        cin >> b;
        cout << "C: ";
        cin >> c;

        if (a < b && b < c) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }

    default:
        system("cls");
        cout << "[*] Ошибка!" << endl;
        break;
    }

    return 0;
}
int If(int choice) {
    int a, b, c, d, x, y;
    float A, B, C, X;

    switch (choice){
    case 47:
        //if 17
        cout << "A: ";
        cin >> A;
        cout << "B: ";
        cin >> B;
        cout << "C: ";
        cin >> C;

        if ((A <= B) && (B <= C)) {
            A *= 2;
            B *= 2;
            C *= 2;
        }
        else if ((A >= B) && (B >= C)) {
            A *= 2;
            B *= 2;
            C *= 2;
        }
        else {
            A *= -1;
            B *= -1;
            C *= -1;
        }
        cout << "A=" << A << "\nB=" << B << "\nC=" << C << endl;
        break;
    case 48:
        //if 18
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;

        if ((a == b) && (b == c)) {
            cout << "Все одинаковые числа!" << endl;
        }
        else if (a == b) {
            cout << "\n[3] " << c << endl;
        }
        else if (a == c) {
            cout << "\n[2] " << b << endl;
        }
        else if (b == c) {
            cout << "\n[1] " << a << endl;
        }
        else {
            cout << "Нету одинаковых чисел!" << endl;
        }
        break;
    case 49:
        //if 19
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;
        cout << "d: ";
        cin >> d;

        if ((a == b) && (b == c) && (c == d)) {
            cout << "Все одинаковые числа!" << endl;
        }
        else if ((a == b) &&(b == c)) {

            cout << "\n[4] " << d << endl;
        }
        else if ((a == b) && (b == d)) {

            cout << "\n[3] " << c << endl;
        }
        else if ((a == c) && (c == d)) {

            cout << "\n[2] " << b << endl;
        }
        else if ((b == c) && (c == d)) {
            cout << "\n[1] " << a << endl;
        }
        else {
            cout << "Ошибка! Введите корректные данные!" << endl;
        }
        break;
    case 50:
        //if 20
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;

        if (abs(a - b) < abs(a - c)) {
            cout << "B - Расположен ближе к точке А. Рассотяние ";
            if (a - b > 0) {
                cout << a - b << endl;
            }
            else {
                cout << (a - b) * -1 << endl;
            }
        }
        else{

            cout << "C - Расположен ближе к точке А. Рассотяние ";
            if(a - c > 0){
                cout << a - c << endl;
            }else {
                cout << (a - c) * -1 << endl;
            }

        }
        break;
    case 51:
        //if 21
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;

        if ((x == 0) && (y == 0)) {
            cout << "0" << endl;
        }
        else if ((x == 0) && (y != 0)) {
            cout << "1" << endl;
        }
        else if ((x != 0) && (y == 0)) {
            cout << "2" << endl;
        }
        else {
            cout << "3" << endl;
        }
        break;
    case 52:
        //if 22
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;

        if ((x > 0) && (y > 0)) {
            cout << "I - координатная четверть" << endl;
        }
        else if ((x < 0) && (y > 0)) {
            cout << "II - координатная четверть" << endl;
        }
        else if ((x < 0) && (y < 0)) {
            cout << "III - координатная четверть" << endl; 
        }
        else if ((x > 0) && (y < 0)) {
            cout << "IV - координатная четверть" << endl;
        }
        else {
            cout << "ошибка!" << endl;
        }
        break;
    case 53:
        //if 23
        int x2, y2, x3, y3;
        cout << "x1: ";
        cin >> x;
        cout << "y1: ";
        cin >> y;

        cout << "x2: ";
        cin >> x2;
        cout << "y2: ";
        cin >> y2;

        cout << "x3: ";
        cin >> x3;
        cout << "y3: ";
        cin >> y3;

        if (x2 == x3)
            cout << "x4:" << x << endl;
        else
            if (x3 == x)
                cout << "x4:" << x2 << endl;
            else
                cout << "x4:" << x3 << endl;

        if (y2 == y3)
            cout << "y4:" << y << endl;
        else
            if (y3 == y)
                cout << "y4:" << y2 << endl;
            else
                cout << "y4:" << y2 << endl;
        break;
    case 54:
        //if 24
        cout << "x: ";
        cin >> x;

        if (x > 0) {
            cout << 2 * sin(x) << endl;
        }
        else if (x < 0){
            cout << (6 - x) << endl;
        }
        break;
    case 55:
        //if 25
        cout << "x: ";
        cin >> x;

        if ((x < -2) || (x > 2)) {
            cout << 2 * x << endl;
        }
        else {
            cout << -3 * x << endl;
        }
        break;
    case 56:
        //if 26
        cout << "x: ";
        cin >> x;

        if (x <= 0) {
            cout << x * -1 << endl;
        }
        else if ((0 < x) && (x < 2)) {
            cout << pow(x, 2) << endl;
        }
        else if (x >= 2) {
            cout << "4" << endl;
        }
        break;
    case 57:
        //if 27
        cout << "x: ";
        cin >> X;

        if (X < 0) {
            cout << "0" << endl;
        }
        else if ((int(X) % 2) == 0) {
            cout << "1" << endl;
        }
        else {
            cout << "-1" << endl;
        }
        break;
    case 58:
        //if 28
        cout << "year: ";
        cin >> x;

        if (((x % 4) == 0) && ((x % 100) != 0) || ((x % 400) == 0)) {
            cout << "366" << endl;
        }
        else {
            cout << "365" << endl;
        }
        break;
    case 59:
        //if 29
        cout << "x: ";
        cin >> x;

        if (x > 0) {
            if ((x % 2) == 0) {
                cout << "Положительное четное число" << endl;
            }
            else {
                cout << "Положительное нечетное число" << endl;
            }
        }
        else if (x < 0) {
            if ((x % 2) == 0) {
                cout << "Отрицательное четное число" << endl;
            }
            else {
                cout << "Отрицательное нечетное число" << endl;
            }
        }
        else {
            cout << "Нулевое число" << endl;
        }
        break;
    case 60:
        //if 30
        cout << "x: ";
        cin >> x;

        if ((x % 2) == 0) {
            if ((1 <= x) && (x <= 9)) {
                cout << "Четное однозначное число" << endl;
            }
            else if ((10 <= x) && (x <= 99)) {
                cout << "Четное двузначное число" << endl;
            }
            else if ((100 <= x) && (x <= 999)) {
                cout << "Четное трехзначное число" << endl;
            }
        }
        else {
            if ((1 <= x) && (x <= 9)) {
                cout << "Нечетное однозначное число" << endl;
            }
            else if ((10 <= x) && (x <= 99)) {
                cout << "Нечтное двузначное число" << endl;
            }
            else if ((100 <= x) && (x <= 999)) {
                cout << "Нечетное трехзначное число" << endl;
            }
        }
        break;

    default:
        system("cls");
        cout << "[*] Ошибка!" << endl;
        break;
    }


    return 0;
}

//Оператор выбора
int Case(int choice) {
    int x, n, l, D, M;
    float A, B;
    
    switch (choice){
    case 61:
        //case 1
        cout << "x: ";
        cin >> x;

        switch (x){
        case 1:
            cout << "Понидельник" << endl;
            break;
        case 2:
            cout << "Вторник" << endl;
            break;
        case 3:
            cout << "Среда" << endl;
            break;
        case 4:
            cout << "Четверг" << endl;
            break;
        case 5:
            cout << "Пятница" << endl;
            break;
        case 6:
            cout << "Суббота" << endl;
            break;
        case 7:
            cout << "Воскресение" << endl;
            break;

        default:
            cout << "Цифры 1-7" << endl;
            break;
        }
        break;

    case 62:
        //case 2
        cout << "K: ";
        cin >> x;

        switch (x){
        case 1:
            cout << "плохо" << endl;
            break;
        case 2:
            cout << "неудовлетворительно" << endl;
            break;
        case 3:
            cout << "удовлетворительно" << endl;
            break;
        case 4:
            cout << "хорошо" << endl;
            break;
        case 5:
            cout << "отлично" << endl;
            break;
        default:
            cout << "ошибка" << endl;
            break;
        }
        break;

    case 63:
        //case 3
        cout << "M: ";
        cin >> x;

        switch (x) {
        case 1:
            cout << "Январь" << endl;
            break;
        case 2:
            cout << "Февраль" << endl;
            break;
        case 3:
            cout << "Март" << endl;
            break;
        case 4:
            cout << "Апрель" << endl;
            break;
        case 5:
            cout << "Май" << endl;
            break;
        case 6:
            cout << "Июнь" << endl;
            break;
        case 7:
            cout << "Июль" << endl;
            break;
        case 8:
            cout << "Август" << endl;
            break;
        case 9:
            cout << "Сентябрь" << endl;
            break;
        case 10:
            cout << "Октябрь" << endl;
            break;
        case 11:
            cout << "Ноябрь" << endl;
            break;
        case 12:
            cout << "Декабрь" << endl;
            break;
        default:
            cout << "ошибка!" << endl;
            break;
        }

        break;
    case 64:
        //case 4
        cout << "M: ";
        cin >> x;

        switch (x) {
        case 1:

        case 3:

        case 5:

        case 7:

        case 8:

        case 10:

        case 12:
            cout << "В месяце 31 днень" << endl;
            break;
        case 4:

        case 6:

        case 9:

        case 11:
            cout << "В месяце 30 днень" << endl;
            break;
        case 2:
            cout << "В месяце 28 днень";
            break;
        }

        break;
    case 65:
        //case 5
        cout << "N: ";
        cin >> n;
        cout << "a: ";
        cin >> A;
        cout << "b: ";
        cin >> B;

        switch (n){
        case 1:
            cout << A + B << endl;
            break;
        case 2:
            cout << A - B << endl;
            break;
        case 3:
            cout << A * B << endl;
            break;
        case 4:
            cout << A / B << endl;

        default:
            cout << "Ошибка" << endl;
            break;
        }

        break;
    case 66:
        //case 6
        cout << "n: ";
        cin >> n;
        cout << "L: ";
        cin >> l;

        switch (n) {
        case 1:
            cout << l / 10 << endl;
            break;
        case 2:
            cout << l * 1000 << endl;
            break;
        case 3:
            cout << l << endl;
            break;
        case 4:
            cout << l / 1000 << endl;
            break;
        case 5:
            cout << l / 100 << endl;
            break;
        }
        break;

    case 67:
        //case 7
        cout << "n: ";
        cin >> n;
        cout << "M:";
        cin >> x;

        switch (n) {
        case 1:
            cout << x << endl;
            break;
        case 2:
            cout << x / 1000000 << endl;
            break;
        case 3:
            cout << x / 1000 << endl;
            break;
        case 4:
            cout << x * 1000 << endl;
            break;
        case 5:
            cout << x * 100 << endl;
            break;
        }
        break;

    case 68:
        //case 8
        cout << "Введите день:";
        cin >> D;
        cout << "Введите номер месяца:";
        cin >> M;

        D = D - 1;
        if (D == 0) {
            M = M - 1;
            if (M == 0) {
                M = 12;
            }
            switch (M)
            {
            case 1: 
                D = 31;
                break;
            case 3: 
                D = 31;
                break;
            case 5: 
                D = 31;
                break;
            case 7: 
                D = 31;
                break;
            case 8: 
                D = 31;
                break;
            case 10: 
                D = 31;
                break;
            case 12: 
                D = 31;
                break;
            case 4: 
                D = 30;
                break;
            case 6: 
                D = 30;
                break;
            case 9: 
                D = 30;
                break;
            case 11: 
                D = 30;
                break;
            case 2:
                D = 28;
                break;
            }
        }
        cout << "Предыдущая дата: " << D << "." << M << endl;
        break;

    case 69:
        //case 9
        cout << "D: ";
        cin >> D;
        cout << "M: ";
        cin >> M;

        switch (M) {
        case 1:

        case 3:

        case 5:

        case 7:

        case 8:

        case 10:

        case 12:
            if (D == 31) {
                D = 0;
            }
            break;

        case 4:

        case 6:

        case 9:

        case 11:
            if (D == 30) {
                D = 0;
            }
            break;

        case 2:
            if (D == 28) {
                D = 0;
            }
            break;
        }

        if (D == 0)
            if (M == 12) M = 1;
            else M++;

        D++;
        cout << D << "." << M << endl;
        break;

    default:
        system("cls");
        cout << "[*] Ошибка!" << endl;
        break;
    }
    return 0;
}

//Цикл с параметром
int For(int choice) {
    int K, N, A, B, buffer = 0;
    float n, a, fbuffer;

    switch (choice) {
    case 70:
        //for 1
        cout << "K: ";
        cin >> K;
        cout << "N: ";
        cin >> N;

        for (int i = 1; i <= N; i++) {
            cout << i << ". " << K << endl;
        }
        break;

    case 71:
        //for 2
        cout << "A: ";
        cin >> A;
        cout << "B: ";
        cin >> B;

        for (int i = A; i <= B; i++) {
            cout << i << endl;
            buffer += 1;
        }
        cout << "N = " << buffer << endl;
        break;

    case 72:
        //for 3
        cout << "A: ";
        cin >> A;
        cout << "B: ";
        cin >> B;

        for (int i = B - 1; i > A; i--) {
            cout << i << endl;
            buffer += 1;
        }
        cout << "N = " << buffer << endl;
        break;

    case 73:
        //for 4
        cout << "Цена: ";
        cin >> n;

        for (int i = 1; i <= 10; i++) {
            cout << i << " кг, стоимость - " << i * n << endl;
        }
        break;

    case 74:
        //for 5
        cout << "Цена: ";
        cin >> n;

        for (float i = 0.1; i <= 1.1; i += 0.1) {
            cout << i << " кг, стоимость - " << i * n << endl;
        }
        break;

    case 75:
        //for 6
        cout << "Цена: ";
        cin >> n;

        for (float i = 1.2; i <= 2.1; i += 0.2) {
            cout << i << " кг, стоимость - " << i * n << endl;
        }
        break;

    case 76:
        //for 7
        cout << "A: ";
        cin >> A;
        cout << "B: ";
        cin >> B;

        for (int i = A; i <= B; i++) {
            buffer += i;
        }
        cout << buffer << endl;
        break;

    case 77:
        //for 8
        cout << "A: ";
        cin >> A;
        cout << "B: ";
        cin >> B;
        buffer = 1;

        for (int i = A; i <= B; i++) {
            buffer *= i;
        }
        cout << buffer << endl;
        break;
    case 78:
        //for 9
        cout << "A: ";
        cin >> A;
        cout << "B: ";
        cin >> B;

        for (int i = A; i <= B; i++) {
            buffer += pow(i, 2);
        }
        cout << buffer << endl;
        break;

    case 79:
        //for 10
        cout << "N: ";
        cin >> N;
        n = 0;

        for (double i = 1; i <= N; i++) {
            n += double(1 / i);
        }
        cout << n << endl;
        break;

    case 80:
        //for 11
        cout << "N: ";
        cin >> N;
        buffer = pow(N, 2);
        for (int i = 1; i <= N; i++) {
            buffer += pow((N + i), 2);
        }
        buffer += pow((2 * N), 2);

        cout << buffer << endl;
        break;

    case 81:
        //for 12

        cout << "N: ";
        cin >> N;
        a = 1;
        for (int i = 1; i <= N; i++) {
            a = a * (1 + 0.1 * i);
        }
        cout << a << endl;
        break;

    case 82:
        //for 13
        cout << "n=";
        cin >> n;
        a = 0;
        for (int i = 1; i <= n; i++) {
            a += pow(-1, i + 1) * (1.0 + (float)i / 10);
        }
        cout << a << endl;

        break;

    case 83:
        //for 14
        cout << "N:";
        cin >> n;
        A = 0;
        
        for (int i = 1; i <= (2 * n - 1); i += 2) {
            A += i;
        }
        cout << A << endl;

        break;

    case 84:
        //for 15
        cout << "N: ";
        cin >> n;
        cout << "A: ";
        cin >> a;
        fbuffer = 1;

        for (int i = 1; i <= n; i++) {
            fbuffer *= a;
        }cout << fbuffer << endl;
        break;

    case 85:
        //for 16
        cout << "A:";
        cin >> a;
        cout << "N:";
        cin >> n;
        
        fbuffer = 1;
        for (int i = 1; i <= n; ++i) {
            fbuffer *= a;
        }
        cout << fbuffer << endl;
        break;

    default:
        system("cls");
        cout << "[*] Ошибка!" << endl;
        break;
    }
    return 0;
}

//Цикл с условием
int While(int choice) {

    int a, b, c, d, k, n;
    float rez, A, s, B, C;

    switch (choice){
    case 86:
        //while 1
        cout << "A:";
        cin >> a;
        cout << "B:";
        cin >> b;

        c = a;
        while (c >= 0) {
            c -= b;
        }
        cout << c + b << endl;
        break;
    case 87:
        //while 2 
        cout << "A:";
        cin >> a;
        cout << "B:";
        cin >> b;

        c = a;
        d = 0;
        while (c - b >= 0) {
            c -= b;
            ++d;
        }
        cout << d << endl;
        break;

    case 88:
        //while 3
        cout << "N:";
        cin >> a;
        cout << "K:";
        cin >> b;

        c = 0;
        while (a >= b) {
            a -= b;
            ++c;
        }
        cout << c << endl;
        cout << a << endl;
        break;

    case 89:
        //while 4
        cout << "A:";
        cin >> a;

        while (a > 0) { 
            a -= 3;
        }
        if (a == 0) {
            cout << "True" << endl;
        }else {
            cout << "False" << endl;
        }

        break;

    case 90:
        //while 5
        cout << "N:";
        cin >> a;

        b = 0;
        while (a >= 2) {
            ++b;
            a /= 2;
        }
        cout << b << endl;

        break;

    case 91:
        //while 6
        cout << "N:";
        cin >> a;
        
        rez = 1;
        while (a >= 2) {
            rez *= a;
            a -= 2;
        }

        cout << rez << endl;

        break;

    case 92:
        //while 12
        cout << "N:";
        cin >> a;
        
        b = 0, c = 0;
        while (!(c + b + 1 > a)) {
            ++b;
            c += b;
        }
        cout << b << endl;
        cout << c << endl;

        break;

    case 93:
        //while 13

        cout << "A:";
        cin >> A;
        b = 0;
        rez = 0;
        while (rez <= a) {
            ++b;
            rez += 1 / (float)b;
        }
        cout << b << endl;
        cout << rez << endl;
        break;

    case 94:
        //while 14
        cout << "A:";
        cin >> A;

        c = 0;
        rez = 0;
        while (rez <= A) {
            ++c;
            rez += 1 / (float)c;
        }
        cout << "K:" << c - 1 << endl;
        cout << "N:" << rez - 1 / (float)c << endl;

        break;

    case 95:
        //while 15

        cout << "P:";
        cin >> A;
        c = 1;
        s = 1000;
        while (s <= 1100) {
            ++c;
            s += s * A / 100;
        }
        cout << "k:" << A << endl;
        cout << "nS:" << s << endl;

        break;

    case 96:
        //while 16
        cout << "P:";
        cin >> A;
        k = 1;
        B = 10, C = 10;
        while (C <= 200) {
            ++k;
            B += B * A / 100;
            C += B;
        }
        cout << "k: " << k << endl;
        cout << "nS: " << C << endl;

        break;

    case 97:
        //while 17

        cout << "N:";
        cin >> n;

        while (n > 0) {
            cout << n % 10 << " ";
            n /= 10;
        }
        cout << "" << endl;

        break;

    case 98:
        //while 18
        cout << "N:";
        cin >> n;

        a = 0, b = 0;

        while (n > 0) {
            ++b;
            a += n % 10;
            n /= 10;
        }
        cout << "Number: " << b << endl;
        cout << "Sum: " << a << endl;

        break;
    case 99:
        //while 19
        cout << "N: ";
        cin >> n;

        a = 0;
        while (n > 0) {
            int M = n % 10;
            a = a * 10 + M;
            n /= 10;
        }
        cout << a << endl;

        break;

    case 100:
        //while 20
        cout << "N: ";
        cin >> n;

        while ((n > 0) & ((n % 10) != 2)) {
            n /= 10;
        }
        if ((n > 0) && (n % 10) == 2)
            cout << "True";
        else
            cout << "False";
        break;

    default:
        system("cls");
        cout << "[*] Ошибка!" << endl;
        break;
    }

    return 0;
}