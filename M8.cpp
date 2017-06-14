/*
Mauro Ariel Ortiz
14/06/2017
MI 8
*/
#include <iostream>
int main () {
	int L1, L2, L3 ;
	std:: cin>> L1>> L2>> L3;
	if (L1==L2 and L2==L3)
	    std:: cout<<"El trianglo es equilatero";
	    else {
	    	if (L1!=L2 and L2!=L3)
	    	    std:: cout<<"El triangulo es escaleno";
	    	else
	    	    std:: cout<<"El triangulo es isosceles";   
	    	
		}
}
