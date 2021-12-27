package main

import "fmt"

func main() {
	var auswahl byte = 3

	switch auswahl {
	case 1: fmt.Println("1")
	case 2: fmt.Println("2")
	default: fmt.Println("3")
	}

}