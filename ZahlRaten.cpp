
#include "ZahlRaten.h"
#include <iostream>
using namespace std;

ZahlRaten::ZahlRaten(int numberOfComputer):numberOfComputer(numberOfComputer)
{

}

ZahlRaten::ZahlRaten(const ZahlRaten& b) : ZahlRaten(b.numberOfComputer)
{

}

int ZahlRaten::getZahl()
{
    return this->numberOfComputer;
}

ZahlRaten ZahlRaten::vergleichen(ZahlRaten numberOfComputer)
{
    cout<<"Rate eine Number "<<endl;
    cin>>this->numberOfUse;
    while(this->numberOfUse!=this->numberOfComputer)
    {
        if(this->numberOfUse==this->numberOfComputer)
        {
            break;
        }
        else if(this->numberOfUse>this->numberOfComputer)
        {
            cout<<"you have to increase ";
        }
        else
        {
            cout<<"you have to decrease";
        }
    }
    return;
}
