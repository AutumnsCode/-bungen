#include "std_lib_inc.h"

//Aufgabe 2.3: Wortwiederholungen
//Implementieren Sie das Beispiel auf Folie 2-5 und testen Sie es auf der folgenden Eingabe:
//Sie sie lacht Er Er Er weil was er sie tat tat nicht sehr sehr gut gut. Wieviele wiederholte Worte gibt
//das Programm aus? Warum? Welche Definition von wiederholtem Wort wird hier implizit angenommen?
//Testen Sie auch andere Eingaben.
int main()
{
    int word_index = 0;
    string previous = "";
    string current;
    while(cin >> current)
    {
        ++word_index;
        if(previous == current)
            cout << "Wortwiederholung: " << current << " (Wort-Index " << word_index << ")\n";
        previous = current;
    }
}
// ER 5,6
// tat 12
// sehr 15
// gut 17
// Wiederholungen nur wenn sie genau gleich sind
