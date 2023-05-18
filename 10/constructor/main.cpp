#include <iostream> 
#include "destructor.hpp"
using namespace std;
void create();
CreateandDestroy first(1, "(global before main)");
int main () {
    cout << "\n Main function execution begins" << endl;
    CreateandDestroy second( 2,"(local in main)");
    static CreateandDestroy third (3, "(local static in main)");
    
    create ();
    cout << "\n Main funcion execurtion resumes" << endl;
    CreateandDestroy fourth(4, "(local in main)");
    cout << "\n Main funcion execution ends" << endl;

    return 0;

}
void create(){
    cout << "\n create function execution begins " << endl;
    CreateandDestroy fifth (5, "local in create");
    static CreateandDestroy six (6, "staatic local in create");
    CreateandDestroy seven (7, "local in create");
    cout << "\n Create function execution ends " << endl;
}




