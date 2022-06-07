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

int main(bool error) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice, buffer = 0;

    cout << "<===> Ввод и вывод данных <===>" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "   [" << i << "]" << " Begin-" << i << endl;
    }
    cout << "\n<===> Целые числа <===>" << endl;
    for (int i = 11; i <= 34; i++) {
        buffer += 1;
        cout << "   [" << i << "]" << " Integer-" << buffer << endl;
    }
    cout << "   [35] Integer-29" << endl;
    cout << "   [36] Integer-30" << endl;
    cout << "\n<===> Логические выражения <===>" << endl;

    buffer = 1;
    for (int i = 37; i <= 42; i++) {
        cout << "   [" << i << "] Boolean-" << buffer << endl;
        buffer += 1;
    }
    buffer = 17;
    for (int i = 43; i <= 56; i++) {
        cout << "   [" << i << "] If-" << buffer << endl;
        buffer += 1;
    }
    cout << "\n<===> Оператор выбора <===>" << endl;
    buffer = 1;
    for (int i = 57; i <= 65; i++) {
        cout << "   [" << i << "] Case-" << buffer << endl;
        buffer += 1;
    }

    cout << "\n<===>Цикл с параметром<===>" << endl;
    buffer = 1;
    for (int i = 66; i <= 81; i++) {
        cout << "   [" << i << "] For-" << buffer << endl;
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
    else if ((11 <= choice) && (choice <= 36)) {
        Integer(choice);
    }
    else if ((37 <= choice) && (choice <= 42)) {
        Boolean(choice);
    }
    else if ((43 <= choice) && (choice <= 56)) {
        If(choice);
    }
    else if ((57 <= choice) && (choice <= 65)) {
        Case(choice);
    }
    else if ((66 <= choice) && (choice <= 81)) {
        For(choice);
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
    int a, b, n, L, M, byte, num;
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
        int k;
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
    case 36:
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
    case 37:
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
    case 38:
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
    case 39:
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
    case 40:
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
    case 41:
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
    case 42:
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
    case 43:
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
    case 44:
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
    case 45:
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
    case 46:
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
    case 47:
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
    case 48:
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
    case 49:
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
    case 50:
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
    case 51:
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
    case 52:
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
    case 53:
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
    case 54:
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
    case 55:
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
    case 56:
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
    case 57:
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

    case 58:
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

    case 59:
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
    case 60:
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
    case 61:
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
    case 62:
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

    case 63:
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

    case 64:
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

    case 65:
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
    float n, a;

    switch (choice){
    case 66:
        //for 1
        cout << "K: ";
        cin >> K;
        cout << "N: ";
        cin >> N;

        for (int i = 1; i <= N; i++) {
            cout << i << ". " << K << endl;
        }
        break;

    case 67:
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

    case 68:
        //for 3
        cout << "A: ";
        cin >> A;
        cout << "B: ";
        cin >> B;

        for (int i = B-1; i >> A; i--) {
            cout << i << endl;
            buffer += 1;
        }
        cout << "N = " << buffer << endl;
        break;

    case 69:
        //for 4
        cout << "Цена: ";
        cin >> n;

        for (int i = 1; i <= 10; i++) {
            cout << i << " кг, стоимость - " << i * n << endl;
        }
        break;

    case 70:
        //for 5
        cout << "Цена: ";
        cin >> n;

        for (float i = 0.1; i <= 1.1; i += 0.1) {
            cout << i << " кг, стоимость - " << i * n << endl;
        }
        break;

    case 71:
        //for 6
        cout << "Цена: ";
        cin >> n;

        for (float i = 1.2; i <= 2.1; i += 0.2) {
            cout << i << " кг, стоимость - " << i * n << endl;
        }
        break;

    case 72:
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

    case 73:
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
    case 74:
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

    case 75:
        //for 10
        cout << "N: ";
        cin >> N;
        n = 0;

        for (double i = 1; i <= N; i++) {
            n += double(1 / i);
        }
        cout << n << endl;
        break;

    case 76:
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

    case 77:
        //for 12

        cout << "N: ";
        cin >> N;
        a = 1.1;

        for (float i = a; i <= N; i =+ 0.1) {
            cout << i << endl;
            //a *= i;
        }
        cout << a << endl;
        break;

    case 78:
        //for 13

        break;

    case 79:
        //for 14

        break;

    case 80:
        //for 15

        break;

    case 81:
        //for 16

        break;



    default:
        break;
    }

    return 0;
}