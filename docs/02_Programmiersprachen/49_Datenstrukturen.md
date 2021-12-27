## Datenstruktur
### Definieren einer Struktur C
```
struct Struktur_Name {
    Datentypen Mitglieder_Name[Länge];
} Struktur_Name;
```

### Definieren einer Struktur C++
```
struct Struktur_Name {
 Datentypen Mitglieder_Name[Länge];
} Struktur_Name;
```
### Definieren einer Struktur Go
```
type Struktur_Name struct {
	Mitglieder_Name [Länge]Datentypen
}
```
### Definieren einer Struktur Rust
```
struct Struktur_Name {
    Mitglieder_Name: Datentypen,
}
````

### Auf Strukturmitglieder zugreifen C

```

#include<stdio.h>
#include<string.h>
struct Book {
    char Titel[50];
    char Inhalt[5000];
    double Preis;
};
 void main() {

     struct Book book;
     strcpy(book.Titel,"Titel");
     strcpy(book.Inhalt,"Inhalt");
     book.Preis = 100.59;
     printf("%s, %s, %f",book.Inhalt,book.Preis);
}


```

### Auf Strukturmitglieder zugreifen C++

```

#include<stdio.h>
#include<string.h>
struct Book {
    char Titel[50];
    char Inhalt[5000];
    double Preis;
};
 void main() {

     struct Book book;
     strcpy(book.Titel,"Titel");
     strcpy(book.Inhalt,"Inhalt");
     book.Preis = 100.59;
     printf("%s, %s, %f",book.Inhalt,book.Preis);
}
```
### Auf Strukturmitglieder zugreifen Go

```
package main

import "fmt"

type Buch struct {
	Titel string
	Autoren string
	Buch_id int

}
func main() {
	var buch Buch
	buch.Titel = "Titel"
	buch.Autoren = "Thorsten Klöhn"
	buch.Buch_id = 1235434
	fmt.Println(buch)
}

```