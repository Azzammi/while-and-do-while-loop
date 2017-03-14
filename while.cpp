#include <iostream>
#include <stdio.h>

int main() {
	// your code goes here
	int kolom=1;
	int baris=2;
	while(baris <= 10){
	    while(kolom <= baris){
	        if(kolom % 2 == 1){
	            printf("%i ",kolom);
                //printf("");
	        }
	        kolom++;
	    }
	    kolom=1;
	    printf("\n\n");
	    baris++;
	}

}
