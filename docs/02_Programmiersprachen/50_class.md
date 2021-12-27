## Klasse

###  C++-Klassendefinitionen

### CMakeLists.txt
```
cmake_minimum_required(VERSION 3.1.9)
project(Projekt_Name)
add_executable(Projek_Name main.cpp Klasse_Name.h Klasse_Name.cpp)
```
### Klasse_Name.h
```
class Klassen_Name {
};
```
### main.cpp
``` 
#include "Klasse_Name.h"
int main() {
Klasse_Name klasse_Name;
return 0;
}

```
### Rust Klasse definieren

```
struct Klassen_Name {
    Mitglieder_Name:Datentypen
}
impl Klassen_Name {

fn Methoden_Name(&self) {
}
}
```

### Go Klasse definieren

```

package main

import "fmt"

type Klassen_Name struct {
	Mitglider_Name Datebntypen
}

func (Klassen_Name * Klassen_Name) Methoden_Name() {

}

func main() {
	var klassen_name Klassen_Name
	klassen_name.Mitglider_Name = Text
   fmt.Println(klassen_name.Mitglider_Name)
}
}


```

