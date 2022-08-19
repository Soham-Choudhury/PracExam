#include "Book.h"
#include <random>
#include <ctime>

int Book::getDocumentID(){
    srand(time(0));
    int ID=rand() % 1000;
    
    return ID;
};