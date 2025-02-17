package main

import "fmt"

func LongestSubstring(s string, start int) int {
	var i int
	for i = start + 1; i < len(s); i++ {
		for j := start; j < i; j++ {
			if s[j] == s[i] {
				return i - start
			}
		}
	}

	return i - start
}

func LongestSubstringWithoutRepeat(s string) int {
	longest := 0

	for i := 0; i < len(s); {
		l := LongestSubstring(s, i)
		longest = max(longest, l)
		i += l
	}

	return longest
}

func main() {
	for {
		fmt.Print("The string: ")
		var str string
		fmt.Scan(&str)
		if str == "q" || str == "Q" {
			break
		}

		fmt.Println("The longest substring without repeating letter is ", LongestSubstringWithoutRepeat(str))
	}
}
