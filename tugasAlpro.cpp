// #include <iostream>
// using namespace std;

// int KONVERSIKEL(int x)
// {
//   int y;
//   const float fk = 273.15;
//   y = x * fk;
//   return y;
// }
// int KONVERSIFAR(int x)
// {
//   int y;
//   const float ff = 1.8;
//   y = (x * ff) + 32;
//   return y;
// }
// int main()
// {
//   int x, y;
//   cout << "Masukkan suhu dalam celcius : ";
//   cin >> y;
//   cout << "Masukkan konversi ke fahrenheit atau kelvin : " << endl;
//   cout << "1. Fahrenheit" << endl;
//   cout << "2. Kelvin" << endl;
//   cin >> x;
//   switch (x)
//   {
//   case 1:
//     cout << "Hasil konversi ke fahrenheit : ";
//     ;
//     cout << KONVERSIFAR(y);
//     break;
//   case 2:
//     cout << "Hasil konversi ke kelvin : ";
//     cout << KONVERSIKEL(y);
//     break;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << j << " ";
//     }
//     cout << endl;
//   }
//   for (int i = n; i >= 0; i--)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       cout << i << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

//  membuat game sederhana
// #include <iostream>
// #include <stdlib.h>
// #include <time.h>
// using namespace std;
// int main()
// {
//   int tebak, angka;
//   srand(time(NULL));
//   angka = rand() % 10 + 1;
//   cout << "Tebak angka dari 1 - 10 : ";
//   cin >> tebak;
//   if (tebak == angka)
//   {
//     cout << "Selamat tebakan anda benar";
//   }
//   else
//   {
//     cout << "Maaf tebakan anda salah";
//   }
//   return 0;
// }

// membuat tebak angka
// #include <iostream>
// #include <stdlib.h>
// #include <time.h>
// using namespace std;
// int main()
// {
//   int tebak, angka;
//   srand(time(NULL));
//   angka = rand() % 5 + 1;

//   do
//   {
//     cout << "Tebak angka dari 1 - 5 : ";
//     cin >> tebak;
//     if (tebak == angka)
//     {
//       cout << "Selamat tebakan anda benar";
//     }
//     else
//     {
//       cout << "Maaf tebakan anda salah" << endl;
//     }
//   } while (tebak != angka);
//   return 0;
// }

// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// // preparasi
// string username;
// int dompet, pilihan, taruhan;
// int opsi[3]; // array
// int yesNo = 1;

// // deklarasi prosedur
// void uangKurang();
// void inputTaruhan();
// void generateOpsi();
// void tampilkanOpsi();
// // deklarasi fungsi
// string winLose();

// int main()
// {
//   cout << "\t\t\t---------------" << endl;
//   cout << "\t\t\t| JUDI GEMING |" << endl;
//   cout << "\t\t\t---------------" << endl;
//   cout << endl;
//   cout << "Masukan Username : ";
//   getline(cin, username);
//   cout << "Masukan Uang : ";
//   cin >> dompet;

//   while (yesNo)
//   {
//     cout << "\n--------------------------------------------------------------------------------" << endl;
//     cout << "Username: " << username << "\t\t\tUang: Rp. " << dompet;
//     cout << "\n--------------------------------------------------------------------------------" << endl;
//     inputTaruhan();
//     cout << "\nPilih Yang Menurut Anda Memiliki Nilai Terbesar" << endl;
//     cout << "1) *\t2) *\t3) *" << endl;
//     cout << "\nMasukan Pilihan: ";
//     cin >> pilihan;
//     cout << endl;
//     generateOpsi();
//     tampilkanOpsi();
//     cout << winLose();
//     cout << "\n--------------------------------------------------------------------------------" << endl;
//     cout << "Username: " << username << "\t\t\tUang: Rp. " << dompet;
//     cout << "\n--------------------------------------------------------------------------------" << endl;
//     cout << "\nApakah Anda Ingin Bermain Lagi?\n1) Ya\n2) Tidak" << endl;
//     cin >> yesNo;
//     if (yesNo != 1)
//     {
//       break;
//     }
//   }
// }

// void inputTaruhan()
// {
//   cout << "Masukan Taruhan Anda : ";
//   cin >> taruhan;
//   if (taruhan > dompet)
//   {
//     uangKurang();
//   }
// }
// void uangKurang()
// {
//   cout << "Uang Anda Kurang Untuk Taruhan" << endl;
//   inputTaruhan();
// }
// void generateOpsi()
// {
//   for (int i = 0; i < 3; i++)
//   {
//     int angka = rand() % 9; // 0-9 (2)
//     opsi[i] = angka;
//   }
// }
// void tampilkanOpsi()
// {
//   for (int i = 0; i < 3; i++)
//   {
//     cout << i + 1 << ") " << opsi[i] << "\t";
//   }
//   cout << endl;
// }
// string winLose()
// {
//   int terbesar = opsi[0]; // 1 7 9
//   string result;
//   for (int i = 0; i < 3; i++)
//   {
//     if (opsi[i] > terbesar)
//     {
//       terbesar = opsi[i];
//     }
//   }
//   cout << "\nNilai Terbesar Adalah : " << terbesar << endl;
//   cout << "Pilihan Anda adalah : " << opsi[pilihan - 1];
//   if (opsi[pilihan - 1] == terbesar)
//   {
//     dompet = dompet + taruhan;
//     result = "\nKamu Menang";
//   }
//   else
//   {
//     dompet = dompet - taruhan;
//     result = "\nKamu Kalah";
//   }
//   return result;
// // }
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   int sum = 0;

//   cin >> n;
//   int array[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> array[i];
//   }
//   int index = 0;
//   for (int i = n - 1; i >= 0; i--)
//   {

//     if (index % 2 == 0)
//     {
//       cout << "-" << array[i];
//       sum += array[i] * -1;
//     }
//     else if (index % 2 != 0)
//     {
//       cout << "+" << array[i];
//       sum += array[i];
//     }

//     index--;
//   }
//   cout << "=" << sum;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n[10];
//   for (int i = 0; i < 10; i++)
//   {
//     cin >> n[i];
//   }
//   for (int i = 0; i < 10; i++)
//   {
//     if (n[i] == 0 || n[i] == 1)
//     {
//       cout << "* ";
//       continue;
//     }

//     if (n[i] == 5)
//     {
//       cout << "# ";
//       continue;
//     }
//     cout << n[i] << " ";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int array[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> array[i];
//   }
//   int kanan = n - 1;
//   for (int kiri = 0; kiri < n; kiri++)
//   {
//     if (array[kiri] != array[kanan])
//     {
//       cout << " ARRAY GAK ASIK";
//       return 0;
//     }
//     kanan--;
//   }
//   cout << "ARRAY ASIK";
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int m, n, p, q = 1;
//   cout << "Masukan dimensi larik yang di inginkan : " << endl;
//   cin >> m >> n;
//   int array1[m][n];
//   int array2[m][n];
//   cout << endl;
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       array1[i][j] = q;
//       cout << array1[i][j] << " ";
//       p = q;
//       q++;
//     }
//     cout << endl;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cout << "+ ";
//   }
//   cout << endl;
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       array2[i][j] = p;
//       cout << array2[i][j] << " ";
//       p--;
//     }
//     cout << endl;
//   }
//   cout << "HASIL : " << endl;
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       cout << array1[i][j] + array2[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int m, n, p = 1, q = 1;
//   cout << "Masukan dimensi larik yang di inginkan : " << endl;
//   cin >> m >> n;
//   int array1[m][n];

//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       array1[i][j] = p;
//       cout << array1[i][j] << " ";
//       p++;
//     }
//     cout << endl;
//     if (i == m - 1)
//     {
//       for (int k = 0; k < n; k++)
//       {
//         cout << "+ ";
//       }
//     }
//     cout << endl;
//   }

//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       array1[i][j] = q;
//       cout << array1[i][j] << " ";
//       q++;
//     }
//     cout << endl;
//     if (i == m - 1)
//     {
//       cout << "HASIL : " << endl;
//       for (int k = 0; k < m; k++)
//       {
//         for (int l = 0; l < n; l++)
//         {
//           cout << array1[k][l] + array1[k][l] << " ";
//         }
//         cout << endl;
//       }
//     }
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   char array[n][m];

//   for (int i = 0; i < n; i++)
//   {
//     if (i % 2 == 0)
//     {
//       for (int j = 0; j < m; j++)
//       {
//         if (j % 2 == 0)
//         {
//           array[i][j] = 'o';
//         }
//         else if (j % 2 != 0)
//         {
//           array[i][j] = 's';
//         }
//       }
//     }

//     else if (i % 2 != 0)
//     {
//       for (int j = 0; j < m; j++)
//       {
//         if (j % 2 == 0)
//         {
//           array[i][j] = 's';
//         }
//         else if (j % 2 != 0)
//         {
//           array[i][j] = 'o';
//         }
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cout << array[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int a, b;
//   cin >> a >> b;
//   int array[a][b];

//   for (int i = 0; i < a; i++)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       cin >> array[i][j];
//     }
//   }
//   for (int i = a - 1; i >= 0; i--)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       if (array[i][j] == 2)
//       {
//         array[i][j] = "**";
//       }
//       if (array[i][j] == 5)
//       {
//         array[i][j] = "*****";
//       }
//       if (j = b - 1)
//       {
//         cout << array[i][j];
//         cout << endl;
//       }
//       cout << array[i][j] << ", ";
//     }
//     cout << endl;
//   }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a, b, besar, besar2, simpan;
//   cout << "TUGAS PKS II - ALTA GRACIA" << endl;
//   cout << "MASUKKAN DIMENSI LARIK : " << endl;
//   cin >> a >> b;
//   int matrik1[a][b], matrik2[a][b], hasil[a][b];
//   for (int i = 0; i < a; i++)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       cin >> matrik1[i][j];
//       matrik2[i][j] = matrik1[i][j];
//     }
//   }
//   for (int i = 0; i < a; i++)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       besar = i;
//       besar2 = j;
//       for (int k = 0; k < a; k++)
//       {
//         for (int l = 0; l < b; l++)
//         {
//           if (matrik2[besar][besar2] > matrik2[k][l])
//           {
//             besar = k;
//             besar2 = l;
//           }
//           simpan = matrik2[i][j];
//           matrik2[i][j] = matrik2[besar][besar2];
//           matrik2[besar][besar2] = simpan;
//         }
//       }
//     }
//   }
//   cout << endl;
//   for (int i = 0; i < a; i++)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       cout << matrik1[i][j] << " ";
//     }
//     cout << endl;
//   }
//   cout << endl
//        << "+" << endl;

//   for (int i = 0; i < a; i++)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       cout << matrik2[i][j] << " ";
//     }
//     cout << endl;
//   }
//   cout << "HASIL : " << endl;
//   for (int i = 0; i < a; i++)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       cout << matrik1[i][j] + matrik2[i][j] << " ";
//     }
//     cout << endl;
//   }
// }
#include <iostream>
using namespace std;

float a, b;
char aritmatika;
char ans = 'y';
void input()
{
  cout << "\nMasukan angka pertama : ";
  cin >> a;
  cout << "Masukan operator aritmatika (+, -, *, /) : ";
  cin >> aritmatika;
  cout << "Masukan angka kedua : ";
  cin >> b;
}

void perhitungan()
{
  switch (aritmatika)
  {
  case '+':
    cout << "\nHasil dari " << a << " + " << b << " = " << a + b;
    break;
  case '-':
    cout << "\nHasil dari " << a << " - " << b << " = " << a - b;
    break;
  case '*':
    cout << "\nHasil dari " << a << " * " << b << " = " << a * b;
    break;
  case '/':
    cout << "\nHasil dari " << a << " / " << b << " = " << a / b;
    break;
  default:
    cout << "\nOperator aritmatika yang anda masukan salah\n";
    input();
    break;
  }
}

int main()
{
  cout << "\nSelamat datang di program kalkulator sederhana\n";
  while (ans == 'y' || ans == 'Y')
  {
    // Masukan input user
    input();
    // proses perhitungan
    perhitungan();
    cout << "\n\nApakah anda ingin menghitung lagi? (y/n) : ";
    cin >> ans;
  }
  return 0;
}
