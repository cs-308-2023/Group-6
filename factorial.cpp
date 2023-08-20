#include "functions.h"

int factorial(int n){
    
    if(n<0) cout<<"Invalid Input. Please enter a positive number."<<"\n";
    
    else{    
	    if(n!=1){
		return(n * factorial(n-1));
	    }
	    else return 1;
    }
}
