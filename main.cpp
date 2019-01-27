#include <iostream>
#include <cstring>
using namespace std;

int istZahl(char zahl[10]){
    int laenge=strlen(zahl);
    for(int i=0; i<laenge; i++)
        if ( !((int)zahl[i] > 47 && zahl[i] < 58)){
            return false;
        }
    return true;
}

int main() {

    char a[20];

    cout << "Geben sie eine Zahl ein:";
    cin.getline(a,20);
    while(istZahl(a)!=true & a!=0){
        cout << "\nEingabe ist falsch du Hund"<< endl;
        cin.getline(a,20);
    }
    cout<<a<<" ist eine Zahl MF."<<endl;
    return (0);

}
