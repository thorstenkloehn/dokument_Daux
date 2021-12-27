## Zeichenfolge

### Defination Zeichenfolge C

* char Zeichenfolge[Zeichenfolge Länge];

### Defination Zeichenfolge C++
* std::string Zeichenfolge;

### Defination Zeichenfolge Go

* var Zeichenfolge string

### Defination Zeichenfolge Rust
* let Zeichenfolge = String::new();

###  Defination Zeichenfolge Javascript

* let Zeichenfolge;


### Defination und Deklaration Zeichenfolge C

* char Zeichenfolge[]=Text;

### Defination und Deklaration Zeichenfolge c++

* std::string Zeichenfolge = Text;

### Defination und Deklaration Zeichenfolge Go
* var Zeichenfolge  = Text

### Defination und Deklaration Zeichenfolge Rust

* let Zeichenfolge=Text;

### Defination und Deklaration Zeichenfolge Javascript

* let Zeichenfolge=Text;



### Strings kopieren in C
* ``` #include <string.h> ```
* strcpy(Ziel_Zeichenfolge,Quell_Zeichenfolge);
### String kopieren in C++
```
std::string Zeichenfolge=Text
std::string Zeichenfolge1 = Zeichenfolge

```
### String kopieren in Go

```
var Zeichenfolge = Text
var Zeichenfolge1 = Zeichenfolge

```

### String kopieren in Rust

```
let Zeichenfolge=Text;
let Zeichenfolge1=Zeichenfolge;
```

###  String kopieren in Javascript

```
let Zeichenfolge=Text;
let Zeichenfolge1=Zeichenfolge;
```



#### String Verkette in C
``` 
#include <string.h>
void main() {
strcat(Ziel_Zeichenfolge,Quell_Zeichenfolge);
 }
 ```
### String Verkette in C++
```
std::string Zeichenfolge =Text;
std::string Zeichenfolge1=Text1
std::string Zeichenfolge2=Zeichenfolge+Zeichenfolge1
```

### String Verkette in Go

```
var Zeichenfolge=Text 
var Zeichenfolge1=Text1
var Zeichenfolge2=Zeichenfolge+Zeichenfolge1
```
### String Verkette in Rust
```
   let zeichenfolge = Text;
   let zeichenfolge1 = Text1;
   let zeichenfolge2 = zeichenfolge.to_owned()+zeichenfolge1;
```
### String Verkette in Javascript

```
   let zeichenfolge = Text;
   let zeichenfolge1 = Text1;
   let zeichenfolge2 = zeichenfolge+zeichenfolge1;
```



### String Länge in C
```
int Länge strlen(Text);
```

### String Länge C++

```

std::string Zeichenfolge=Text;
int Länge = Zeichenfolge.length();

```

### String Länge in Go

```
var zeichenfolge = Text
var Länge = len(Zeichenfolge)
```

### String Länge in Rust
```
let Zeichenfolge =Text;
let Länge =Zeichenfolge.len();

```
### String Länge in Javascript

```
let Zeichenfolge = Text;
let Laenge = Zeichenfolge.length;

```



### String Formartieren Rust
```
let Zeichenfolge=Text;
let Zeichenfolge1 = format!("{}",Zeichenfolge);
```