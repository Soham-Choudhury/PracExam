#ifndef LIBRARY
#define LIBRARY
#include <vector>

class Library {
    public:
    void addDocument(int ID);
    char hasDocument(int ID);
    std::vector <int> LibraryRecord;
};

#endif