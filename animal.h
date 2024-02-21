#include <string>

class Animal{
    protected:
        std::string name;

    public:
        void display();
        Animal(std::string name);
};