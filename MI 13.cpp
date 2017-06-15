/*
Mauro Ariel Otiz
14/06/2017
MI 13
*/
#include <iostream>
int main () {
	unsigned n,m,i;
	unsigned producto;
	i=0;
	producto=0;
	std:: cin>>n>>m;
	while (i<m) {
	    producto=producto+n;
	    i++;}
	    std:: cout<<"El producto es: "<<producto;
}
