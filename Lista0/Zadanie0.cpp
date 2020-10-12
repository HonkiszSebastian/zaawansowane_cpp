#include <iostream> 

class Podstawowa{
    public:

    void test(){
        std::cout << "nr. 1 - zwykla" << std::endl;
    } 

    virtual void test2(){
        std::cout << "nr. 1 - wirtualna" << std::endl;
    }

};

class Pochodna :public Podstawowa{
    public:

    void test(){
        std::cout << "nr. 2 - nadpisana zwykla funkcja" << std::endl;
    } 

    virtual void test2(){
        std::cout << "nr. 2 - nadpisana funckja wirtualna" << std::endl;
    }

};

int main(){
    Podstawowa obiekt1;
    Pochodna obiekt2;

    Podstawowa *w;
    w = &obiekt2;

    w -> test();
    w -> test2();

    return 0;
}