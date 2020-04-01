#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
void foo(string pattern, string String) 
{ 
    int M,N,i=0;
	M = pattern.size(); 
	N = String.size(); 
	i = 0; 

	while (i <= N - M) 
	{ 
		int j;
		for (j = 0; j < M; j++) 
			if (String[i + j] != pattern[j]) 
				break; 
		if (j == M) 
		{ 
			cout << "Pattern found at index " << i << endl; 
			i = i + M; 
		} 
		else if (j == 0) 
			i = i + 1; 
		else
			i = i + j;
	} 
} 
int main() 
{ 
	string String = "mueedmueedmueed"; 
	string pattern = "mueed"; 
	foo(pattern, String); 
	return 0; 
} 
