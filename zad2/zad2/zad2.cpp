#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //int menu = 2;
    //-------------------------------------------
    /*
    if (menu == 1) {
        cout << "menu = " << menu << endl;
    }
    else if (menu == 2) {
        cout << "menu = " << menu << endl;
    }
    else if (menu == 3) {
        cout << "menu = " << menu << endl;
    }
    else {
        cout << "menu domyślne  " << menu << endl;
    }
    */
    //-----------------------------------------------
    // wrunek ? prawda : fałsz;
    int menu = 5;
    menu == 1 ? (cout << "menu1 =  " << menu << endl)
        : (menu == 2 ? (cout << "menu2 = " << menu << endl)
            : menu == 3 ? (cout << "menu3 = " << menu << endl)
            : cout << "menu domyślne  " << menu << endl);



    
    
    return 0;
}
