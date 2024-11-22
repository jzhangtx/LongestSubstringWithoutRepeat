LongestSubstringNoRepeat: LongestSubstringNoRepeat.o
	g++ -g -o LongestSubstringNoRepeat.exe LongestSubstringNoRepeat.o -pthread    

LongestSubstringNoRepeat.o: LongestSubstringNoRepeat/LongestSubstringNoRepeat.cpp
	g++ -g  -c -pthread LongestSubstringNoRepeat/LongestSubstringNoRepeat.cpp
