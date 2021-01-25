

#include<list>



#include"Author.hpp"
#include"Book.hpp"

#ifndef __CLUSTER__
#define __CLUSTER__



class Cluster {
        public:
        
        Cluster(SimpleAuthor an):authorName(an) {}
        
        bool isInCluster(std::string ISB) {}


        Book& searchByBookName(std::string nm);
        Book& searchByISB(std::string isb);

        
        
        SimpleAuthor authorName;
        std::list<Book> books;

        
        
};



#endif


