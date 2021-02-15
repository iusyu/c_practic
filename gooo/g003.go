package main

import (
	"fmt"
	"os"
)

func main() {
	for i := 0; i < len(os.Args); i++ {
		fmt.Print(i)
		fmt.Print(" ")
		fmt.Println(os.Args[i])
	}
}
