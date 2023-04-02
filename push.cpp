// Struktur dasar pemograman cpp
#include <iostream>
using namespace std;
int main()
{
  // Kamus variabel tipe data
  int myNum = 5;             // Integer (bilangan bulat)
  float myFloatNum = 5.99;   // Float (bilangan desmial dengan maksimal 7 angka di belakang koma(,))
  double myDoubleNum = 9.98; // Double (2x float dengan maksimal 15 angka di belakang koma(,))
  char myLetter = 'D';       // Char (karakter)
  bool myBoolean = true;     // Boolean (true/false)
  string myText = "Hello";   // String (kata)

  // Algoritma
  int A, B, C = 7, D;
  A = 10;
  cout << "Masukan nilai variabel B = ";
  cin >> B;
  cout << A << " " << B << " " << C << endl;
  D = A;
  A = B;
  B = C;
  C = D;
  cout << A << " " << B << " " << C << endl;
  cout << myText << " :" << myLetter;
  cout << endl;
  cout << myFloatNum << " + " << myDoubleNum << " = ";
  cout << myFloatNum + myDoubleNum;

  return 0;
}
