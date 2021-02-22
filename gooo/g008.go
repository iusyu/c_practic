package main

import (
	"fmt"
	"io/ioutil"
	"os"
)
{
	"fmt"
	"os"
	"strings"
	"io"
}







func main() {
	if len(os.Args) > 1 {
		for fileName := range os.Args {
			inputFile,  inputError := ioutil.ReadFile(fileName)
			if inputError != nil {
			fmt.Println(inputError.Error())
			}
			fmt.Printf("%s\n", string(inputFile))

		}
	}
}


func checkCharac(a *int32) int32 {

}
