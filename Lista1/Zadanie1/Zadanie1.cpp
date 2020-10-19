#include <iostream>
#include <string>

template<typename T, typename U>
T add1(T a, U b){

    return a + b;
}


int main(){

    std::cout << "suma tych samych typow: " << add1(2, 3) << std::endl;
    std::cout << "suma roznych typow: " << add1(2.5, 3) << std::endl;

    std::string imie = "Inspektor ";
    std::string nazwisko = "Kot";
    
    std::cout << "suma stringow: " << add1(imie, nazwisko) << std::endl;

    return 0;
}