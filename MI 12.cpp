/*
Mauro Ariel Ortiz
14/06/2017
MI 12
*/
#include <iostream> 
int main () {
	int i;
	int sum;
	sum=0;
	i=1;
	while (i<=100) {
		sum=sum+i;
		i++;
	}
	std:: cout<<"La sumatoria de los primeros 100 numeros naturales es: "<<sum;
} 
