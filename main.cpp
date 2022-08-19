#include "Library.h"
#include "Document.h"
#include "Book.h"
#include <iostream>

char main(){
    Library library;
    Book book;
    Document document;
    int ID=book.getDocumentID();
    library.addDocument(ID);
    char check=library.hasDocument(ID);

    if (check=="Y"){
        std::cout<<"Library has book "<<ID<<std::endl;
    }
    else {
        std::cout<<"Library doesnt have book "<<ID<<std::endl;
    }

    
    
};