#include <iostream>

void p(unsigned n){
//base case should now bw related to the first digit, not the last



if (n/10 == 0){
    std::cout << n << std::endl;
    return;
}

else{
    p(n/10);
    std::cout << n%10 << std::endl;
}

}

int main (){

p(1234);
return 0;

}