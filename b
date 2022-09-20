
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


bool nadji_rijec(string recenica, string rijec)
{

	stringstream s(recenica);

	
	string temp;

	while (s >> temp) {

	
		if (temp.compare(rijec) == 0) {
			return true;
		}
	}
	return false;
}

// Driver code
int main()
{
	string recenica1,rijec1; 
	cout <<"Unesite recenicu: "; 
	getline(cin, recenica1);
	cout <<"Unesite rijec za provjeru: "; 
	
	cin>>rijec1; 
	

	if (nadji_rijec(recenica1, rijec1))
		cout << "Rijec je prisutna u recenici ";
	else
		cout << "Rijec nije prisutna u recenici ";

	return 0;
}
