#include <string>
#include <iostream>
#include "animal.h"

Animal::Animal(std::string n): name(n){
    std::cout<<"Animal named "<<n<<" has been created"<<std::endl;


}
void Animal::display(){
    std::cout<< "animal Named: "<<name<<"\n";

}