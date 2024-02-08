#include "std_lib_inc.h"

//Schreiben Sie ein Programm, welches die/den AnwenderIn nach Anzahlen von Euro-Münzen
//fragt. Fragen Sie nach 1-Cent-, 2-Cent-, 5-Cent- 10-Cent-, 20-Cent-, 50-Cent-, 1-Euro- und 2-
//Euro-Münzen. Geben Sie dann für die jeweilige Münzart aus, wie viele Münzen vorhanden sind,
//z.B. mit Sie haben 6 1-Euro-Münzen. Lassen Sie dabei die Arten aus, für die 0 Münzen angegeben wurde. Machen Sie die Ausgabe grammatikalisch korrekt: Es heißt 2 1-Euro-Münzen,
//aber eine 1-Euro-Münze. Geben Sie am Ende die Summe der Werte in Cent aus.

int main() {
    int anzahl2Euro;
    int anzahl1Euro;
    int anzahl50Cent;
    int anzahl20Cent;
    int anzahl10Cent;
    int anzahl5Cent;
    int anzahl2Cent;
    int anzahl1Cent;

    cout << "Gib die Anzahl von 2 Euro Muenzen\n";
    cin >> anzahl2Euro;
    cout << "Gib die Anzahl von 1 Euro Muenzen\n";
    cin >> anzahl1Euro;
    cout << "Gib die Anzahl von 50 Cent Muenzen\n";
    cin >> anzahl50Cent;
    cout << "Gib die Anzahl von 20 Cent Muenzen\n";
    cin >> anzahl20Cent;
    cout << "Gib die Anzahl von 10 Cent Muenzen\n";
    cin >> anzahl10Cent;
    cout << "Gib die Anzahl von 5 Cent Muenzen\n";
    cin >> anzahl5Cent;
    cout << "Gib die Anzahl von 2 Cent Muenzen\n";
    cin >> anzahl2Cent;
    cout << "Gib die Anzahl von 1 Cent Muenzen\n";
    cin >> anzahl1Cent;

    if(anzahl2Euro != 0) {
        cout << anzahl2Euro << " 2-Euro-Muenzen.\n";
    }

    if(anzahl1Euro != 0) {
        cout << anzahl1Euro << " 1-Euro-Muenzen.\n";
    }

    if(anzahl50Cent != 0) {
        cout << anzahl50Cent << " 50-Cent-Muenzen.\n";
    }

    if(anzahl20Cent != 0) {
        cout << anzahl20Cent << " 20-Cent-Muenzen.\n";
    }

    if(anzahl10Cent != 0) {
        cout << anzahl10Cent << " 10-Cent-Muenzen.\n";
    }

    if(anzahl5Cent != 0) {
        cout << anzahl5Cent << " 5-Cent-Muenzen.\n";
    }
    if(anzahl2Cent != 0) {
        cout << anzahl2Cent << " 2-Cent-Muenzen.\n";
    }
    if(anzahl1Cent != 0) {
        cout << anzahl1Cent << " 1-Cent-Muenzen.\n";
    }
}
