#include <iostream>
using namespace std;

int main()
{
int angka;
cout << "\nprogram pengubah angka ke huruf" << endl;
cout << "------------------------------\n" << endl;

nilai:
cout << "masukam angka 0 - 100 : ";
cin >> angka;

if (angka >=0 && angka <=19)
{
cout << "nilai anda = E" <<endl;
cout << "persentase nilai 0 - 19" << endl;
}
if (angka >= 20 && angka <= 39)
{
    cout << "nilai anda = D" << endl;
    cout << "persentase nilai 20 - 39" << endl;
}
if (angka >= 40 & angka <=59)
{
    cout << "nilai anda = C" << endl;
    cout << "persentase nilai 40 - 59" << endl;
}
if (angka > 60 &  angka <=79)
{
    cout << "nilai anda = B" << endl;
    cout << "persentase nilai 60 - 79" << endl;
}
if (angka >= 80 & angka <=100)
{
    cout << "nilai anda = A" << endl;
    cout << "persentase nilai 80 - 100" << endl;
}

return 0;

}
