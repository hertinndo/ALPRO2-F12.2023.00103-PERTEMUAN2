#include <iostream>
using namespace std;

string nama;
string nim;
int usia;

int main()
{
    cout << "NANDO: ";
    cin >> nama;
    cout << "F12.2023.00103: ";
    cin>> nim;
    cout<< "19: ";
    cin>> usia;

    cout<< "\n======================\n\n";

    cout<< "Nama Anda: "<<nama<<endl;
    cout<< "NIM Anda: "<<nim<<endl;;
    cout<< "Usia Anda: "<<usia<<endl;;

    cout<< "\n======================\n\n";

    for(int i = 0; i < usia; i++){
        cout<< nama <<endl;
    }

    int i = 0;
    while (i<=usia){
        cout<<nama <<endl;
        i++;
    }

    int k = 0;
    do {
        cout << nama <<endl;
        k++;
    }while (k <= usia);

    return 0;
}
