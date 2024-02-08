//Schreiben Sie ein Programm, welches aus eine while-Schleife besteht, die in jeder
//Iteration zwei ganze Zahlen liest und sie ausgibt. Das Programm soll enden, wenn das Zeichen
//q (oder irgendein anderes Zeichen, was keine Ziffer ist) eingegeben wird.

#include "std_lib_inc.h"

//int main() {
//    int num1, num2;
//    cout << "Gebe zwei Zahlen ein\n";
//    cin >> num1 >> num2;
//    while(cin) {
//        cout << num1 << "\t" << num2 << "\n";
//        cout << "\n";
//        cout << "Gebe zwei Zahlen ein\n";
//        cin >> num1 >> num2;
//    }
//}

//Ändern Sie das Programm, sodass statt der obigen Ausgabe zwei Zeilen ausgegeben werden:
//Die kleinere Zahl ist: gefolgt von der kleineren der beiden Zahlen.
//Die größere Zahl ist: gefolgt von der größeren der beiden Zahlen

//int main() {
//    int num1, num2;
//    cout << "Gebe zwei Zahlen ein\n";
//    cin >> num1 >> num2;
//
////    Überprüft, ob die Eingabe wirklich ein Integer ist, sofern wahr folgt die Ausgabe und Abfrage
//    while(cin) {
//        // Ausgabe mit der Unterteilung, ob die Zahl 1 < oder > ist als Zahl2
//        if (num1 < num2 )  {
//            cout << "Die kleinere Zahl ist: " << num1 << "\n";
//            cout << "Die groessere Zahl ist: " << num2 << "\n";
//        } else {
//            cout << "Die kleinere Zahl ist: " << num2 << "\n";
//            cout << "Die groessere Zahl ist: " << num1 << "\n";
//        }
//        cout << "\n";
//
//        // Abfrage für die nächsten Zahlen
//        cout << "Gebe zwei Zahlen ein\n";
//        cin >> num1 >> num2;
//    }
//}
//Bei zwei gleichen Zahlen ist die obige Ausgabe unbefriedigend. Ändern Sie das Programm,
//sodass es bei zwei gleichen Zahlen (und nur dann) Die Zahlen sind gleich! ausgibt.
//int main() {
//    int num1, num2;
//    cout << "Gebe zwei Zahlen ein\n";
//    cin >> num1 >> num2;
//
////    Überprüft, ob die Eingabe wirklich ein Integer ist, sofern wahr folgt die Ausgabe und Abfrage
//    while(cin) {
//        // Ausgabe mit der Unterteilung, ob die Zahl 1 < oder > oder = ist als Zahl2
//        if (num1 < num2 )  {
//            cout << "Die kleinere Zahl ist: " << num1 << "\n";
//            cout << "Die groessere Zahl ist: " << num2 << "\n";
//        } else if(num1 > num2){
//            cout << "Die kleinere Zahl ist: " << num2 << "\n";
//            cout << "Die groessere Zahl ist: " << num1 << "\n";
//        } else {
//            cout << "Die Zahlen sind gleich.\n";
//        }
//        cout << "\n";
//
//        // Abfrage für die nächsten Zahlen
//        cout << "Gebe zwei Zahlen ein\n";
//        cin >> num1 >> num2;
//    }
//}

// Ändern Sie das Programm, sodass es double statt int verwendet.
//int main() {
//    double num1, num2;
//    cout << "Gebe zwei Zahlen ein\n";
//    cin >> num1 >> num2;
//
////    Überprüft, ob die Eingabe wirklich ein Integer ist, sofern wahr folgt die Ausgabe und Abfrage
//    while(cin) {
//        // Ausgabe mit der Unterteilung, ob die Zahl 1 < oder > oder = ist als Zahl2
//        if (num1 < num2 )  {
//            cout << "Die kleinere Zahl ist: " << num1 << "\n";
//            cout << "Die groessere Zahl ist: " << num2 << "\n";
//        } else if(num1 > num2){
//            cout << "Die kleinere Zahl ist: " << num2 << "\n";
//            cout << "Die groessere Zahl ist: " << num1 << "\n";
//        } else {
//            cout << "Die Zahlen sind gleich.\n";
//        }
//        cout << "\n";
//
//        // Abfrage für die nächsten Zahlen
//        cout << "Gebe zwei Zahlen ein\n";
//        cin >> num1 >> num2;
//    }
//}

//Das Programm soll nun nur Die Zahlen sind fast gleich! ausgeben, wenn sie sich
//um weniger als 1.0/100.0 unterscheiden, aber nicht gleich sind. Unterscheiden sich die
//Zahlen um mehr als 1.0/100.0, so sollen weiterhin die Ausgaben aus Aufgabenteil (b)
//erscheinen, bei Gleichheit die Ausgabe aus Teil (c).
//int main() {
//    double num1, num2, difference;
//    cout << "Gebe zwei Zahlen ein\n";
//    cin >> num1 >> num2;
//
////    Überprüft, ob die Eingabe wirklich ein Integer ist, sofern wahr folgt die Ausgabe und Abfrage
//    while(cin) {
//        // Ausgabe mit der Unterteilung, ob die Zahl 1 < oder > oder = ist als Zahl2
//        if (num1 < num2 )  {
//            difference = num2 - num1;
//            if(difference < 0.001) {
//                cout << "Die Zahlen sind fast gleich.\n";
//            } else {
//                cout << "Die kleinere Zahl ist: " << num1 << "\n";
//                cout << "Die groessere Zahl ist: " << num2 << "\n";
//            }
//        } else if(num1 > num2){
//            difference = num1 - num2;
//            if(difference < 0.001) {
//                cout << "Die Zahlen sind fast gleich.\n";
//            } else {
//                cout << "Die kleinere Zahl ist: " << num2 << "\n";
//                cout << "Die groessere Zahl ist: " << num1 << "\n";
//            }
//        } else {
//            cout << "Die Zahlen sind gleich.\n";
//        }
//        cout << "\n";
//
//        // Abfrage für die nächsten Zahlen
//        cout << "Gebe zwei Zahlen ein\n";
//        cin >> num1 >> num2;
//    }
//}

//Ändern Sie nun das Programm so, dass nur noch eine Zahl pro Iteration gelesen wird.
//Definieren Sie oberhalb der Schleife zwei Variablen, in denen Sie sich die bisher kleinste
//und größte eingegebene Zahl merken. Um dies zu erreichen, lesen Sie einmal vor Beginn
//der Schleife eine Zahl ein und speichern sie diese als kleinste und größte Zahl ab. Lassen
//Sie jede Eingegebene Zahl einmal ausgeben (auch die erste). Wenn die eingegebene Zahl
//die kleinste bisherige Zahl ist, geben Sie Die kleinste Zahl bis jetzt. aus. Ist die
//Zahl die größte bisher eingegebene Zahl, geben Sie Die größte Zahl bis jetzt. aus.
//Vergessen Sie nicht, dass diese Ausgabe auch für die erste eingegebene Zahl passieren
//soll.

//int main() {
//    double num,lowestNum, largestNum, prev, difference;
//    cout << "Bitte gib eine Zahl ein.\n";
//    cin >> num;
//
//    // Beim ersten Mal wird die Zahl jeweils auf die kleinste und laengste Variable überschrieben
//    lowestNum = num;
//    largestNum = num;
//    // Ausgabe dass es jeweils die kleinste und laengste Zahl ist
//    cout << "Die kleinste bis jetzt.\n";
//    cout << "Die groesste Zahl bis jetzt.\n";
//
//    // Abspeichern der Zahl in ein neue Variable zum spaeteren Vergleich
//    prev = num;
//
//    while(cin) {
//        // Sofern die Zahl am niedrigste ist, speichert es in der lowestNum ab und gibt ein cout aus
//        // Sofern die Zahl am groessten ist, speichert es in der lowestNum ab und gibt ein cout aus
//        if(num < lowestNum) {
//            lowestNum = num;
//            cout << "Die kleinste bis jetzt.\n";
//        } else if (num < largestNum) {
//            largestNum = num;
//            cout << "Die groesste Zahl bis jetzt.\n";
//        }
//
//        // Ausgabe mit der Unterteilung, ob die Zahl < oder > oder = ist als die Vorherige
//        if (num < prev )  {
//            difference = prev - num;
//            if(difference < 0.001) {
//                cout << "Die Zahlen sind fast gleich.\n";
//            } else {
//                cout << "Die kleinere Zahl ist: " << num << "\n";
//                cout << "Die groessere Zahl ist: " << prev << "\n";
//            }
//        } else if(num > prev){
//            difference = num - prev;
//            if(difference < 0.001) {
//                cout << "Die Zahlen sind fast gleich.\n";
//            } else {
//                cout << "Die kleinere Zahl ist: " << prev << "\n";
//                cout << "Die groessere Zahl ist: " << num << "\n";
//            }
//        } else {
//            cout << "Die Zahlen sind gleich.\n";
//        }
//
//        // Speichert die Zahl ab am Ende
//        prev = num;
//
//        // Auffordung zur nächste Eingabe
//        cout << "\n";
//        cout << "Bitte gib eine Zahl ein.\n";
//        cin >> num;
//    }
//}

//Lassen Sie zu jeder Zahl eine Einheit eingeben, also Eingaben wie 10 cm, 2.5 in, 5 ft,
//3.33 m. Es genügt die Einheiten cm, in (Inch), ft (Feet) und m zu akzeptieren. Nutzen Sie
//die folgenden Konvertierungsfaktoren: 1 m == 100 cm, 1 in == 2.54 cm und 1 ft == 12 in.
//Lesen Sie die Einheit in einen string. Es ist einfacher, wenn Sie ein Leerzeichen zwischen
//der Zahl und der Einheit zulassen. Die Ausgabe von der kleinsten oder größten Zahl soll
//sich jetzt auf die Länge in Metern beziehen. Beipielsweise ist 1 in kleiner als 0.5 m.

//int main() {
//    double num,conNum, prevNum, lowestNum, largestNum, prev, difference;
//    string unit, prevUnit;
//    constexpr double conMeter = 100;
//    constexpr double conIn = 2.54;
//    constexpr double conFt = conIn * 12;
//    int count = 0;
//
//    cout << "Bitte gib eine Laenge mit einer Einheit ein: \n";
//    cin >> num >> unit;
//
//    while(cin) {
//        ++count;
//        cout << "Die Laenge betraegt: " << num << " " << unit << "\n";
//
//        if(count == 1) {
//            lowestNum = num;
//            largestNum = num;
//            cout << "Die kleinste Laenge bis jetzt.\n";
//            cout << "Die groesste Laenge bis jetzt.\n";
//        } else {
//            if(num < lowestNum) {
//                lowestNum = num;
//                cout << "Die kleinste Laenge bis jetzt.\n";
//            } else if(num > largestNum) {
//                largestNum = num;
//                cout << "Die groesste Laenge bis jetzt.\n";
//            }
//        }
//
//        if(count == 1) {
//            if(unit == "m") {
//                conNum = num * conMeter;
//            } else if(unit == "cm") {
//                conNum = num;
//            } else if(unit == "in") {
//                conNum = num * conIn;
//            } else if(unit == "ft") {
//                conNum = num * conFt;
//            }
//
//            prev = num;
//            prevNum = conNum;
//            prevUnit = unit;
//
//            cout << "\n";
//            cout << "Bitte gib eine Laenge mit einer Einheit ein: \n";
//            cin >> num >> unit;
//        } else {
//            if(unit == "m") {
//                conNum = num * conMeter;
//            } else if(unit == "cm") {
//                conNum = num;
//            } else if(unit == "in") {
//                conNum = num * conIn;
//            } else if(unit == "ft") {
//                conNum = num * conFt;
//            }
//
//            if(conNum < prevNum) {
//                difference = prevNum - conNum;
//                if(difference < 0.001) {
//                    cout << "Die beiden Laenge unterscheiden sich in " << difference << "cm. \n";
//                } else {
//                    cout << num << " " << unit << " ist kleiner als " << prev << " " << prevUnit << "\n";
//                }
//            } else if(conNum > prevNum) {
//                difference = conNum - prevNum;
//                if(difference < 0.001) {
//                    cout << "Die beiden Laenge unterscheiden sich in " << difference << "cm. \n";
//                } else {
//                    cout << num << " " << unit << " ist groesser als " << prev << " " << prevUnit << "\n";
//                }
//            } else {
//                cout << "Die Laenge stimmen ueberein.\n";
//            }
//            prev = num;
//            prevNum = conNum;
//            prevUnit = unit;
//
//            cout << "\n";
//            cout << "Bitte gib eine Laenge mit einer Einheit ein: \n";
//            cin >> num >> unit;
//        }
//    }
//}


// Sollte eine unbekannte Einheit eingegeben werden, dann geben Sie eine Fehlermeldung
//aus und machen mit der nächsten Iteration weiter.

int main() {
    double num,conNum, prevNum, lowestNum, largestNum, prev, difference;
    double summe;
    string statistic;
    string unit, prevUnit;
    constexpr double conMeter = 100;
    constexpr double conIn = 2.54;
    constexpr double conFt = conIn * 12;
    int count = 0;

    cout << "Bitte gib eine Laenge mit einer Einheit ein: \n";
    cin >> num >> unit;
        while(cin) {
            if(unit != "m" && unit != "cm" && unit != "in" && unit != "ft" ) {
                cout << "Die Einheit ist unbekannt\n";
                cout << "Bitte gib eine Laenge mit einer Einheit ein: \n";
                cin >> num >> unit;
            } else {
                ++count;
                cout << "Die Laenge betraegt: " << num << " " << unit << "\n";
                if(unit == "m") {
                    conNum = num * conMeter;
                } else if(unit == "cm") {
                    conNum = num;
                } else if(unit == "in") {
                    conNum = num * conIn;
                } else if(unit == "ft") {
                    conNum = num * conFt;
                }

                if(count == 1) {

                    lowestNum = conNum;
                    largestNum = conNum;
                } else {
                    if(num < lowestNum) {
                        lowestNum = conNum;
                    } else if(num > largestNum) {
                        largestNum = conNum;
                    }
                }

                if(count == 1) {
                    summe += conNum ;
                    statistic += to_string(conNum/100) + "m" + "\t";
                    prev = num;
                    prevNum = conNum;
                    prevUnit = unit;

                    cout << "\n";
                    cout << "Bitte gib eine Laenge mit einer Einheit ein: \n";
                    cin >> num >> unit;
                } else {
                    if(conNum < prevNum) {
                        difference = prevNum - conNum;
                        if(difference < 0.001) {
                            cout << "Die beiden Laenge unterscheiden sich in " << difference << "cm. \n";
                        } else {
                            cout << num << " " << unit << " ist kleiner als " << prev << " " << prevUnit << "\n";
                        }
                    } else if(conNum > prevNum) {
                        difference = conNum - prevNum;
                        if(difference < 0.001) {
                            cout << "Die beiden Laenge unterscheiden sich in " << difference << "cm. \n";
                        } else {
                            cout << num << " " << unit << " ist groesser als " << prev << " " << prevUnit << "\n";
                        }
                    } else {
                        cout << "Die Laenge stimmen ueberein.\n";
                    }
                    prev = num;
                    prevNum = conNum;
                    prevUnit = unit;
                    summe += conNum ;
                    statistic += to_string(conNum/100) + "m" + "\t";

                    cout << "\n";
                    cout << "Bitte gib eine Laenge mit einer Einheit ein: \n";
                    cin >> num >> unit;
                }
            }
        }

        cout << "Statistik: \n";
        cout << "Die laengste Laenge in Meter: "<< largestNum/conMeter << "\n";
        cout << "Die kuerzte Laenge in Meter: "<< lowestNum/conMeter << "\n";
        cout << "Die summe aller Laenge in Meter: " << summe/conMeter << "\n";
        cout << "Alle Eingaben: " << statistic << "\n";
}

