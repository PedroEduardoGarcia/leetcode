package main

import (
	"fmt"
	"strconv"
)

func fizzBuzz(n int) []string {
	var res []string
	for i := 1; i <= n; i++ {
		if i%5 == 0 && i%3 == 0 {
			res = append(res, "FizzBuzz")
		} else if i%5 == 0 {
			res = append(res, "Buzz")
		} else if i%3 == 0 {
			res = append(res, "Fizz")
		} else {
			res = append(res, strconv.Itoa(i))
		}
	}

	return res
}

func main() {
	n := 3
	res := fizzBuzz(n)

	fmt.Println(res)
}
