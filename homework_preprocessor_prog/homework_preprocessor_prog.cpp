/*
    Создать проект в котором
    1. Cоздать три файла: function.h, function.cpp, prog.cpp.
    2. В файле function.cpp необходимо написать следующие
    функции для работы с массивом данных:
    a) функцию для заполнения массива случайными значениями;
    b) функцию для вывода значений массива на консоль ;
    c) функцию для поиска минимального элемента;
    d)функцию для поиска максимального элемента;
    e) функцию для сортировки;
    f) функцию для редактирования значения массива.
    Данные функции необходимо написать для работы
    с массивом целых, действительных и символьных
    значений. (Для каждого типа написать отдельную
    функцию).
    3. В файле function.h нужно:
    a) описать прототипы всех функций;
    b) сделать проверку определена ли константа, указывающая на тип данных (#ifdef INTEGER);
    Создать проект в котором
    1. Cоздать три файла: function.h, function.cpp, prog.cpp.
    2. В файле function.cpp необходимо написать следующие
    функции для работы с массивом данных:
    a) функцию для заполнения массива случайными значениями;
    b) функцию для вывода значений массива на консоль ;
    c) функцию для поиска минимального элемента;
    d)функцию для поиска максимального элемента;
    e) функцию для сортировки;
    f) функцию для редактирования значения массива.
    Данные функции необходимо написать для работы
    с массивом целых, действительных и символьных
    значений. (Для каждого типа написать отдельную
    функцию).
    3. В файле function.h нужно:
    a) описать прототипы всех функций;
    b) сделать проверку определена ли константа, указывающая на тип данных (#ifdef INTEGER);
    */

#include "function.h"

#define N 10

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    #ifdef INTEGER
#   define array1 arrayInt
    cout << "INTEGER выбран режим" << endl;
#endif
#ifdef CHAR
#   define array1 arrayChar
    cout << "CHAR выбран режим" << endl;
#endif
#ifdef DOUBLE
#   define array1 arrayDouble
    cout << "DOUBLE выбран режим" << endl;
#endif
 
    //если выбран более одного режима или не выбран ни один
#ifndef fill
    cout << "Режим выбран более одного или не выбран ни один." << endl;
    return 1;
#elif defined fill
    srand((int)time(NULL));
    int intUserChoice;
    enum UserChoice enumUserChoice;
    int size = 10;
    int* arrayInt = nullptr;
    char* arrayChar = nullptr;
    double* arrayDouble = nullptr;
 
    do
    {
        cout << endl << "Please, enter your choice: " << endl <<
            "0 = Выход" << endl <<
            "1 = Заполнение массива" << endl <<
            "2 = Вывод массива на экран" << endl <<
            "3 = Поиск минимального значения" << endl <<
            "4 = Поиск максимального значения" << endl <<
            "5 = Сортировка массива" << endl <<
            "6 = Редактировать массив" << endl;
        cin >> intUserChoice;
        enumUserChoice = (enum UserChoice) intUserChoice;
 
        switch (enumUserChoice)
        {
        case Exit:
            cout << "Пока" << endl;
            break;
        case FillArray:
            fill(array1, size);
            break;
        case PrintArray:
            show(array1, size);
            break;
        case SearchMin:
            searchMin(array1, size);
            break;
        case SearchMax:
            searchMax(array1, size);
            break;
        case SortArray:
            sort(array1, size);
            break;
        case EditArray:
            edit(array1, size);
            break;
        default:
            cout << "Ошибка ввода";
            break;
        }
    } while (enumUserChoice != Exit);
    //для освобождения памяти
    delete[] arrayInt;
    delete[] arrayChar;
    delete[] arrayDouble;
#endif
}


