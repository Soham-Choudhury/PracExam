#include "Library.h"
#include<string>
void Library::addDocument(int ID){
    LibraryRecord.push_back(ID);
    LibraryRecord.shrink_to_fit;
    return 0;
};

char Library::hasDocument(int ID){
    char reply='O';
    for (int i=0;i<LibraryRecord.size;i++){
        if (LibraryRecord.at(i)==ID){
            reply='Y';
        }
        else {
            reply='N';
        }
    };
    return reply;
};

