## Datenstruktur

```
### Definieren einer Struktur Go
```
type Struktur_Name struct {
	Mitglieder_Name [Länge]Datentypen
}
```



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