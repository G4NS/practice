#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
using namespace std;
//-------------------------------------------------------------------------------------------------
//Ввод и вывод данных

int fullbegin(int choice) {
    int a, b, c, d, p, s, V, S;
    float pi = 3.14, LL, SS, RR;
    switch (choice){
        case 1:
            //begin 1
            cout << "a: ";
            cin >> a;

            p = 4 * a;
            cout << "P = " << p << endl;
            return 0;
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
        cout << "---------->Ошибка!!!" << endl;
        break;
    }

    return 0;
}


/*

int begin1() {
    int a, p;

    cout << "a: ";
    cin >> a;

    p = 4 * a;
    cout << "P = " << p << endl;
    return 0;
}

int begin2() {
    int a, s;
    cout << "a: ";
    cin >> a;

    s = pow(a, 2);
    cout << "s = " << s << endl;
    return 0;
}

int begin3() {
    int a, b, s, p;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    s = a * b;
    p = 2 * (a + b);

    cout << "S = " << s << endl;
    cout << "P = " << p << endl;
    return 0;
}

int begin4() {
    int d;
    float pi = 3.14, l;

    cout << "d = ";
    cin >> d;

    l = pi * d;
    cout << "l = " << l << endl;

    return 0;
}


int begin5(){
    int V, a, S;

    cout << "a = ";
    cin >> a;
    // Berilgen S = a ** 3 degenimiz a ni biz cubtaimiz sol ushn 3ti cubtaimiz

    V = pow(a, 3);
    S = 6 * pow(a, 2);

    cout << "V = a^3 = " << V << endl;
    cout << "S = 6 * a^2 = " << S << endl;

    return 0;
}

int begin6() {
    int a, b, c, V, s;

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

    return 0;
}

int begin7() {
    float pi = 3.14, L, S, R;

    cout << "R = ";
    cin >> R;

    L = 2 * pi * R;
    S = pi * pow(R, 2);

    cout << "L = " << L << endl;
    cout << "S = " << S << endl;

    return 0;
}

int begin8() {
    int a, b, s;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    s = (a * b) / 2;
    cout << s << endl;

    return 0;
}

int begin9(){
    float a, b, S;
    
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;
    S = sqrt(a * b);
    cout << S << endl;

    return 0;
}

int begin10() {
    int a, b, sum;

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

    return 0;
}
*/

/*
int fullinteger(int choice) {
    int L

    switch (choice){
    case 11:
        //integer 1
        int L;

        cout << "L: ";
        cin >> L;

        cout << L / 100 << endl;
        break;
    case 12:

        break;
    case 13:

        break;
    case 14:

        break;

    case 15:

        break;
    case 16:

        break;

    case 17:

        break;
    case 18:
        break;

    case 19:

        break;
    case 20:

        break;







    default:
        break;
    }

    return 0;
}
//-------------------------------------------------------------------------------------------------
//Целые числа

int integer1() {
    int L;

    cout << "L: ";
    cin >> L;

    cout << L / 100 << endl;

    return 0;
}

int integer2() {
    int M;

    cout << "M: ";
    cin >> M;

    cout << M / 1000 << endl;

    return 0;
}

int integer3() {
    int byte;

    cout << "Byte: ";
    cin >> byte;

    cout << byte / 1024 << endl;

    return 0;
}

int integer4() {
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << a / b << endl;
     
    return 0;
}

int integer5() {
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << a % b << endl;
     
    return 0;
}

int integer6() {
    int a;

    cout << "a: ";
    cin >> a;

    cout << a / 10 << " and " << a % 10 << endl;

    return 0;
}

int integer7() {
    int a;

    cout << "num: ";
    cin >> a;

    cout << "sum = " << (a / 10) + (a % 10) << endl;
    cout << "Proisvedenie = " << (a / 10) * (a % 10) << endl;
    
    return 0;
}

int integer8() {
    int a;

    cout << "a: ";
    cin >> a;

    cout << a % 10 << a / 10 << endl;
    
    return 0;
}

int integer9() {
    int a;

    cout << "a: ";
    cin >> a;

    cout << a / 100 << endl;
    
    return 0;
}

int integer10() {
    int num;

    cout << "num: ";
    cin >> num;

    cout << num % 10 << " and " << (num % 100) / 10 << endl;
    
    return 0;
}
*/
int integermax(int choice) {
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
        }else if(k == 1) {
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
        cout << "---------->Ошибка!!!" << endl;
        break;
    }


    return 0;
}

//-------------------------------------------------------------------------------------------------
//Логические выражения


int booleanfull(int choice) {
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
        break;
    }

    return 0;
}

//-------------------------------------------------------------------------------------------------
//начинается майн функция
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice, buffer = 0;

    cout << "===Ввод и вывод данных===" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "    " << i << ". Begin-" << i << endl;
    }
    cout << "\n===Целые числа===" << endl;
    for (int i = 11; i <= 36; i++) {
        buffer += 1;
        cout << "    " << i << ". Integer-" << buffer << endl;
    }
    cout << "    " << "35. Integer-29\n    36. Integer-30\n\n===Логические выражения===" << endl;
    for (int i = 37; i <= 42; i++) {
        buffer += 1;
        cout << "    " << i << ". Boolean-" << buffer << endl;
    }


    cout << "\n" << endl;
    /*if (error == true) {
        cout << "\n=====Ошибка! Введите корректные данные!=====\n" << endl;
    }*/
    cout << "---------> Выберите: ";
    cin >> choice;


    
    if ((1 <= choice) && (choice <= 10)) {
        fullbegin(choice);
    }
    else if ((21 <= choice) && (choice <= 36)) {
        integermax(choice);
    }
    else if ((37 <= choice) && (choice <= 42)) {
        booleanfull(choice);
    }
    else {
        system("cls");
        main();

    }
    
    /*
    switch (choice){


    case 1:
        begin1();
        break;
    case 2:
        begin2();
        break;
    case 3:
        begin3();
        break;
    case 4:
        begin4();
        break;
    case 5:
        begin5();
        break;
    case 6:
        begin6();
        break;
    case 7:
        begin7();
        break;
    case 8:
        begin8();
        break;
    case 9:
        begin9();
        break;
    case 10:
        begin10();
        break;



    case 11:
        integer1();
        break;
    case 12:
        integer2();
        break;
    case 13:
        integer3();
        break;
    case 14:
        integer4();
        break;
    case 15:
        integer5();
        break;
    case 16:
        integer6();
        break;
    case 17:
        integer7();
        break;
    case 18:
        integer8();
        break;
    case 19:
        integer9();
        break;
    case 20:
        integer10();
        break;

    default:
        if ((21 <= choice) && (choice <= 36)) {
            integermax(choice);
        }else if((37 <= choice) && (choice <= 43)) {
            booleanfull(choice);
        }
        else {
            system("cls");
            cout << "\n---------->Ошибка! Введите корректные данные! \n" << endl;
            main();

        }
        break;
    }

    */
    
    
    system("pause");
    return 0;
}
