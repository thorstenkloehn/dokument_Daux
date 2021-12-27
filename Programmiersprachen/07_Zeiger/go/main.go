package main

import "fmt"
func main() {

	var Variable_Name int8= 100
	var Zeiger_Name * int8 = &Variable_Name
	fmt.Println(*Zeiger_Name)


}