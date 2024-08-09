#include <iostream>
#include <string>
#include <ctime>
#include "sort.h"
using namespace std;

int main(){
    int size;
    cin >> size;
    int *arr = new int [size];
    fillArr(arr, size);
    showArr(arr, size);
    sort(arr, size);
    showArr(arr, size);
    delete [] arr;
    arr = nullptr;
}