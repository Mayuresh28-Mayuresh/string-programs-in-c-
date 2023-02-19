// C++ program to reverse a string.

#include<bits/stdc++.h>

using namespace std;

int main()
 {
 	char temp;

 	string original;
 	
 	cin >> original;
 	
 	cout << original;
 	
 	cout <<endl;
 	
 	int start = 0;
 	int end = original.length() - 1;
 	
 	while(start < end)
 	 {
 	 	 temp = original[start];
 	 	 original[start] = original[end];
 	 	 original[end] = temp;
 	 	 
 	 	 start++;
 	 	 end--;
	  }
 	
 	cout << original;
 	
 	
 	return 0;
 }
