#include "std_lib_inc.h"

//Implementieren Sie das Programm auf Folie 2-7. Lagern Sie die Berechnung der Durchschnittstemperatur
//in eine Funktion double durchschnittBerechnen(vector<double> eingabe) aus.

//double durchschnittBerechnen(vector<double> eingaben);
//int main(){
//    vector<double> temperaturen; // vector um Temperaturen zu speichern
//
//    while(cin) {
//        // einlesen der Temperaturen von der Tastatur
//        for(double temperatur; cin >> temperatur;) {
//
//            // gelesene Temperatur hinten in vector schreiben
//            temperaturen.push_back(temperatur);
//        }
//    }
//    cout << "Die Durchschnittstemperatur ist " << durchschnittBerechnen(temperaturen) << '\n';
//}
//
//// Durchschnittstemperatur berechnen
//double durchschnittBerechnen(vector<double> eingaben) {
//    double summe = 0.0;
//
//    for(double eingabe : eingaben) {
//        summe += eingabe;
//    }
//
//    return summe / eingaben.size();
//}

//Stellen Sie sich vor, statt einer Folge von Temperaturen soll die Folge von double-Werten
//Abstände von einem Wegpunkt zum nächsten bei einer Wegbeschreibung kodieren.
//Schreiben Sie die Variablennamen und die Ausgabe um und kommentieren Sie ihr Programm entsprechend.

double berechnenDurchschnitt(vector<double> eingaben);
double berechnenSumme(vector<double> eingaben);
double kleinsterAbstand(vector<double> eingaben);
double grossterAbstand(vector<double> eingaben);

int main() {
    vector<double> abstaenden;

    for(double abstaende; cin >> abstaende;) {
        abstaenden.push_back(abstaende);
    }

    double kleinsterWert = kleinsterAbstand(abstaenden);
    double groessterWert = grossterAbstand(abstaenden);

    cout << "Die Durchschnittsabstaende zwischen den Abstaende "
        << berechnenDurchschnitt(abstaenden) << "\n";
    cout << "Die Gesamtstrecke betraegt "
         << berechnenSumme(abstaenden) << "\n";
    cout << "Kleinster Abstand: " << kleinsterWert << "\n";
    cout << "Groesster Abstand: " << groessterWert << "\n";
}

double berechnenDurchschnitt(vector<double> eingaben) {
    double summe = berechnenSumme(eingaben);

    return summe / eingaben.size();
}

//Schreiben Sie eine Funktion, die gegeben ein vector<double> die Summe der Einträge
//berechnet und zurückgibt. Nutzen Sie in der Funktion durchschnittBerechnen diese neue
//Funktion, um die Summe zu berechnen und geben Sie nun zusätzlich zur Durchschnittslänge
//auch die Summe der Abstände aus.

double berechnenSumme(vector<double> eingaben) {
    double summe;

    for(double eingabe : eingaben) {
        summe += eingabe;
    }

    return summe;
}

//Schreiben Sie zwei Funktionen, eine soll den kleinsten Abstand, die andere den größten
//Abstand aus einem vector<double> zurückgeben. Nutzen Sie auch diese Funktionen, um
//weitere Informationen über die eingegebenen Abstände auszugeben

double kleinsterAbstand(vector<double> eingaben) {
    double minAbstand = eingaben[0];
    
    for(int i = 0; i < eingaben.size(); ++i) {
        if(eingaben[i] < minAbstand) {
            minAbstand = eingaben[i];
        }
    }
    return minAbstand;
}

double grossterAbstand(vector<double> eingaben) {
    double maxAbstand = eingaben[0];

    for(int i = 0; i < eingaben.size(); ++i) {
        if(eingaben[i] > maxAbstand) {
            maxAbstand = eingaben[i];
        }
    }
    return maxAbstand;
}

//Versuchen Sie Ihr Programm dazu zu bringen falsche Ausgaben zu produzieren oder abzustürzen.
//Reagiert Ihr Programm richtig, wenn der/die AnwenderIn keine Zahlen eingibt?
