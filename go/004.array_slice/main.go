
package main

import "fmt"

func sum(a []int) int {
	s := 0
	for i:= 0; i < len(a); i++ {
		s += a[i]
	}
	return s
}

func main(){
	var arr[10]int

	for i := 0; i<len(arr); i++ {
		arr[i] = i*10
	}

	s := sum(arr[:])
	//s := sum([]int{1,2,3})

	fmt.Print(s,"\n")
}
