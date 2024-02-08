//Schreiben Sie ein Programm, welches Yen, Schwedische Kronen, Pfund und Dollar in Euro umrechnet. Die/Der AnwenderIn soll zunächst den Wert und dann ein Zeichen für die Währung aus
//der konvertiert werden soll eingeben. Nutzen sie Y für Yen, K für Kronen, P für Pfund und D für
//Dollar. Also beispielsweise soll für die Eingabe 30 D die Ausgabe 30 Dollar umgerechnet in Euro
//sein. Wird eine unbekannte Währung eingegeben, soll eine Fehlermeldung ausgegeben werden.
//Sie finden tagesaktuelle Umrechnungskurse im Internet. Schreiben Sie das Programm einmal
//        mithilfe einer if-Anweisung und einmal mithilfe einer switch-Anweisung.

#include "std_lib_inc.h"

int main() {
    constexpr double yen = 0.0063;
    constexpr double kronen = 0.089;
    constexpr double pfund = 1.17;
    constexpr double dollar = 0.93;

    char waehrung;

    double eingabe = 0.0;
    double ausgabe = 0.0;

    cout << "Bitte gibe eine Zahl in \n";
    cin >> eingabe >> waehrung;

    switch (waehrung) {
        case 'Y':
            ausgabe = eingabe * yen;
            cout << eingabe <<"Yen sind in Euro " << ausgabe << "\n";
            break;
        case 'D':
            ausgabe = eingabe * dollar;
            cout << eingabe << " Dollar sind in Euro " << ausgabe << "\n";
            break;
        case 'P':
            ausgabe = eingabe * pfund;
            cout << eingabe <<" Pfund sind in Euro " << ausgabe << "\n";
            break;
        case 'K':
            ausgabe = eingabe * kronen;
            cout << eingabe <<" Kronen sind in Euro" << ausgabe << "\n";
            break;
        default:
            cout << "Die Waehrung ist unbekannt.\n";
            break;
    }
}
