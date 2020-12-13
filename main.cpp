#include <cstdlib>
#include <iostream>
#include "cas.hpp"

using std::cout;
using std::cin;
using std::endl;

/*
 * 
 */
int main(int argc, char** argv) {

    cas v1;
    cas v2(5.6, 5.2);
    cas v3(v2);
    float polomer_r, vyska_v, objem_o;
    int odpoved;
    /////////////////////////////////////////////////////////////////////
    cout << "Objekt vytvoreni vyhozim konstruktorem (polomer, vyska): ";
    cout << v1.get_r() <<", " << v1.get_v() << endl;
    cout << "Objekt vytvoren Konstruktorem s parametry (polomer, vyska): ";
    cout << v2.get_r() <<", " << v2.get_v() << endl;
    cout << "Objekt vtvoreny kopirovacim konstruktorem (polomer, vyska): ";
    cout << v3.get_r() <<", " << v3.get_v() << endl;
    cout << endl;
    //////////////////////
    do{
    cout << "Zadej polomer v cm: ";
    cin >> polomer_r;
    cout << "Zadej vysku v cm: ";
    cin >> vyska_v;
    cout << "Zadej objem vody v deciliterch: ";
    cin >> objem_o;
    
    /////////////////////////////////
    if(v1.set_r(polomer_r)){
        cout << "Polomer po zmene: " << v1.get_r() << "cm " <<endl;
    }
    else{
        cout << "Chybne zadany polomer!" << endl;
    }
    if(v1.set_v(vyska_v)){
        cout << "Vyska po zmene: " << v1.get_v() << "cm " <<endl;
    }
    else{
        cout << "Chybne zadana vyska!" << endl;
    }
    ///////////////////////////////////////////////
    cout << "Objem valce je: " << v1.objem() << " cm3" << endl;
    cout << "Povrch valce je: " << v1.povrch() << " cm2" << endl;
    cout << "Obsah plaste valce je: " << v1.obsahPlas() << " cm2" << endl;
    cout << "Obsah podstavy valce je: " << v1.obsahPod() << " cm2" << endl;
    if (v1.objem() > (objem_o * 100)){
        v1.set_o(objem_o);
        cout << "Hladina vody je ve vysce: "  << v1.vyskaVody() << " cm" << endl;
    }
    else{
        cout << "VALEC JE MALY!!!!! voda se do nej nevejde!" <<endl;
    }
    cout << "Pokud chcete pokracovat zmacknete (1): ";
    cin >> odpoved;
     cout << "--------------------------------------------" << endl;
    }while(odpoved == 1);
       cout << endl;
    
    
    return 0;
}

