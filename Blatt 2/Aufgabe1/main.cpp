#include "std_lib_inc.h"
/*
 * Lassen Sie nach jeder Teilaufgabe das Programm laufen und stellen Sie sicher, dass es tut was
 * Sie erwarten.
 */
 /*
  * Folie 2-1
  * int main() {
      cout << "Bitte gib deinen Namen ein (drücke danach 'enter'):\n";
      string name; // name ist eine Variable vom Typ string
      cin >> name; // Lies ein oder mehrere Zeichen in name
      cout << "Hallo " << name << "!\n";
    }
  */

/*
 * teilaufgabe a
 * (a) In dieser Aufgabe lassen wir ein Programm einen Brief schreiben. Lehnen Sie Ihr Programm an das Programm auf Folie 2-2 an.
 * Fragen Sie den/die AnwenderIn nach seinem/ihrem Namen und beginnen Sie den Brief mundartgetreu mit „Moin name,“, wobei name
 * der eingegebene Name sein soll. Vergessen Sie das Komma nicht! Dann ändern Sie die
 * Eingabeaufforderung zu „Gib den Namen des Adressaten des Briefs ein“, der Brief soll ja
 * an jemand anderes gehen.
 */

//int main() {
//    cout << "Bitte gib deinen Namen des Adressaten ein (druecke danach 'enter'):\n";
//    string name; // name ist eine Variable vom Typ string
//    cin >> name; // Lies ein oder mehrere Zeichen in name
//    cout << "Moin " << name << ",\n";
// }

/*
(b) Fügen Sie ein bis zwei Einleitungszeilen hinzu. In etwa so kreativ wie „Wie geht es dir? Mir
geht es gut. Ich vermisse dich.“ Stellen Sie dabei sicher, dass die erste Zeile eingerückt ist,
dies können Sie mit dem Steuerzeichen \t erreichen. Fügen Sie ein paar weitere Zeilen
hinzu, es ist schließlich Ihr Brief.
 */

//int main() {
//    // Alle Abfrage
//    cout << "Bitte gib deinen Namen des Adressaten ein (druecke danach 'enter'):\n";
//    string name; // name ist eine Variable vom Typ string
//    cin >> name; // Lies ein oder mehrere Zeichen in name
//    cout << "Moin " << name << ",\n";
//    cout << "\n" << "\t" << "Wie geht es dir? Mir geht es gut. Ich vermisse dich. \n";
// }

//(c) Fragen Sie den/die AnwenderIn nun nach dem Namen eines anderen Freundes oder einer
//        Freundin und speichern Sie diesen in einer Variablen mit namen freund_name. Fügen Sie
//eine Zeile zu Ihrem Brief hinzu: „Hast du freund_name in letzter Zeit gesehen?“.

//int main() {
//    // Alle variable
//    string name, freund_name; // name ist eine Variable vom Typ string
//
//
//    // Alle Abfrage
//    cout << "Bitte gib deinen Namen des Adressaten ein (druecke danach 'enter'):\n";
//    cin >> name; // Lies ein oder mehrere Zeichen in name
//    cout << "Bitte gib deinen Namen eines Freundes ein (druecke danach 'enter'):\n";
//    cin >> freund_name;
//
//    cout << "Moin " << name << ",\n";
//    cout << "\n" << "\t" << "Wie geht es dir? Mir geht es gut. Ich vermisse dich. \n";
//    cout << "Hast du " << freund_name << " in letzter Zeit gesehen?";
//}

//(d) Definieren Sie eine char-Variable freund_geschlecht und initialisieren Sie diese mit 0.
//Fragen Sie die nutzende Person nach dem Geschlecht des Freundes oder der Freundin,
//es soll m eingegeben werden, wenn der Freund männlich ist oder w, wenn die Freundin
//        weiblich ist. Das eingegebene Zeichen soll in freund_geschlecht gespeichert werden.
//Benutzen Sie dann zwei if-Anweisungen um einen der folgenden Sätze zu schreiben:
//Ist der Freund männlich: „Wenn du freund_name siehst, sag ihm bitte, er soll mich anrufen.“
//Ist die Freundin weiblich: „Wenn du freund_name siehst, sag ihr bitte, sie soll mich anrufen.“
//Hierbei soll jeweils freund_name durch den Inhalt der Variable ersetzt werden, also den
//Namen des/der FreundIn.

//int main() {
//    // Alle variable
//    string name, freund_name; // name ist eine Variable vom Typ string
//    char geschlecht = 0;
//
//    // Alle Abfrage
//    cout << "Bitte gib deinen Namen des Adressaten ein (druecke danach 'enter'):\n";
//    cin >> name; // Lies ein oder mehrere Zeichen in name
//    cout << "Bitte gib deinen Namen eines Freundes ein (druecke danach 'enter'):\n";
//    cin >> freund_name;
//    cout << "Bitte gib das Geschlecht deines Freundes ein: f oder m \n";
//    cin >> geschlecht;
//
//    cout << "Moin " << name << ",\n";
//    cout << "\n" << "\t" << "Wie geht es dir? Mir geht es gut. Ich vermisse dich. \n";
//    cout << "Hast du " << freund_name << " in letzter Zeit gesehen?\n";
//
//    if(geschlecht != 'f') {
//        cout << "Wenn du " << freund_name <<" siehst, sag ihm bitte, er soll mich anrufen.\n";
//    } else if(geschlecht != 'm') {
//        cout << "Wenn du " << freund_name <<" siehst, sag ihr bitte, sie soll mich anrufen.\n";
//    }
//}

//(e) Fragen Sie die nutzende Person nach dem Alter des/der AdressatIn und speichern Sie es
//in einer int-Variablen alter. Fügen Sie wieder eine Zeile zu dem Brief hinzu: „Ich höre,
//        du hattest gerade Geburtstag und bist alter Jahre alt geworden.“ Wenn das Alter 0 oder
//        kleiner ist, oder 110 oder mehr, rufen Sie die Funktion simple_error("Das kann nicht
//sein!"); auf. Diese Funktion wird von std_lib_inc.h bereitgestellt und ist weder Teil des
//Sprachstandards noch der Standardbibliothek.

//int main() {
//    // Alle variable
//    string name, freund_name; // name ist eine Variable vom Typ string
//    char geschlecht = 0;
//    int alter;
//
//    // Alle Abfrage
//    cout << "Bitte gib deinen Namen des Adressaten ein (druecke danach 'enter'):\n";
//    cin >> name; // Lies ein oder mehrere Zeichen in name
//    cout << "Bitte gib deinen Namen eines Freundes ein (druecke danach 'enter'):\n";
//    cin >> freund_name;
//    cout << "Bitte gib das Geschlecht deines Freundes ein: f oder m \n";
//    cin >> geschlecht;
//    cout << "Bitte gib den Alter des Adressaten ein (druecke danach 'enter'):\n";
//    cin >> alter; // Lies ein oder mehrere Zeichen in name
//
//    cout << "Moin " << name << ",\n";
//    cout << "\n" << "\t" << "Wie geht es dir? Mir geht es gut. Ich vermisse dich. \n";
//    cout << "Hast du " << freund_name << " in letzter Zeit gesehen?\n";
//
//    if(geschlecht != 'f') {
//        cout << "Wenn du " << freund_name <<" siehst, sag ihm bitte, er soll mich anrufen.\n";
//    } else if(geschlecht != 'm') {
//        cout << "Wenn du " << freund_name <<" siehst, sag ihr bitte, sie soll mich anrufen.\n";
//    }
//
//    if(alter < 0 || alter > 110) {
//        simple_error("Das kann nicht sein!");
//    } else {
//        cout << "Ich hoere, du hattest gerade Geburtstag und bist " << alter << " Jahre alt geworden.\n";
//    }
//}

//(f) Fügen Sie die folgende Zeile je nach Alter zu Ihrem Brief hinzu:
//Ist der/die FreundIn jünger als 12: „Nächstes Jahr bist du alter + 1 Jahre alt!“
//Ist der/die FreundIn genau 17 Jahre alt: „Nächstes Jahr darfst du wählen!“
//Ist der/die FreundIn über 70 Jahre alt: „Ich hoffe dir bekommt die Rente!“
//Überlegen Sie sich, wie Sie prüfen, dass das Programm auch wirklich auf alle Fälle richtig
//        reagiert. Testen Sie dann ihr Programm bis sie davon überzeugt sind, dass es tut, was Sie
//        wollen.

//int main() {
//    // Alle variable
//    string name, freund_name; // name ist eine Variable vom Typ string
//    char geschlecht = 0;
//    int alter;
//
//    // Alle Abfrage
//    cout << "Bitte gib deinen Namen des Adressaten ein (druecke danach 'enter'):\n";
//    cin >> name; // Lies ein oder mehrere Zeichen in name
//    cout << "Bitte gib deinen Namen eines Freundes ein (druecke danach 'enter'):\n";
//    cin >> freund_name;
//    cout << "Bitte gib das Geschlecht deines Freundes ein: f oder m \n";
//    cin >> geschlecht;
//    cout << "Bitte gib den Alter des Adressaten ein (druecke danach 'enter'):\n";
//    cin >> alter; // Lies ein oder mehrere Zeichen in name
//
//    cout << "Moin " << name << ",\n";
//    cout << "\n" << "\t" << "Wie geht es dir? Mir geht es gut. Ich vermisse dich. \n";
//    cout << "Hast du " << freund_name << " in letzter Zeit gesehen?\n";
//
//    if(geschlecht != 'f') {
//        cout << "Wenn du " << freund_name <<" siehst, sag ihm bitte, er soll mich anrufen.\n";
//    } else if(geschlecht != 'm') {
//        cout << "Wenn du " << freund_name <<" siehst, sag ihr bitte, sie soll mich anrufen.\n";
//    }
//
//    if(alter < 0 || alter > 110) {
//        simple_error("Das kann nicht sein!");
//    } else {
//        cout << "Ich hoere, du hattest gerade Geburtstag und bist " << alter << " Jahre alt geworden.\n";
//    }
//
//    if(alter < 12) {
//        cout << "Naechstes Jahr bist du " << alter + 1 << " Jahre alt!";
//    } else if(alter == 17 ) {
//        cout << "Naechstes Jahr darfst du waehlen.\n";
//    } else if(alter > 70) {
//        cout << "Ich hoffe dir bekommt die Rente.\n";
//    }
//}

//(g) Fügen Sie die Zeile „Viele Grüße“ und zwei weitere leere Zeilen für eine Unterschrift hinzu.
//Da man Unterschriften selten gut entziffern kann, lassen Sie noch Ihren Namen unter den
//        Brief schreiben.

int main() {
    // Alle variable
    string name, freund_name; // name ist eine Variable vom Typ string
    char geschlecht = 0;
    int alter;

    // Alle Abfrage
    cout << "Bitte gib deinen Namen des Adressaten ein (druecke danach 'enter'):\n";
    cin >> name; // Lies ein oder mehrere Zeichen in name
    cout << "Bitte gib deinen Namen eines Freundes ein (druecke danach 'enter'):\n";
    cin >> freund_name;
    cout << "Bitte gib das Geschlecht deines Freundes ein: f oder m \n";
    cin >> geschlecht;
    cout << "Bitte gib den Alter des Adressaten ein (druecke danach 'enter'):\n";
    cin >> alter; // Lies ein oder mehrere Zeichen in name

    cout << "Moin " << name << ",\n";
    cout << "\n" << "\t" << "Wie geht es dir? Mir geht es gut. Ich vermisse dich. \n";
    cout << "Hast du " << freund_name << " in letzter Zeit gesehen?\n";

    if(geschlecht != 'f') {
        cout << "Wenn du " << freund_name <<" siehst, sag ihm bitte, er soll mich anrufen.\n";
    } else if(geschlecht != 'm') {
        cout << "Wenn du " << freund_name <<" siehst, sag ihr bitte, sie soll mich anrufen.\n";
    }

    if(alter < 0 || alter > 110) {
        simple_error("Das kann nicht sein!");
    } else {
        cout << "Ich hoere, du hattest gerade Geburtstag und bist " << alter << " Jahre alt geworden.\n";
    }

    if(alter < 12) {
        cout << "Naechstes Jahr bist du " << alter + 1 << " Jahre alt!";
    } else if(alter == 17 ) {
        cout << "Naechstes Jahr darfst du waehlen.\n";
    } else if(alter > 70) {
        cout << "Ich hoffe dir bekommt die Rente.\n";
    }

    cout << "\n";
    cout << "Viele Gruesse\n" << "\n" << "\n";
    cout << "Sarah";
}