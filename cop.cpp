// // membuat segitiga dengan bintang
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i, j, k;
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= 5 - i; j++)
//       cout << " ";
//     for (k = 1; k <= 2 * i - 1; k++)
//       cout << "*";
//     cout << endl;
//   }
//   return 0;
// }

// membuat segitiga dengan huruf
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i, j, k;
//   char huruf = 'A';
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= 5 - i; j++)
//       cout << " "
//            << " ";
//     for (k = 1; k <= 2 * i - 1; k++)
//       cout << huruf++ << " ";
//     cout << endl;
//   }
//   return 0;
// }

// membuat dua segitiga siku siku dengan inputan angka
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i, j, k, l, m, n;
//   cout << "Masukkan angka : ";
//   cin >> n;
//   for (i = 1; i <= n; i++)
//   {
//     for (j = 1; j <= i; j++)
//       cout << j << " ";
//     cout << endl;
//   }
//   return 0;
// }

// membuat segitiga menurut dari angka terbesar yang di imputkan
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i, j, k, l, m, n;
//   cout << "Masukkan angka : ";
//   cin >> n;
//   for (i = n; i >= 1; i--)
//   {
//     for (j = 1; j <= i; j++)
//       cout << j << " ";
//     cout << endl;
//   }
//   return 0;
// }

// membuat huruf A dengan bintang
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i, j, k, l, m, n;
//   cout << "Masukkan angka : ";
//   cin >> n;
//   for (i = 1; i <= n; i++)
//   {
//     for (j = 1; j <= n - i; j++)
//       cout << " ";
//     for (k = 1; k <= 2 * i - 1; k++)
//       cout << "*";
//     cout << endl;
//   }
//   for (l = n - 1; l >= 1; l--)
//   {
//     for (m = 1; m <= n - l; m++)
//       cout << " ";
//     for (k = 1; k <= 2 * l - 1; k++)
//       cout << "*";
//     cout << endl;
//   }
//   return 0;
// }

// membuat alfabet A dengan huruf
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i, j, k, l, m, n;
//   char huruf = 'A';
//   cout << "Masukkan angka : ";
//   cin >> n;
//   for (i = 1; i <= n; i++)
//   {
//     for (j = 1; j <= n - i; j++)
//       cout << " ";
//     for (k = 1; k <= 2 * i - 1; k++)
//       cout << huruf++;
//     cout << endl;
//   }
//   for (l = n - 1; l >= 1; l--)
//   {
//     for (m = 1; m <= n - l; m++)
//       cout << " ";
//     for (k = 1; k <= 2 * l - 1; k++)
//       cout << huruf++;
//     cout << endl;
//   }
//   return 0;
// }

// membuat jam pasir
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i, j, k, l, m, n;
//   cout << "Masukkan angka : ";
//   cin >> n;
//   for (i = 1; i <= n; i++)
//   {
//     for (j = 1; j <= n - i; j++)
//       cout << " ";
//     for (k = 1; k <= 2 * i - 1; k++)
//       cout << "#";
//     cout << endl;
//   }
//   for (l = n - 1; l >= 1; l--)
//   {
//     for (m = 1; m <= n - l; m++)
//       cout << " ";
//     for (k = 1; k <= 2 * l - 1; k++)
//       cout << "#";
//     cout << endl;
//   }
//   return 0;
// }

// membuat piramida
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i, j, k, l, m, n;
//   cout << "Masukkan angka : ";
//   cin >> n;
//   for (i = 1; i <= n; i++)
//   {
//     for (j = 1; j <= n - i; j++)
//       cout << "  ";
//     for (k = 1; k <= 2 * i - 1; k++)
//       cout << "# ";
//     cout << endl;
//   }

//   return 0;
// }

// membuat sub program fungsi
// #include <iostream>
// using namespace std;
// int tambah(int a, int b)
// {
//   int c;
//   c = a + b;
//   return c;
// }
// int main()
// {
//   int x, y, z;
//   cout << "Masukkan angka pertama : ";
//   cin >> x;
//   cout << "Masukkan angka kedua : ";
//   cin >> y;
//   z = tambah(x, y);
//   cout << "Hasil penjumlahan : " << z << endl;
//   return 0;
// }

// membuat segitiga siku siku dengan huruf x dan o
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     if (i % 2 == 0)
//     {
//       for (int j = 1; j <= i; j++)
//       {
//         if (j % 2 == 0)
//           cout << "x ";
//         else
//           cout << "o ";
//       }
//     }
//     else
//     {
//       for (int j = 1; j <= i; j++)
//       {
//         if (j % 2 == 0)
//           cout << "o ";
//         else
//           cout << "x ";
//       }
//     }

//     cout << endl;
//   }
//   return 0;
// }

// membuat piramida dengan bintang
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n - i; j++)
//       cout << "  ";
//     for (int k = 1; k <= 2 * i - 1; k++)
//       cout << "* ";
//     cout << endl;
//   }

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, m;
//   cin >> n;
//   cin >> m;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = i; j < m + i; j++)
//       cout << j << " ";
//     cout << endl;
//   }
//   return 0;
// }

// membuat diamond kosong
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n - i; j++)
//       cout << " ";
//     for (int k = 1; k <= 2 * i - 1; k++)
//     {
//       if (k == 1 || k == 2 * i - 1)
//         cout << "*";
//       else
//         cout << " ";
//     }
//     cout << endl;
//   }
//   for (int i = n - 1; i >= 1; i--)
//   {
//     for (int j = 1; j <= n - i; j++)
//       cout << " ";
//     for (int k = 1; k <= 2 * i - 1; k++)
//     {
//       if (k == 1 || k == 2 * i - 1)
//         cout << "*";
//       else
//         cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// fungsi negatif positif
// #include <iostream>
// using namespace std;

// void cek(int a)
// {
//   if (a > 0 || a < 0)
//   {
//     if (a > 0)
//       cout << "Positif" << endl;

//     else if (a < 0)
//       cout << "Negatif" << endl;
//   }
//   else if (a == 0)
//     cout << "Nol" << endl;
// }

// int main()
// {
//   int x, y;
//   cin >> x;
//   cin >> y;

//   cek(x);
//   cek(y);

//   return 0;
// }
// MEMBUAT FUNGSI DERET
// #include <iostream>
// using namespace std;
// int deret(int a)
// {

//   if (a == 1)
//     return 1;
//   else
//     return a + deret(a - 1);
// }
// int main()
// {
//   int n, m;
//   cin >> n;
//   cin >> m;

//   cout << deret(n) << endl;
//   cout << deret(m) << endl;

//   return 0;
// }
// // rumus segitiga

// #include <iostream>
// using namespace std;

// int rs(int a, int b)
// {
//   int c;
//   c = a * b / 2;
//   return c;
// }
// int rp(int a, int b){
//   int c;
//   c = a * b;
//   return c;
// }
// int rl(int a){
//   const float phi = 3.14;
//   int c;
//   c = phi * a * a;
//   return c;
// }

// int main (){
//   string pilihan;
//   int a, b;

//   cin>>pilihan;
//   cin>>a;
//   cin>>b;

//   if (pilihan == "segitiga"){

//     cout<<rs(a,b)<<endl;
//   }
//   else if (pilihan == "persegi"){

//     cout<<rp(a,b)<<endl;
//   }
//   else if (pilihan == "lingkaran"){

//     cout<<rl(a)<<endl;
//   }
//   else{
//     cout<<"pilihan tidak ada"<<endl;
//   }
//   return 0;

// }

// membuat persegi x dan o
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, m;
//   cin >> n;
//   cin >> m;

//   if (n > 0 && m > 0)
//   {

//     for (int i = 1; i <= n; i++)
//     {

//       for (int j = 1; j <= m; j++)
//       {
//         cout << j * i << " ";
//       }

//       cout << endl;
//     }
//   }
//   else
//   {
//     cout << "Error!" << endl;
//   }

//   return 0;
// }

// making inverted pyramid
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;

//   if (n>0){

//   for (int i = n; i >= 1; i--)
//   {
//     for (int j = 1; j <= n - i; j++)
//       cout << " ";
//     for (int k = 1; k <= 2 * i - 1; k++)
//       cout << "*";
//     cout << endl;
//   }
//   }
//   else{
//     cout<<"Error!"<<endl;
//   }
//   return 0;
// }

// mebuat deret bilangan dari inputan
// #include <iostream>
// using namespace std;

// int main()
// {
//   int a, n, m, jumlah, sum;
//   cin >> a;
//   cin >> n; //9
//   cin >> m; //3
//   jumlah = a;
//   sum = 0;

//   if (n > 0 && m > 0)
//   {

//     for (int i = 0; i <= n; i++)
//     {
//       if (i < n)
//       {
//         cout << jumlah;
//         if (i < n - 1)
//         {
//           cout << " + ";
//         }
//       }

//       else if (i == n)
//       {
//         if (i == n)
//         {
//           cout << " = ";
//         }
//         cout << sum;
//       }
//       sum = sum + jumlah;
//       jumlah = jumlah + m;
//     }
//   }
//   else
//   {
//     cout << "Error!" << endl;
//   }

//   return 0;
// }
