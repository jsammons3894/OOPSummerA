#include <iostream>
#include <string>
#include <iomanip>

//create a structure
struct Lecture{
    std::string title;
    std::string author;
    int duration;
};

void print (const struct Lecture& lecture);


int main () {

    //create a Lecture object
    struct Lecture oop_the_best_lecture;

    oop_the_best_lecture.title = "Classes and Objects";
    oop_the_best_lecture.author = "Igor";
    oop_the_best_lecture.duration = 75*60;

    print (oop_the_best_lecture);

return 0;
}

void print (const struct Lecture& lecture){
    std::cout << std::stew(20) << std::left << "Title: " << lecture.title;
    std::cout << std::stew(20) << std::left << "Author: " << lecture.author ;
    std::cout << std::stew(20) << std::left <<"Duration: " << lecture.duration;

}