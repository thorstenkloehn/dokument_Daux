## Installieren GoWeb

```
mkdir GoWeb
cd GoWeb
go mod init GoWeb
go get GoWeb
```

## main.go

```

package main

import "net/http"

func main() {
	var router = http.NewServeMux()
	router.HandleFunc("/", controller)
	http.ListenAndServe(":8080", router)
}
func controller(req http.ResponseWriter, res *http.Request) {
	req.Write([]byte("Hallo"))
}

```