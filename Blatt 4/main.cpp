#include "std_lib_inc.h"

//Schreiben Sie ein Programm, welches mithilfe einer while-Schleife alle natürlichen Vielfachen
//der Zahl 7 ausgibt bis maximal zur Zahl 1000. Also die Zahlen 7, 14, 21, 28, .... Schreiben
//Sie dann das Programm um, sodass es eine for-Schleife statt einer while-Schleife verwendet.

int main () {
//    int zahl = 0;
    int result = 1000;

//    while (zahl<= result) {
//        cout << zahl << "\n";
//        zahl += 7;
//    }

    for (int i = 0; i <= result; i += 7) {
        cout << i << "\n";
    }
    return 0;
}