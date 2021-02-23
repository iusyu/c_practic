package main

import (
	"crypto/sha256"
	"crypto/sha512"
	"fmt"
	"os"
)

var (
	hashPassWord string = "1195594964"
	tmpStr       string
)

func main() {
	if os.Args[1][0] == '-' && len(os.Args) > 2 {
		if os.Args[1][1] == 's' {
			a := sha512.Sum512([]byte(os.Args[2]))
			fmt.Println(a)
		} else {
			fmt.Println("wrong flag")
		}

	} else if len(os.Args) > 1 {
		m := sha256.Sum256([]byte(os.Args[1]))
		fmt.Println(m)
	} else {
		fmt.Println("flag wrong")
	}
}
