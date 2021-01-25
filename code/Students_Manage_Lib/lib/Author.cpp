
#include"Author.hpp"



bool SimpleAuthor::operator==(SimpleAuthor& b) {
        return lastName==b.lastName && firstName==b.firstName;
}


