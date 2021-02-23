package main

import (
	"crypto/sha256"
	"fmt"
)

var (
	hashPassWord string = "1195594964"
	tmpPsw       string
)

func main() {

	fmt.Scanln(&tmpPsw)
	logginPsw := sha256.Sum256([]byte(tmpPsw))
	rightPsw := sha256.Sum256([]byte(hashPassWord))
	if logginPsw == rightPsw {
		fmt.Println("right pass word!")
	} else {
		fmt.Println("wroing password")
	}
}
