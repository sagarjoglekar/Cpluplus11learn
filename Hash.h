

#ifndef Cplusplus11_Hash_h
#define Cplusplus11_Hash_h

#include <map>
#include <string>


class hashCompare {

public:
    hashCompare(std::string* );
    bool indexStrings( std::string* );
    float docDist( const hashCompare* );
    std::map<std::string, int> getMap(){
        return this -> map;
    }
    std::string* getText(){
        return this->text;
    }
    
private:
    std::map<std::string, int> map;
    std::string* text;
    
};

#endif
