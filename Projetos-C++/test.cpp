#include <iostream>
using namespace std;

int main()
{
    float math, phy, chem,
          port, eng, media;

    cout << "Nota de Matemática: ";
    cin >> math;

    cout << "Nota de Física: ";
    cin >> phy;

    cout << "Nota de Química: ";
    cin >> chem;

    cout << "Nota de Português: ";
    cin >> port;

    cout << "Nota de English: ";
    cin >> eng;

    media = (3*math + 2.5*phy +
             2.5*chem+port+eng) / 10;

    cout << "Média: " << media;

    return 0;
}