#include <iostream>
#include <string>

void comb(int n_chars);

//helper function time

void comb_helper(std::String& s, int n_chars, int i);



int main () {

    return 0;
}

void comb(int n_chars){

    std::String s (n_chars, 'A');
    comb_helper(s, n_chars, 0);
    }
}