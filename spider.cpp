#include <iostream>

#include "spider.h"

Spider::Spider(std::string n, std::string nf): Animal(n), numberFangs(nf){
    std::cout << "A spider with "<< numberFangs << " fangs has been created"<<"\n";


}