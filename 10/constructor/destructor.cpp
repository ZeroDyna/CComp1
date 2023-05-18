#include <iostream> 
#include "destructor.hpp"
using namespace std;
CreateandDestroy::CreateandDestroy(int ID, string messageS)
    : objectID{ID} , message{messageS}{
        cout << "object" << objectID << "constructor runs"
        << message << endl;
    }
CreateandDestroy::~CreateandDestroy(){
    cout << (objectID == 1 || objectID == 6 ? "\n" : ""); 
    cout << "Object " << objectID << " destructor runs "
    << message << endl;
}