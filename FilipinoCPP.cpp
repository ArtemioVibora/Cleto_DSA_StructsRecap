#include <iostream>
#include <cstdlib>

using namespace std;

typedef string lubid;
typedef char karakter;
typedef int numeroPeroHindiLutang;
typedef float numeroPeroLutang;
typedef double napakalakingLutang;
typedef bool tamaOMali;
typedef long napakahabangNumero;
typedef short napakaliitNaNumero;
//typedef struct istruktura;

int main()
{
    numeroPeroHindiLutang x;
    numeroPeroHindiLutang y;
    napakalakingLutang z;

    lubid sasabihinKo = "Mag-enter ka ng numero: ";
    cout << sasabihinKo;
    cin >> x;
    cout << sasabihinKo;
    cin >> y;
    z = (napakalakingLutang) x / y;
    printf("Ang numero ngayon ay: %.2f\n", z);
}