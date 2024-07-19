package main

import "fmt"

func runningSum(nums []int) []int {
	res := make([]int, 0, len(nums))
	for i := 0; i < len(nums); i++ {
		if i == 0 {
			res = append(res, nums[i])
		} else {
			new_num := nums[i] + res[i-1]
			res = append(res, new_num)
		}
	}
	return res
}

func main() {
	nums := []int{1, 2, 3, 4}
	res := runningSum(nums)
	fmt.Print(res)
}
