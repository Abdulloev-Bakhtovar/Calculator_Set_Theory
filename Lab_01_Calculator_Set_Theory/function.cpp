#define _CRT_SECURE_NO_WARNINGS 1
#include <string>
#include <algorithm>
#include <iostream>
#include <random>
#include <set>
using namespace std;

////UNIVERSUM
//void addElementToStringUniversum(string& str)
//{
//    cin.ignore();
//    getline(cin, str);
//}
//
//void stringToIntUniversum(string str, int*& arr, int& sizeUniversum)
//{
//    int count = 0;
//    //sizeUniversum = count_if((*str).begin(), (*str).end(), [](int c) { return c != ' '; });
//    string str2 = str;
//    string::size_type size;
//    while ((str.size()))
//    {
//        int temp = stoi(str, &size);
//        count++;
//        str = (str).substr(size);
//    }
//    sizeUniversum = count;
//    arr = new int[sizeUniversum + 2];
//    int index = 0;
//    while ((str2.size()))
//    {
//        int newInt = stoi(str2, &size);
//        arr[index] = newInt;
//        str2 = (str2).substr(size);
//        index++;
//    }
//}
//
//void randomNumUniversum(int*& arr, int& sizeUniversum)
//{
//    cout << "Введите размер: ";
//    cin >> sizeUniversum;
//    int start, finish;
//    cout << "Введите диапазон через пробел: ";
//    cin >> start >> finish;
//    arr = new int[sizeUniversum];
//    for (int i = 0; i < sizeUniversum; i++)
//    {
//        arr[i] = start + rand() % finish;
//    }
//}

////Universum
void addElementToStringUniversum(string& str)
{
	cin.ignore();
	getline(cin, str);
}
void stringToIntUniversum(string str, int*& arr, int& sizePlenty)
{

    int count = 0;
    //sizeUniversum = count_if((*str).begin(), (*str).end(), [](int c) { return c != ' '; });
    string str2 = str;
    string::size_type size;
    while ((str.size()))
    {
        int temp = stoi(str, &size);
        count++;
        str = (str).substr(size);
    }
    sizePlenty = count;
    arr = new int[sizePlenty + 2];
    int index = 0;
    while ((str2.size()))
    {
        int newInt = stoi(str2, &size);
        arr[index] = newInt;
        str2 = (str2).substr(size);
        index++;
    }
}
void randomNumUniversum(int*& arr, int& sizePlenty)
{
    cout << "Введите размер: ";
    cin >> sizePlenty;
    int finish;
    cout << "Введите max: ";
    cin >> finish;
    arr = new int[sizePlenty];
    for (int i = 0; i < sizePlenty; i++)
    {
        arr[i] = rand() % finish;
    }
}

////Plenty
void addElementToString(string& str, int* Universum, int sizeUniversum)
{
    set<int> st;
    cout << "Universum = [ ";
    for (int i = 0; i < sizeUniversum; i++)
    {
        st.insert(Universum[i]);
    }
    for (int n : st)
        cout << n << " ";
    cout << "]" << endl;
    cout << "Введите элементы: ";
    cin.ignore();
    getline(cin, str);
}
void stringToInt(string str, int*& arr, int& sizePlenty, int* Universum, int sizeUniversum)
{

    int count = 0;
    //sizeUniversum = count_if((*str).begin(), (*str).end(), [](int c) { return c != ' '; });
    string str2 = str;
    string::size_type size;
    while ((str.size()))
    {
        int temp = stoi(str, &size);
        count++;
        str = (str).substr(size);
    }
    sizePlenty = count;
    arr = new int[sizePlenty+2];
    int index = 0;
    while ((str2.size()))
    {
        int newInt = stoi(str2, &size);
        arr[index] = newInt;
        str2 = (str2).substr(size);
        index++;
    }
    int tmp = 0;
    int a;
    int search = 0;
    for (int i = 0; i < sizePlenty; )
    {
        search = i;
        a = arr[i];
        for (int j = 0; j < sizeUniversum; j++)
        {
            if (a == Universum[j])
            {
                arr[i] = a;
                i++;
                tmp++;
                break;
            }
        }
        if (search == i)
        {
            cout << "Найден элемент который не находится в Универсум!" << endl;
            cout << "Множeство не сохранено!" << endl;
            delete[] arr;
            arr = nullptr;
            sizePlenty = 0;
            break;
        }
    }
}
void randomNum(int*& arr, int& sizePlenty,int* Universum, int sizeUniversum)
{
    set<int> st;
    cout << "Введите размер: ";
    cin >> sizePlenty;
    int finish;
    cout << "Universum = [ ";
    for (int i = 0; i < sizeUniversum; i++)
    {
        st.insert(Universum[i]);
    }
    for (int n : st)
        cout << n << " ";
    cout << "]" << endl;
    cout << "Введите max: ";
    cin >> finish;
    arr = new int[sizePlenty];
    int a;
    for (int i = 0; i < sizePlenty; )
    {
        a = rand() % finish;
        for (int j = 0; j < sizeUniversum; j++)
        {
            if (a == Universum[j])
            {
                arr[i] = a;
                i++;
                break;
            }
        }
    }
    
}
void print(int* arr, int size)
{
    set<int> st;
    for (int i = 0; i < size; i++)
    {
        st.insert(arr[i]);
    }
    for (int n : st)
    {
        cout << n << " ";
    }
}

//Операция над множеств
void operationUnification(int* arrF,int sizeF,int* arrS,int sizeS)//объединение +
{
    set<int> st;
    for (int i = 0; i < sizeF; i++)
    {
        st.insert(arrF[i]);
    }
    for (int j = 0; j < sizeS; j++)
    {
        st.insert(arrS[j]);
    }
    cout << "Result = [ ";
    for (int n : st)
    {
        cout << n << " ";
    }
    cout << "]" << endl;
}
void operationIntersection(int* arrF, int sizeF, int* arrS, int sizeS)//пресечение *
{
    set<int> st;
    int a;
    for (int i = 0; i < sizeF; i++)
    {
        a = arrF[i];
        for (int j = 0; j < sizeS; j++)
        {
            if (a == arrS[j])
            {
                st.insert(a);
                break;
            }
        }
    }
    cout << "Result = [ ";
    for (int n : st)
    {
        cout << n << " ";
    }
    cout << "]" << endl;
}
void operationDifference(int* arrF, int sizeF, int* arrS, int sizeS)/*Разност \ */
{
    set<int> st;
    for (int i = 0; i < sizeF; i++)
    {
        int i2 = 0;
        for (; i2 < sizeS; i2++)
        {
            if (arrF[i] == arrS[i2])
                break;
        }
        if (i2 == sizeF)
            st.insert(arrF[i]);
    }

    cout << "Result = [ ";
    for (int n : st)
    {
        cout << n << " ";
    }
    cout << "]" << endl;
}
void operationSymmetricDifference(int* arrF, int sizeF, int* arrS, int sizeS)
{
    set<int> st;
    for (int i = 0; i < sizeF; i++)
    {
        int j = 0;
        for (; j < sizeS; j++)
        {
            if (arrF[i] == arrS[j])
                break;
        }
        if (j == sizeS)
            st.insert(arrF[i]);
    }

    for (int i = 0; i < sizeS; i++)
    {
        int j = 0;
        for (; j < sizeF; j++)
        {
            if (arrS[i] == arrF[j])
                break;
        }
        if (j == sizeF)
            st.insert(arrS[i]);
    }

    cout << "Result = [ ";
    for (int n : st)
    {
        cout << n << " ";
    }
    cout << "]" << endl;
}


void operationCheckOccurrence(int* arrF, int sizeF, int* arrS, int sizeS)//Проверить вхождение
{
    bool isIn = false;
    for (int i = 0; i < sizeF; i++)
    {
        isIn = false;
        for (int j = 0; j < sizeS; j++)
        {
            if (arrS[j] == arrF[i])
            {
                isIn = true;
                break;
            }
        }
        if (!isIn)
        {
            break;
        }
    }
    cout << "Result: " << (isIn ? "True" : "False") << endl;
}
void operationAddition(int* arrF, int sizeF, int* universum, int sizeUniversum)//Дополнит до универсема !А
{
    set<int> st;
    for (int i=0; i< sizeUniversum; i++)
    {
        int i2=0;
        for(; i2< sizeF; i2++)
        { 
            if (universum[i]== arrF[i2])
                break;
        }
        if(i2 == sizeF)
            st.insert(universum[i]);
    }

    cout << "Result = [ ";
    for (int n : st)
    {
        cout << n << " ";
    }
    cout << "]" << endl;
}
void operationAdditionNum(int* arr, int size, int num)
{
    for (int i = 0; arr[i] != size; i++)
    {
        if (num == arr[i])
        {
            cout << "Result: True" << endl;
            return;
        }
    }
    cout << "Result: False" << endl;
}