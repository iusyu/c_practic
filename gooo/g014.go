package main

import (
	"fmt"
)

/*

slice 的append函数


 */



var (
	hashPassWord string = "1195594964"
	tmpStr       string
)

func main() {
	var x []int

	x = append(x, 8)
	fmt.Println(len(x))
	fmt.Println(x[0])

	var y [...]int = (1,2,3,4,5,6,7,8)
	m := y[0:5]
	z := y[3:7]
	z = append(z,9)
	fmt.Println(z[7])
}
