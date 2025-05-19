#include <iostream>
#include <vector>

int main () {

    std::vector<int> v {1, 2, 3, 4, 5, 6};

    v.push_back(7);

    std::cout << v.size();
    
    print(v);

    return 0;
}

void print(std::vector<int> v) { //range based 'for' loop
    for(int i : v) {
std::cout<<i<<' ';

    }
    std::cout << std:: endl;
}

void rotateLeft(std::vector<int> v, ink k) {
    k %= v.size();
    while (k>0) {
        int first = v.front(); // returns the first element of a vector
        v.push_back(first);
        v.erase(v.begin()); //delets the first element
    }

}