#include <iostream>
#include <string>

auto lama = []( auto x, auto y) { return (x + y);};

template<typename T, typename U, typename W>
T add2(T a, U b, W lama){

   return lama(a, b);
}


int main(){

    std::cout << "suma " << add2(2.5, 3, lama) << std::endl << std::endl;

    std::string imie = "Inspektor ";
    std::string nazwisko = "Kot";
    
    std::cout << "suma " << add2(imie, nazwisko, lama) << std::endl << std::endl;

    return 0;
}