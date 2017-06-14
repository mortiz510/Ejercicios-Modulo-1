/*
Mauro Ariel Ortiz
14/06/2017
MI 7
*/
#include <iostream>
int main () {
	unsigned a,b,c;
	std::cin>>a>>b>>c;
	if (a+b>c)
	    if (a+c>b)
	        if (b+c>a)
                std:: cout<<"Forman un triangulo\n"	;
                else { 
                    std:: cout<< "No forman un trainagulo\n" ;
            }
			else {
				std:: cout<<"No forman un triangulo\n" ;
			}
		else {
			std:: cout<<"No forman un triangulo\n" ;
		}	   
	
}
