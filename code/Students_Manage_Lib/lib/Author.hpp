#include<string>


#ifndef __Author__

#define __Author__



class SimpleAuthor {
    public:
    SimpleAuthor(std::string a, std::string b):firstName(a),lastName(b){}
    SimpleAuthor(SimpleAuthor& a):lastName(a.lastName), firstName(a.firstName) {}

    bool operator==(SimpleAuthor& b);

    std::string firstName;
    std::string lastName;
};


#endif 