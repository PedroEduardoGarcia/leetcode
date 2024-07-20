package main

import "fmt"

func maximumWealth(accounts [][]int) int {
	max := 0

	for i := 0; i < len(accounts); i++ {
		currWealth := 0
		for j := 0; j < len(accounts[i]); j++ {
			currWealth += accounts[i][j]
		}
		if currWealth > max {
			max = currWealth
		}
	}

	return max
}

func main() {
	accounts := [][]int{{1, 2, 3}, {3, 2, 1}}
	res := maximumWealth(accounts)

	fmt.Println(res)
}
