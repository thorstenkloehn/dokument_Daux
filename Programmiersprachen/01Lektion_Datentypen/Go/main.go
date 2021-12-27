package main

import "fmt"

func main() {
	//Ganzzahl

	var zahlint8 int8 = 0
	var zahlint16 int16 = 0
	var zahlint32 int32 = 0
	var zahlint64 int64 = 0

	fmt.Println(zahlint8,zahlint16,zahlint32,zahlint64)

	var zahluint8 uint8 = 0
	var zahluint16 uint16 = 0
	var zahluint32 uint32 = 0
	var zahluint64 uint64 = 0

	fmt.Println(zahluint8,zahluint16,zahluint32,zahluint64)

	//Kommazahl

	var zahlf32 float32 = 1
	var zahlf64 float64 = 1.0
	fmt.Println(zahlf32,zahlf64)

	//Wahrheitswerte

	var wahrheit bool = true;
	fmt.Println(wahrheit)
	
}