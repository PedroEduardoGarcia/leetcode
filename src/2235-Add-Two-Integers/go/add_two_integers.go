package main

import "fmt"

func sum(num1 int, num2 int) int {
	res := num1 + num2
	return res
}

func main() {
	num1 := 12
	num2 := 5

	result := sum(num1, num2)
	fmt.Println(result)
}
