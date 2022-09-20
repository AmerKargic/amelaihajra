
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void unosNiza(int A[], int a ){
	int brcl; 
	cout<<"unesite broj clanova niza: ";
	cin >>brcl; 
	for(int i= 0; i<brcl; i++){
		cout <<"Unesite "<<i+1<<". clan niza: "; 
		cin >>a;
		A[i]= a; 
	} 
}
void ispisNiza (int A[] ){
	
	size_t n = sizeof(A)/sizeof(A[0]);
		cout <<"Clanovi niza su:{";
	for (size_t i=0; i<n; i++){
		cout <<A[i]<<", "; 
	}
	cout <<"}"; 
}

int main()
{
	
	 
	int B[0], b;
	unosNiza(B , b); 
	ispisNiza(B);
	
	
	return 0; 
	
}
