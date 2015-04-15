

#include <stdio.h>
#include "Hash.h"

using namespace std;

hashCompare::hashCompare( std::string* text ){
    this -> indexStrings( text );
}

bool hashCompare :: indexStrings(std::string* text) {
    
    this->text = text;
    return true;
}
