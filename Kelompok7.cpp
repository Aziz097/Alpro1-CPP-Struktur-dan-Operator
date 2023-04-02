#include <iostream>
#include <stdlib.h>
using namespace std;

// preparasi
string username;
int dompet, pilihan, taruhan;
int opsi[3]; // array
int yesNo = 1;

// deklarasi prosedur
void uangKurang();
void inputTaruhan();
void generateOpsi();
void tampilkanOpsi();
// deklarasi fungsi
string winLose();

int main()
{
  cout << "\t\t\t---------------" << endl;
  cout << "\t\t\t| JUDI GEMING |" << endl;
  cout << "\t\t\t---------------" << endl;
  cout << endl;
  cout << "Masukan Username : ";
  getline(cin, username);
  cout << "Masukan Uang : ";
  cin >> dompet;

  while (yesNo)
  {
    cout << "\n--------------------------------------------------------------------------------" << endl;
    cout << "Username: " << username << "\t\t\tUang: Rp. " << dompet;
    cout << "\n--------------------------------------------------------------------------------" << endl;
    inputTaruhan();
    cout << "\nPilih Yang Menurut Anda Memiliki Nilai Terbesar" << endl;
    cout << "1) *\t2) *\t3) *" << endl;
    cout << "\nMasukan Pilihan: ";
    cin >> pilihan;
    cout << endl;
    generateOpsi();
    tampilkanOpsi();
    cout << winLose();
    cout << "\n--------------------------------------------------------------------------------" << endl;
    cout << "Username: " << username << "\t\t\tUang: Rp. " << dompet;
    cout << "\n--------------------------------------------------------------------------------" << endl;
    cout << "\nApakah Anda Ingin Bermain Lagi?\n1) Ya\n2) Tidak" << endl;
    cin >> yesNo;
    if (yesNo != 1)
    {
      break;
    }
  }
}

void inputTaruhan()
{
  cout << "Masukan Taruhan Anda : ";
  cin >> taruhan;
  if (taruhan > dompet)
  {
    uangKurang();
  }
}
void uangKurang()
{
  cout << "Uang Anda Kurang Untuk Taruhan" << endl;
  inputTaruhan();
}
void generateOpsi()
{
  for (int i = 0; i < 3; i++)
  {
    int angka = rand() % 9; // 0-9 (2)
    opsi[i] = angka;
  }
}
void tampilkanOpsi()
{
  for (int i = 0; i < 3; i++)
  {
    cout << i + 1 << ") " << opsi[i] << "\t";
  }
  cout << endl;
}
string winLose()
{
  int terbesar = opsi[0]; // 1 7 9
  string result;
  for (int i = 0; i < 3; i++)
  {
    if (opsi[i] > terbesar)
    {
      terbesar = opsi[i];
    }
  }
  cout << "\nNilai Terbesar Adalah : " << terbesar << endl;
  cout << "Pilihan Anda adalah : " << opsi[pilihan - 1];
  if (opsi[pilihan - 1] == terbesar)
  {
    dompet = dompet + taruhan;
    result = "\nKamu Menang";
  }
  else
  {
    dompet = dompet - taruhan;
    result = "\nKamu Kalah";
  }
  return result;
}