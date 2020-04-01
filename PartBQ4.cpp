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
		//simple comparision
		for (j = 0; j < M; j++) 
			if (String[i + j] != pattern[j]) 
				break;
		// simple case of pattern found
		if (j == M) 
		{ cout << "Pattern found at index " << i << endl; 
			i = i + M; }
		// case where moving to next string alphabet to match full pattern because we have already scanned the previos string alphabets
		else if (j == 0)  
			i = i + 1; 
		//case where after mismatch we are avoiding the already matched string alpabets and are jumping to i + j 
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
