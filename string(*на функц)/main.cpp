#include <iostream>
#include <string>
using namespace std;

void ShowIt(void(*foo)(int a)){ // main ficha
    foo(10);
}

void DataFromBd(int a){
    cout << "data from bd" << a << endl;
}

void DataFromServer(int b){
    cout << sizeof(double(b)) << sizeof(10) << endl;
}

void DataFromHub(int c){
    cout << "data from hub" << c << endl; 
}

void foo(){
    cout << 'h' << endl;
}

int main(){
    ShowIt(DataFromServer); //позволяет вызвать функцию в функции, имба крч
    void (*fooPointer)();
    fooPointer = foo;
    fooPointer();

}