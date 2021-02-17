package main
import (
	"fmt"
	"os"
)


const pi = 3.14178543

var version = "3.17"





func main() {
	buffercall()

}

func buffercall()  {
	fmt.Println(os.Getenv("HOME")) // comment
	fmt.Println(os.Geteuid())
}