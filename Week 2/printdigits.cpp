#include <iostream>

void p(unsigned n){
//base case

if (n/10 == 0){
    std::cout << n;
    return;
}

else{
std::cout << n%10;
p(n/10);

}

}

int main (){

p(1234);
return 0;

}