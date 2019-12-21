
#include <bits/stdc++.h> 
using namespace std; 

void countPrimitiveRoots(int p) 
{ 
	int result = 1; 
	for (int i = 2; i < p; i++) 
		if (__gcd(i, p) == 1) 
			cout<<i<<endl;
} 

int main() 
{ 
	int p=39877; 
	// int p=31319;
	// int p=39869;

	countPrimitiveRoots(p - 1); 

	return 0; 
} 
