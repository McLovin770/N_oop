#include <iostream>
#include <string>
using namespace std;
#define DEBUGoff
// #define скобка {;
// #define HUMAN Oleg
// //#ifdef - если опребелено
// //#ifndef - если не определено

// int main()скобка
// #if HUMAN == Oleg
//     cout << "hello Oleg" << endl;
// #else 
//     cout << "mdo" << endl;
// #endif
// }


int main(){
#ifdef DEBUG
    cout << "start" << endl;
#endif
    for (int i = 0; i <4; i++){
        cout << i << " ";
    }
    cout << endl;
#ifdef DEBUG
    cout << "end" << endl;
#endif
}