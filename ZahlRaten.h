
class ZahlRaten
{
public:

    ZahlRaten (int numberOfComputer);
    ZahlRaten(const ZahlRaten& b);
    ~ZahlRaten();

    int getZahl();

    ZahlRaten vergleichen(ZahlRaten numberOfComputer);

private:
    const int numberOfComputer;
    int numberOfUse;
    int counter=0;

};
