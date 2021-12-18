#include "teste.h"
#include <stdio.h>
#include <math.h>

int main(void){
    
	printf("test nr- %d\n sqrt(2)= %d", myTestFunc(), testRandomLoop());
    
	return 0;
}


int myTestFunc(void){
    int i = 3 + 4;
    return i;
}

int testRandomLoop(){
	return sqrt(4);   
}




