//add include statements
#include <iostream>
#include <string>
#include "func.h"

//add function code here
double get_gc_content(const std::string& dna){

    double countgc = 0;
    
    for (int i = 0; i <= (int)dna.length(); ++i){
        
        if ((dna[i] == 'G') || (dna[i] == 'C'))
            countgc += 1;
    }

    return countgc / dna.length();
}

std::string get_reverse_string(std::string dna) {
    std::string reversed = "";
    for (int i = dna.length() - 1; i >= 0; --i) {
        reversed += dna[i];
    }
    return reversed;
}

std::string get_dna_complement(std::string dna){
    std::string reversed = get_reverse_string(dna);
    
    for (int i = 0; i <= (int)dna.length(); i++){
        if(reversed[i] == 'A'){
            reversed[i] = 'T';
        }
        else if(reversed[i] == 'T'){
            reversed[i] = 'A';
        }
        else if(reversed[i] == 'C'){
            reversed[i] = 'G';
        }
        else if(reversed[i] == 'G'){
            reversed[i] = 'C';
        }
    }

    return reversed;
}