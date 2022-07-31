#pragma once
#include "function.h"
#include <iostream>
#include <Windows.h>

///////////////////////////////////////////////////
////////////////ВЫБОР РЕЖИМА///////////////////////
///////////////////////////////////////////////////
// Выбери один из предложенных режмов и всё за работает INTEGER, CHAR,  DOUBLE
// Если выберишь два все сломаешь и выдет ошибка
//#define INTEGER
//#define CHAR
#define DOUBLE
using namespace std;
//enum это набор именнованых целочисленных констант
//если ни одна из констант не была проинициализирована, тогда
//первая из них будет по умолчанию содержат значение ноль
//а все остальные на единицу больше.
//для красивого выбора 
enum UserChoice
{
    Exit = 0,
    FillArray = 1,
    PrintArray = 2,
    SearchMin = 3,
    SearchMax = 4,
    SortArray = 5,
    EditArray = 6
};
 //имя макроса 
#ifdef INTEGER      //определен идентификатор INTEGER
    //имя макроса 
#   ifndef CHAR
        //имя макроса 
#       ifndef DOUBLE
            // последовательность операторов
#           define show(arrayInt,size) showArrayInt(arrayInt,size)
            // последовательность операторов
#           define fill(arrayInt,size) fillArrayInt(arrayInt,size)
            //последовательность операторов
#           define searchMin(arrayInt,size) searchMinInt(arrayInt,size)
            // последовательность операторов
#           define searchMax(arrayInt,size) searchMaxInt(arrayInt,size)
            // последовательность операторов
#           define sort(arrayInt,size) sortArrayInt(arrayInt,size)
            // последовательность операторов
#           define edit(arrayInt,size) editArrayInt(arrayInt,size)
        //выражение 1
#       endif
    //вырвжение 2
#   endif
//определен идентификатор CHAR
#elif defined CHAR
#   ifndef INTEGER
#       ifndef DOUBLE
#           define show(arrayChar,size) showArrayChar(arrayChar,size)
#           define fill(arrayChar,size) fillArrayChar(arrayChar,size)
#           define searchMin(arrayChar,size) searchMinChar(arrayChar,size)
#           define searchMax(arrayChar,size) searchMaxChar(arrayChar,size)
#           define sort(arrayChar,size) sortArrayChar(arrayChar,size)
#           define edit(arrayChar,size) editArrayChar(arrayChar,size)
#       endif
#   endif
//определен идентификатор DOUBLE
#elif defined DOUBLE
#   ifndef INTEGER
#       ifndef CHAR
#           define show(arrayDouble,size) showArrayDouble(arrayDouble,size)
#           define fill(arrayDouble,size) fillArrayDouble(arrayDouble,size)
#           define searchMin(arrayDouble,size) searchMinDouble(arrayDouble,size)
#           define searchMax(arrayDouble,size) searchMaxDouble(arrayDouble,size)
#           define sort(arrayDouble,size) sortArrayDouble(arrayDouble,size)
#           define edit(arrayDouble,size) editArrayDouble(arrayDouble,size)
#       endif
#   endif
#endif
//функции для вывода значений массива на консоль 
void showArrayInt(int* arrayInt, int size);
void showArrayChar(char* arrayChar, int size);
void showArrayDouble(double* arrayDouble, int size);
//функции для заполнения массива случайными значениями
void fillArrayInt(int* &arrayInt, int size);
void fillArrayChar(char* &arrayChar, int size);
void fillArrayDouble(double* &arrayDouble, int size);
//функции для поиска минимального элемента
void searchMinInt(int* arrayInt, int size);
void searchMinChar(char* arrayChar, int size);
void searchMinDouble(double* arrayDouble, int size);
// функции для поиска максимального элемента
void searchMaxInt(int* arrayInt, int size);
void searchMaxChar(char* arrayChar, int size);
void searchMaxDouble(double* arrayDouble, int size);
//функции для сортировки
void sortArrayInt(int* &arrayInt, int size);
void sortArrayChar(char* &arrayChar, int size);
void sortArrayDouble(double* &arrayDouble, int size);
//функции для редактирования значения массива
void editArrayInt(int* &arrayInt, int size);
void editArrayChar(char* &arrayChar, int size);
void editArrayDouble(double* &arrayDouble, int size);
 
