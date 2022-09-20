
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
void ispisObrnuto(int A[]){
		size_t n = sizeof(A)/sizeof(A[0]);
		cout <<"\nObrnuto ispissani clanovi niza:{";
	for (int i = n - 1; i >= 0; i--){
		cout <<A[i]<<", "; 
	}
	cout <<"}";
}
void najveci(int A[]){
	
	size_t n = sizeof(A)/sizeof(A[0]);
	for(int i = 0;i < n; ++i) {

   
    if(A[0] < A[i])
      A[0] = A[i];
  }

  cout << endl << "Najveci clan niza je: " << A[0];
}
void prosjek(int A[]){
	int suma = 0; 
	double ar ; 
	size_t n = sizeof(A)/sizeof(A[0]);
	for(size_t i = 0;i < n; i++ ) {
		
    suma+= A[i];
    
  }
  	cout<<"suma"<<suma; 
	ar= suma/n; 
	cout <<"\nAritmeticka sredina je: "<<ar; 
	
}
int main()
{
	
	 
	int B[0], b;
	unosNiza(B , b); 
	ispisNiza(B);
	ispisObrnuto(B);
	najveci(B);
	prosjek(B);
	return 0; 
	
}
