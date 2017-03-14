#include <iostream>
#include <stdio.h>

int main() {
	// your code goes here
	int angka=16;
	int kolom;
	int baris=8;
	do{
        if(baris % 2 == 0){
            printf("\n");
	        kolom=baris;
        }
	    do{
	       printf(" %i ",kolom);
	       //printf("\t");
	       kolom++;
	    }while(kolom<angka);
	    
	    angka-=2;
	    baris--; 
	}while(baris > 0);
}
