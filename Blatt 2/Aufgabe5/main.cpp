#include <iostream>

//Aufgabe 2.5: Gerade oder Ungerade?
//Schreiben Sie ein Programm, welches den/die AnwenderIn nach einer beliebigen ganzen Zahl
//        fragt. Ihr Programm soll die Zahl in einer Variable speichern, z.B. n, und je nachdem ob die Zahl
//gerade oder ungerade ist eines von zwei Zeichenketten ausgeben: Wenn die Zahl gerade ist soll
//„Die Zahl n ist eine gerade Zahl.“ und sonst „Die Zahl n ist eine ungerade Zahl.“ ausgegeben
//        werden. Dabei soll n jeweils mit dem Wert von n ersetzt werden. Sie können falsche Eingaben
//        (z.B. andere Zeichen als Ziffern) in dieser Aufgabe ignorieren.
//Hinweis: Schauen Sie sich den Rest- oder Modulo-Operator „%“ an, probieren Sie ihn aus und
//        überlegen Sie, wie er Ihnen weiterhelfen könnte.
#include "std_lib_inc.h"
int main() {
    int n;
    cout << "Bitte gib eine Zahl ein: \n";
    cin >> n;

    if(n % 2 == 0) {
        cout << "Die Zahl " << n << " ist gerade.\n";
    } else {
        cout << "Die Zahl " << n << " ist ungerade.\n";
    }
}
