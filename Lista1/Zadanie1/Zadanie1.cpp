#include <iostream>
#include <string>

// PB: Błędny typ zwracany - np add(1, 3.5) zwróci 4 zamiast 4.5
// PB: Niepotrzebne kopiowanie - argumenty powinny być przekazane przez stałe referencje
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