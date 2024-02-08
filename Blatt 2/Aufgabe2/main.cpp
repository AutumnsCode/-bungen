#include "std_lib_inc.h"

//Aufgabe 2.2: Alter in Monaten
//Bringen Sie das Beispiel auf Folie 2-3 zum Laufen. Modifizieren Sie das Program so, dass das
//Programm das Alter in Monaten ausgibt. Lesen Sie das Alter in Jahren ein und multiplizieren
//es mit 12 (nutzen Sie den *-Operator). Damit auch Kinder stolz zeigen können, dass sie schon
//fünfeinhalb Jahre alt sind, lesen Sie das Alter in eine double-Variable ein.
int main(){
    cout << "Bitte gib deinen Namen und dein Alter ein\n";
    string name; // Zeichenketten-Variable
    double alter; // Ganzzahlige Variable
    cin >> name; // Lies Zeichenkette
    cin >> alter; // Lies ganze Zahl
    cout << "Hallo " << name << " (Alter" << alter * 12 << " in Monate)\n";
}
