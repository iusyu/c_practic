package main

import (
	"fmt"
)

func main() {
	finb(50)
}

func finb(a int) {
	var arr = new([1000]int)
	arr[0] = 0
	arr[1] = 1
	for m := 2; m < a; m++ {
		arr[m] = arr[m-1] + arr[m-2]
	}

	for i := 0; i < a; i++ {
		fmt.Print("  ", arr[i])
	}
}
