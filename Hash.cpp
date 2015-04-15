//
//  Hash.cpp
//  Cplusplus11
//
//  Created by Sagar J on 2/16/15.
//  Copyright (c) 2015 Sagar J. All rights reserved.
//

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
