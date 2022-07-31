#include "function.h"
// �) ������� ��� ���������� ������� ���������� ����������;
void fillArrayInt(int*& arrayInt, int size)
{
    arrayInt = new int[size];
    for (int i = 0; i < size; i++)
    {
        arrayInt[i] = rand() % 100;
    }
    cout << "������ ������� ��������" << endl;
}

void fillArrayChar(char*& arrayChar, int size)
{
    arrayChar = new char[size];
    for (int i = 0; i < size; i++)
    {
        arrayChar[i] = 97 + rand() % 26; //a..z
    }
    cout << "������ ������� ��������" << endl;
}

void fillArrayDouble(double*& arrayDouble, int size)
{
    arrayDouble = new double[size];
    for (int i = 0; i < size; i++)
    {
        arrayDouble[i] = (rand() % 100) * 0.01 + rand() % 100; //0.0...99.99
    }
    cout << "������ ������� ��������" << endl;
}
// �) ������� ��� ������ �������� ������� �� �������;
void showArrayInt(int* arrayInt, int size)
{
    if (arrayInt == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    cout << "INTEGER ������: ";
    for (int i = 0; i < size; i++)
    {
        cout << arrayInt[i] << " ";
    }
    cout << endl;
}

void showArrayChar(char* arrayChar, int size)
{
    if (arrayChar == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    cout << "CHAR ������: ";
    for (int i = 0; i < size; i++)
    {
        cout << arrayChar[i] << " ";
    }
    cout << endl;
}

void showArrayDouble(double* arrayDouble, int size)
{
    if (arrayDouble == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    cout << "DOUBLE ������: ";
    for (int i = 0; i < size; i++)
    {
        cout << arrayDouble[i] << " ";
    }
    cout << endl;
}

// �) ������� ��� ������ ������������ ��������;
void searchMinInt(int* arrayInt, int size)
{
    if (arrayInt == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    int min = arrayInt[0];
    for (int i = 0; i < size; i++)
    {
        if (arrayInt[i] < min)
        {
            min = arrayInt[i];
        }
    }
    cout << "����������� ������� ������� = " << min << endl;
}

void searchMinChar(char* arrayChar, int size)
{
    if (arrayChar == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    char min = arrayChar[0];
    for (int i = 0; i < size; i++)
    {
        if (arrayChar[i] < min)
        {
            min = arrayChar[i];
        }
    }
    cout << "����������� ������� ������� = " << min << endl;
}

void searchMinDouble(double* arrayDouble, int size)
{
    if (arrayDouble == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    double min = arrayDouble[0];
    for (int i = 0; i < size; i++)
    {
        if (arrayDouble[i] < min)
        {
            min = arrayDouble[i];
        }
    }
    cout << "����������� ������� ������� = " << min << endl;
}

// �) ������� ��� ������ ������������� ��������;
void searchMaxInt(int* arrayInt, int size)
{
    if (arrayInt == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    int max = arrayInt[0];
    for (int i = 0; i < size; i++)
    {
        if (arrayInt[i] > max)
        {
            max = arrayInt[i];
        }
    }
    cout << "������������ ������� ������� = " << max << endl;
}

void searchMaxChar(char* arrayChar, int size)
{
    if (arrayChar == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    char max = arrayChar[0];
    for (int i = 0; i < size; i++)
    {
        if (arrayChar[i] > max)
        {
            max = arrayChar[i];
        }
    }
    cout << "������������ ������� ������� = " << max << endl;
}

void searchMaxDouble(double* arrayDouble, int size)
{
    if (arrayDouble == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    double max = arrayDouble[0];
    for (int i = 0; i < size; i++)
    {
        if (arrayDouble[i] > max)
        {
            max = arrayDouble[i];
        }
    }
    cout << "������������ ������� ������� = " << max << endl;
}

// �) ������� ��� ���������� ;
void sortArrayInt(int*& arrayInt, int size)
{
    if (arrayInt == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    int min;
    int buffer;
    int index;

    for (int i = 0; i < size - 1; i++)
    {
        min = arrayInt[i];
        index = i;
        for (int j = i; j < size; j++)
        {
            if (arrayInt[j] < min)
            {
                min = arrayInt[j];
                index = j;
            }
        }
        buffer = arrayInt[i];
        arrayInt[i] = min;
        arrayInt[index] = buffer;
    }
    showArrayInt(arrayInt, size);
}

void sortArrayChar(char*& arrayChar, int size)
{
    if (arrayChar == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    char min;
    char buffer;
    int index;

    for (int i = 0; i < size - 1; i++)
    {
        min = arrayChar[i];
        index = i;
        for (int j = i; j < size; j++)
        {
            if (arrayChar[j] < min)
            {
                min = arrayChar[j];
                index = j;
            }
        }
        buffer = arrayChar[i];
        arrayChar[i] = min;
        arrayChar[index] = buffer;
    }
    showArrayChar(arrayChar, size);
}

void sortArrayDouble(double*& arrayDouble, int size)
{
    if (arrayDouble == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    double min;
    double buffer;
    int index;

    for (int i = 0; i < size - 1; i++)
    {
        min = arrayDouble[i];
        index = i;
        for (int j = i; j < size; j++)
        {
            if (arrayDouble[j] < min)
            {
                min = arrayDouble[j];
                index = j;
            }
        }
        buffer = arrayDouble[i];
        arrayDouble[i] = min;
        arrayDouble[index] = buffer;
    }
    showArrayDouble(arrayDouble, size);
}

// �) ������� ��� �������������� �������� �������.
void editArrayInt(int*& arrayInt, int size)
{
    if (arrayInt == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    int indexEditedElement;
    int newValue;

    cout << "������� ������ ��������, ������� �� ������ ��������������� (0..." << size - 1 << "): ";
    cin >> indexEditedElement;

    if (indexEditedElement < 0 || indexEditedElement > size - 1)
    {
        cout << "������������ ��������" << endl;
        return;
    }

    cout << "������� ����� �������� ��������: ";
    cin >> newValue;

    arrayInt[indexEditedElement] = newValue;
    showArrayInt(arrayInt, size);
}

void editArrayChar(char*& arrayChar, int size)
{
    if (arrayChar == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    int indexEditedElement;
    char newValue;

    cout << "������� ������ ��������, ������� �� ������ ��������������� (0..." << size - 1 << "): ";
    cin >> indexEditedElement;

    if (indexEditedElement < 0 || indexEditedElement > size - 1)
    {
        cout << "������������ ��������" << endl;
        return;
    }

    cout << "������� ����� �������� ��������: ";
    cin >> newValue;

    arrayChar[indexEditedElement] = newValue;
    showArrayChar(arrayChar, size);
}

void editArrayDouble(double*& arrayDouble, int size)
{
    if (arrayDouble == nullptr)
    {
        cout << "������ �� ��������" << endl;
        return;
    }
    int indexEditedElement;
    double newValue;

    cout << "������� ������ ��������, ������� �� ������ ��������������� (0..." << size - 1 << "): ";
    cin >> indexEditedElement;

    if (indexEditedElement < 0 || indexEditedElement > size - 1)
    {
        cout << "������������ ��������" << endl;
        return;
    }

    cout << "������� ����� �������� ��������: ";
    cin >> newValue;

    arrayDouble[indexEditedElement] = newValue;
    showArrayDouble(arrayDouble, size);
}