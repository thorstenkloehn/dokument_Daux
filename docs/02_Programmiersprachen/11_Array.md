## Array
### Defination Array C

```
Datentypen Array_Name[Array_Länge];
```

### Defination Array C++

```
Datentypen Array_Name[Array_Länge];
```

### Defination Array Go
```
var Array_Name[Array_Länge] Datentypen
```
### Defination und Deklaration Array C
```
Datentypen Array_Name[Array_Länge]={Wert};
```
### Defination und Deklaration Array C++
```
Datentypen Array_Name[Array_Länge]={Wert};
```
### Defination und Deklaration Array Go
```	
var Array_Name = []Datentypen {Wert}
```



### Defination und Deklaration Array Javascript
```
let array_Name=[Wert];

```



### Übergabe von Arrays als Funktionsargumente in C

* 1 Weg Formale Parameter als Zeiger

```

void Funktion_Name(Datentypen*Array_Name){
Anweisung
}

```

* 2 Weg Formale Parameter als Größenarray
```
void Funktion_Name(Datentypen Array_Name[Array_Länge]){
  Anweisung 
}
```
* Formale Parameter als Array ohne Größe −
```
void Funktion_Name(Datentypen Array_Name[]) {
Anweisung
}
```

### Übergabe von Arrays als Funktionsargumente in C

* 1 Weg Formale Parameter als Zeiger

```

void Funktion_Name(Datentypen*Array_Name){
Anweisung
}

```

* 2 Weg Formale Parameter als Größenarray
```
void Funktion_Name(Datentypen Array_Name[Array_Länge]){
  Anweisung 
}
```
* 3 Weg Formale Parameter als Array ohne Größe −
```
void Funktion_Name(Datentypen Array_Name[]) {
Anweisung
}
```

### Übergabe von Arrays als Funktionsargumente in Go

* 1 Weg Formale Parameter als Array mit der Größe wie folgt.

``` 
func  Funktion_Name (Array_Name[Array_Länge]Datentypen){
Anweisung
}
```
* 2 Weg Formale Parameter als Array ohne Größe wie folgt −
```
func  Funktion_Name (Array_Name[]Datentypen){
Anweisung
}
```

### Array von Funktion in C zurückgeben

```
Datentypen*Funktion_Name() {
Anweisung
}
```

### Array von Funktion in C++ zurückgeben

```
Datentypen*Funktion_Name() {
Anweisung
}
```

### Array von Funktion in Go zurückgeben

```

func Funktion_Name() []Datentypen {

	var Array_Name = []Datentypen{Wert}

	return Array_Name
}

func main() {

	Variable_Name := Funktion_Name() //Kurz Formen

}

```

### Array von Funktion in Javascript

```

function Funktion_Name() {
    return [Wert];

}

let Variable_Name = Funktion_Name();

```
