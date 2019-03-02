
package main

import "fmt"

func main(){

	m := map[string]int{"one":1, "two":2}
	for e := range m {
		fmt.Print(e + "\n")
	}

}
