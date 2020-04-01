#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
void foo(string pattern, string String) 
{ 
	int M = pattern.size(); 
	int N = String.size(); 
	int i = 0; 

	while (i <= N - M) 
	{ 
		int j;
		for (j = 0; j < M; j++) 
			if (String[i + j] != pattern[j]) 
				break; 
		if (j == M) // if pattern[0...M-1] = String[i, i+1, ...i+M-1] 
		{ 
			cout << "Pattern found at index " << i << endl; 
			i = i + M; 
		} 
		else if (j == 0) 
			i = i + 1; 
		else
			i = i + j; // slide the pattern by j 
	} 
} 
int main() 
{ 
	string String = "mueedmueedmueed"; 
	string pattern = "mueed"; 
	foo(pattern, String); 
	return 0; 
} 
