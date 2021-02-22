package main

import (
	"fmt"
)

func main() {
	display("name ", "grade", "90")
	recPrint(10)
	fmt.Println(mutiply(10))
}

func display(etc ...string) {
	for _, v := range etc {
		fmt.Println(v)
	}
}

func recPrint(a int) {
	if a > 0 {
		fmt.Println(a)
		recPrint(a - 1)
	}
}

func mutiply(a int64) int64 {
	if a > 1 {
		return mutiply(a-1) * a
	} else {
		return a
	}
}
