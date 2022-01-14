## GoWeb Installieren

```

mkdir Goweb
go mod init Goweb

```
## Datei :: "main.go"

```
package main

import (
	"fmt"
	"net/http"
)

func Handler(antwortschreiber http.ResponseWriter, anfrage *http.Request) {
	antwortschreiber.Write([]byte("Hallo Welt"))
}

func main() {

	http.HandleFunc("/", Handler)
	fmt.Println("http://localhost:8080")
	http.ListenAndServe("localhost:8080", nil)
}



```