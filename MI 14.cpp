/*
Mauro Ariel Ortiz 
14/06/2017
MI 14
*/
#include <iostream> 
int main () {
	double n,sum,cant,cont;
	sum=0;
	cant=0;
	cont=0;
	for (int i=0; i<50; i++ ) {
		std:: cin >>n;
		if (n<100 and n>-10)
		;
		    else {
		    	if (n<-10)
		    	    sum=sum+n;
		    	    else {
		    	    	cant=cant+n;
		    	    	cont++;
					}
			}
		}
	if (cant==0 and sum==0)
	    std:: cout<<"No hay numeros mayores a 0 ni menores a -10";
	    else {
	    	if (cant==0){
	    	    std:: cout<<"No hay numeros mayores a 100\n";
	    	    std:: cout<<"La suma de los menores a -10 es: "<<sum;
	            }
				else {
	    	    	if (sum==0) {
					
	    	    	std:: cout<<"No hay numeros menores a -10\n";
	    	    	std:: cout<<"El promedio de los mayores a 100 es: "<<cant/cont;
	    	    	    }
						else {
	    	    	     	std:: cout<<"El promedio de los mayores a 100 es: "<<cant/cont<<"\n";
	    	    	     	std:: cout<<"La suma de los menores a -10 es: "<<sum;
						 }
				}
		}
}
