
#include  "std_lib_inc.h"

//Aufgabe 2.4: Mehr Compiler-Fehler
//        Kopieren Sie das Beispiel auf Folie 2-6 genau so, wie es dort steht. Findet der Compiler alle
//Fehler? Welche Fehler hat er gefunden, warum? Berichtigen Sie die Fehler nacheinander beginnend mit dem Ersten und übersetzen Sie jedes mal neu. Betrachten Sie genau, wie sich die
//        Fehlermeldungen ändern und versuchen Sie zu erklären, warum sich die Meldungen ändern.

//int Main()
//{
//    STRING s = "Dies ist eine Zeichenkette";
//    cOut << S << '\n';
//}

// Fehlermeldung 1
//[1/2] Building CXX object CMakeFiles/Aufgabe4.dir/main.cpp.obj
//        FAILED: CMakeFiles/Aufgabe4.dir/main.cpp.obj
//        C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE   -g -fdiagnostics-color=always -MD -MT CMakeFiles/Aufgabe4.dir/main.cpp.obj -MF CMakeFiles\Aufgabe4.dir\main.cpp.obj.d -o CMakeFiles/Aufgabe4.dir/main.cpp.obj -c "C:/Users/stefa/OneDrive/Desktop/Universität/Einführung in die Programmierung/Übungen/Blatt 2/Aufgabe4/main.cpp"
//C:/Users/stefa/OneDrive/Desktop/UniversitÃ¤t/EinfÃ¼hrung in die Programmierung/Ãœbungen/Blatt 2/Aufgabe4/main.cpp: In function 'int Main()':
//C:/Users/stefa/OneDrive/Desktop/UniversitÃ¤t/EinfÃ¼hrung in die Programmierung/Ãœbungen/Blatt 2/Aufgabe4/main.cpp:11:5: error: 'STRING' was not declared in this scope; did you mean 'SING'?
//11 |     STRING s = "Dies ist eine Zeichenkette";
//|     ^~~~~~
//|     SING
//C:/Users/stefa/OneDrive/Desktop/UniversitÃ¤t/EinfÃ¼hrung in die Programmierung/Ãœbungen/Blatt 2/Aufgabe4/main.cpp:12:5: error: 'cOut' was not declared in this scope
//12 |     cOut << S << '\n';
//|     ^~~~
//C:/Users/stefa/OneDrive/Desktop/UniversitÃ¤t/EinfÃ¼hrung in die Programmierung/Ãœbungen/Blatt 2/Aufgabe4/main.cpp:12:13: error: 'S' was not declared in this scope
//12 |     cOut << S << '\n';
//|             ^
//C:/Users/stefa/OneDrive/Desktop/UniversitÃ¤t/EinfÃ¼hrung in die Programmierung/Ãœbungen/Blatt 2/Aufgabe4/main.cpp:13:1: warning: no return statement in function returning non-void [-Wreturn-type]
//13 | }
//| ^
//ninja: build stopped: subcommand failed.
//int main()
//{
//    STRING s = "Dies ist eine Zeichenkette";
//    cOut << S << '\n';
//}

// error: 'STRING' was not declared in this scope; did you mean 'SING'
// error: 'cOut' was not declared in this scope
// error: 'S' was not declared in this scope

//int main()
//{
//    string s = "Dies ist eine Zeichenkette";
//    cOut << S << '\n';
//}

// error: 'cOut' was not declared in this scope
// error: 'S' was not declared in this scope

//int main()
//{
//    string s = "Dies ist eine Zeichenkette";
//    cout << S << '\n';
//}

// error: 'S' was not declared in this scope
int main()
{
    string s = "Dies ist eine Zeichenkette";
    cout << s << '\n';
}