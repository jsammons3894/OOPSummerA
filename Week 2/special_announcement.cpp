#include <iostream>
#include <string>
#include <vector>

bool isVowel(char c) {
        return c == 'a' || c == 'i' || c == 'o' || c == 'u';
     }

    string reverseVowels(string &s) {
        int left = 0;
        int right = s.length()-1;

        while (left<right) {

            while (left < right && !isVowel(s[left])) {
                left++;
            }

            while (left < right && !isVowel(s[right])) {
                right --;
            }

            if (left < right) {

                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
     }

int main(void) {

    std::string s = "90 - 40:sArutciL)2.11 retpihC( sceseB ratneoP ,)7.21
    ,6.21( sritcoV ,)7 ratpehC( syurri ,)6-ritpohC( snuetcneF ,)5-ratpahC( spaeL ,)4-
    ritpehC( sgnertS dne sratcurihC:sratpohC kiubtxeT)doksa ab llaw snuetsioq
    01( .skrim 01 :skreM lateT.setonom 02 raf ,sselC
    gnarad ,)yedsandiW( 5202/12/50 :ameT & otoD .ssalc yedsundiW roa ne 2 zAaQ aveh et
    gnoog ire aw ,ridnamer kceuq e";

    std::reverse(s.begin(), s.end());

std::cout << s << std::endl;
return 0;
}
