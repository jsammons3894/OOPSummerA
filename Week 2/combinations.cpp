#include <iostream>
#include <string>

void comb(int n_chars);

//helper function time

void comb_helper(std::String& s, int n_chars, int i);

int main () {
    comb(3);
    return 0;
}

void comb(int n_chars){

    std::String s (n_chars, 'A');
    comb_helper(s, n_chars, 0);
    }

void comb_helper(std::string& s, int n_chars, int i) {
    if (i >= n_chars) {
     return;
    }
    else {
        while (s[i] <= 'Z') {
            comb_helper(s, n_chars, i+1);
        s[i]++;
    }
}

s[i] = 'A';
}