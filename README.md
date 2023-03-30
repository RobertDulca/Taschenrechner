# Taschenrechner mit schrittweiser Ergebnisanzeige
 
Ihr Rechenprogramm liest zeilenweise Zahlen, Operatoren und Klammern ein, speichert diese in einer verketteten Liste und wertet diese dann als einen einzigen Ausdruck aus.

## Eingabe

Als Eingabe kommen Integer-Zahlen, Operatoren und Klammern ('+', '-', '*', '/', '(', ')'). Sie können mit der Funktion inputToNode, die bereits implementiert ist, Eingaben in entsprechende Knoten umwandeln, implementieren Sie dazu noch die fehlenden Funktionen createParenthesisNode, createOperatorNode und createNumberNode (siehe auch Vorausfüllung in Antwort).
Die Eingaben sollen in einer verketteten Liste gespeichert werden. Jeder Knoten der Liste kann sowohl einen char für den Operator als auch einen Integer für eine Zahl speichern. Zusätzlich enthält der Knoten einen enum-Typen der angibt, ob es sich um einen Operator oder eine Zahl handelt.
Jeder neue Knoten wird am Ende der Liste eingefügt und nach jedem Einfügen soll die Liste ausgegeben werden.
Die Eingabe wird durch ein '=' beendet. Dieser Operator wird nicht mehr in die Liste eingefügt.

## Auswertung

Wurde die Eingabe beendet soll die Liste in drei Schritten ausgewertet werden. Dabei wird sie vom Anfang zum Ende hin ausgewertet. Es gelten folgende Regeln:

Es werden nur Integerrechnungen durchgeführt.
Divisionen durch 0 werden zu Divisionen durch 1.
Im ersten Schritt werden Klammern aufgelöst und berechnet (Hinweis: Suchen Sie nach der letzten öffnenden Klammer und lösen Sie diese zuerst auf)
Im zweiten Schritt werden nur Punktoperationen durchgeführt (Multiplikation und Division).
Im dritten Schritt werden nur Strichoperationen durchgeführt (Addition und Subtraktion).
Immer wenn ein Operator ausgewertet wird und eine Berechnung stattfindet soll die Liste danach neu ausgegeben werden. Zum Beispiel:

(2 + 8) / 5 * 4 - 3

(10) / 5 * 4 - 3

2 * 4 - 3

8 - 3

5
