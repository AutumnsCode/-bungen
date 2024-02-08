#include "std_lib_inc.h"
//Schreiben Sie ein Programm, das Wörter ausblendet, die Ihnen nicht gefallen. Das heißt, Sie
//lesen Wörter von cin und schreiben Sie nach cout. Lesen Sie ein Wort, welches sie vorher
//im Quelltext als unzulässig definiert haben, so soll statt des Wortes BEEP ausgegeben werden.
//Starten Sie zunächst mit einem Wort, welches Sie per
//string unzulaessig = "Brokkoli";
//definieren. Wenn das Programm läuft, nutzen Sie einen vector<string>, um statt eines Wortes,
//        eine Menge solcher Wörter zu definieren.
//Hinweis: Gehen Sie davon aus, dass die Eingabe keine Satzzeichen enthält
int main() {
    vector<string> unzuverlaessig = {"Brokoli"};
    string worter;

    cout << "Geben Sie ein Satz ein: ";
    while(cin >> worter) {
        bool isUnzuverlaessig = false;

        for(const string& verboteneWort : unzuverlaessig) {
            if(worter == verboteneWort) {
                isUnzuverlaessig = true;
            }
        }

        if(isUnzuverlaessig == true) {
            cout << "BEEP" << " ";
        } else {
            cout << worter << " ";
        }
    }
}
