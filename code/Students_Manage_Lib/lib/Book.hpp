

#include<string>


#include"Author.hpp"

#ifndef __BOOKS__
#define __BOOKS__



class Book {
    public:

    Book(std::string& bk, std::string& isb, SimpleAuthor& an ): name(bk),ISB(isb),authorName(an) {}

    bool operator==(Book& bk);

    std::string name;
    std::string ISB;
    SimpleAuthor authorName;



};




#endif