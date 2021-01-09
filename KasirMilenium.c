//=======================================================================//
//                                UPDATE                                 //
//=======================================================================//
// >Tampilan pada masing-masing fungsi                                   //
// >Penambahan jenis pengguna yaitu Owner,                               //
//   -Fitur Owner :                                                      //
//      -Login,                                                          //
//      -Laporan Penjualan,                                              //
//      -Data Pegawai,                                                   //
//      -Absen Pegawai,                                                  //
//      -Gaji Pegawai,                                                   //
//      -About Us.                                                       //
// >Update fitur tamu, yaitu penambahan menu selesai                     //
//=======================================================================//


//=======================================================================//
//                      Definisi dan Penyertaan Lib                      //
//=======================================================================//
#include <stdio.h> //Header Standar Input/Output dalam C
#include <time.h> // Header dalam C untuk memanipulasi waktu
#include <string.h> //Header untuk melakukan manipulasi string
#include <stdlib.h> //Header untuk operasi pembanding dan operasi konversi
#include <windows.h> //Header untuk menambah warna


//=======================================================================//
//          Deklarasi variabel yang digunakan dalam fungsi ini           //
//=======================================================================//
int hrg_mknn1, hrg_mknn2, hrg_mknn3, hrg_mknn4, hrg_mknn5;
int qtt_mknn1, qtt_mknn2, qtt_mknn3, qtt_mknn4, qtt_mknn5;
int ttl_mknn1, ttl_mknn2, ttl_mknn3, ttl_mknn4, ttl_mknn5;
int hrg_mnm1, hrg_mnm2, hrg_mnm3, hrg_mnm4, hrg_mnm5;
int qtt_mnm1, qtt_mnm2, qtt_mnm3, qtt_mnm4, qtt_mnm5;
int ttl_mnm1, ttl_mnm2, ttl_mnm3, ttl_mnm4, ttl_mnm5;
int hrg_cmln1, hrg_cmln2, hrg_cmln3, hrg_cmln4, hrg_cmln5;
int qtt_cmln1, qtt_cmln2, qtt_cmln3, qtt_cmln4, qtt_cmln5;
int ttl_cmln1, ttl_cmln2, ttl_cmln3, ttl_cmln4, ttl_cmln5;
int discount;
int harga;
int harga_akhir;
int uang;
int kembalian;
int total;
int program;
char nama[50];
char alamat[50];
char telepon[15];
char supplier[50];
int kembali;
int programTamu;
int panjangX,panjangY,button,kode;
int pilihan;
char usrnm[20], pass[20];
char *tamu[20];
char *meja[3];
char *customer[20];
char *telp_customer[20];
char *almt_customer[30];
char *id[3];
char *pegawai[30];
char *telp_pegawai[20];
char *almt_pegawai[40];
char *bulan[20];
char *gaji[30];


//=======================================================================//
//          Deklarasi fungsi yang digunakan dalam program ini            //
//=======================================================================//
void namaProgram();
void posisi(int x , int y);
void warna(unsigned short color);
void kotak(int a,int b,int c,int d);
void kotak2(int a,int b,int c,int d);
void jenisPengguna();
void halamanAwal(int panjangX,int panjangY, int button,int kode, int pilihan);
void loginAdmin();
void loginTamu();
void headerMenu();
void daftarMenu();
void mendapatkanDiskon();
void potonganHarga();
void hargaAkhir();
void transaksiPembayaran();
void transaksiKembalian();
void laporanTransaksi();
void strukTransaksi();
void menuProgram();
void menuTamu();
void produkKedai();
void tentangKami();
void menuSupplier();
void dataSupplier();
void fileSupplier();
void readSupplier();
void headerProgram();
void closeProgram();
void laporanPenjualan();
void menuKonfirmasi();
void menuKonfirmasiSupplier();
void absenPegawai();
void dataCustomer();
void menuOwner();
void menuPegawai();
void upPegawai();
void filePegawai();
void readPegawai();
void menuKonfirmasiOwner();
void menuGaji();
void upGaji();
void fileGaji();
void readGaji();
void readAbsen();
void harapTunggu();

//=======================================================================//
//       Merupakan fungsi utama dalam program yang akan dieksekusi       //
//                pertama kali saat program dijalankan                   //
//=======================================================================//
int main(){
    halamanAwal(panjangX, panjangY, button, kode, pilihan);
}

//=========================Fungsi Nama Program===========================//
//=======================================================================//
// Nama Fungsi    : Nama Program                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Nama Program saat Pertama kali Program   //
//                  dijalankan                                           //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void namaProgram(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                SELAMAT DATANG                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,11); printf ("%s", asctime (Sys_T));

    posisi(67,26); printf ("Developed By :");
    posisi(61,28); printf ("2005551044 - Medhiko Biraja");
    posisi(50,29); printf ("2005551151 - I Gusti Made Agung Ary Surya Persada");
    posisi(58,30); printf ("2005551087 - A.A. Krisnha Wirayudha");

    posisi(53,20);
    for(int i=1 ; i<=40 ; i++){
        warna(11);
        printf("%c",219);
        Sleep(100);
    }
    system ("cls");
}

//============================Fungsi Posisi==============================//
//=======================================================================//
// Nama Fungsi    : Posisi                                               //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menentukan letak kursor                              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void posisi(int x , int y){
    HANDLE h;
    COORD c;
    c.X = x;
    c.Y = y;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}

//=============================Fungsi Warna==============================//
//=======================================================================//
// Nama Fungsi    : Warna                                                //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menentukan Warna tampilan                            //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void warna(unsigned short color){
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

//==============================Fungsi Kotak=============================//
//=======================================================================//
// Nama Fungsi    : Kotak                                                //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Untuk membuat kotak pada tampilan                    //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void kotak(int a,int b,int c,int d){
	int i,j;
	for(i=a;i<c;i++)
	{
		posisi(i,b);printf("%c",196);
		posisi(i,d);printf("%c",196);
	}
	for(j=b;j<d;j++)
	{
		posisi(a,j);printf("%c",179);
		posisi(c,j);printf("%c",179);
	}
		posisi(a,b);printf("%c",218);
		posisi(c,b);printf("%c",191);
		posisi(a,d);printf("%c",192);
		posisi(c,d);printf("%c",217);
}

//=============================Fungsi Kotak2=============================//
//=======================================================================//
// Nama Fungsi    : Kotak2                                               //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Untuk membuat kotak rangkap pada tampilan          //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void kotak2(int a,int b,int c,int d){
	int i,j;
	for(i=a;i<c;i++)
	{
		posisi(i,b);printf("\xcd");
		posisi(i,d);printf("\xcd");
	}
	for(j=b;j<d;j++)
	{
		posisi(a,j);printf("\xba");
		posisi(c,j);printf("\xba");
	}
		posisi(a,b);printf("\xc9");
		posisi(c,b);printf("\xbb");
		posisi(a,d);printf("\xc8");
		posisi(c,d);printf("\xbc");
}

//=========================Fungsi Jenis Pengguna=========================//
//=======================================================================//
// Nama Fungsi    : Jenis Pengguna                                       //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menentukan jenis pengguna program                    //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void jenisPengguna(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    system ("cls");
    warna(11);
    kotak2(30,2,117,35);
    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                SELAMAT DATANG                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(57,15,90,18);
    kotak(61,19,85,22);
    kotak(61,23,85,26);
    kotak(61,27,85,30);
    warna(7);
    posisi(62,16);printf("Pilih Kategori Pengguna!");
    posisi(59,17);printf("(Kursor(>) Untuk Menggerakkan)");
    posisi(70,20);printf("Owner");
    posisi(63,21);printf("(Masuk Sebagai Owner)");
    posisi(70,24);printf("Kasir");
    posisi(63,25);printf("(Masuk Sebagai Kasir)");
    posisi(71,28);printf("Tamu");
    posisi(63,29);printf("(Masuk Sebagai Tamu)");
}

//==========================Fungsi Halaman Awal==========================//
//=======================================================================//
// Nama Fungsi    : Halaman Awal                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan halaman awal saat program dijalankan     //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void halamanAwal(int panjangX,int panjangY, int button,int kode, int pilihan){
    namaProgram();

    panjangX = 58;
    panjangY = 20;

    do{
        jenisPengguna();

        posisi(panjangX,panjangY);
        printf(">>");
        button = getch();

        if(button == 77 && panjangY == 20)
        {
            panjangY = 24;
        }
        else if(button == 77 && panjangY == 24)
        {
            panjangY = 28;
        }
        else if(button == 77 && panjangY == 28)
        {
            panjangY = 20;
        }
    }
    while(button != 13);

    if(panjangY == 20 && panjangX == 58){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        loginOwner();
        menuOwner();

    }
    else if(panjangY == 24 && panjangX == 58){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        loginAdmin();
        menuProgram();
    }
    else if(panjangY == 28 && panjangX == 58){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        loginTamu();
    }

}

//==========================Fungsi Header Menu===========================//
//=======================================================================//
// Nama Fungsi    : Header Menu                                          //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Memberikan header pada setiap halaman dan menu       //
//                  yang dipilih, disertai dengan tanggal dan waktu      //
//                  secara realtime                                      //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-12-2020                               Tgl: 09-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void headerMenu(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    printf("\t\t\t\t\t+=======================================================================+\n");
    printf ("\t\t\t\t\t                         KEDAI PEMERSATU BANGSA\n");
    printf ("\t\t\t\t\t                    Jl. Pantai Berawa No. 888, Bali\n");
    printf ("\t\t\t\t\t                             Developed By : \n");
    printf ("\t\t\t\t\t                      2005551044 - Medhiko Biraja\n");
    printf ("\t\t\t\t\t            2005551151 - I Gusti Made Agung Ary Surya Persada\n");
    printf ("\t\t\t\t\t                  2005551087 - A.A. Krisnha Wirayudha\n");
    printf ("\t\t\t\t\t                        %s", asctime (Sys_T));
    printf("\t\t\t\t\t+=======================================================================+\n");
}

//==========================Fungsi Login Admin===========================//
//=======================================================================//
// Nama Fungsi    : Login Admin                                          //
// Input Argumen  : char usrnm, pass                                     //
// Output Argumen : -                                                    //
// Deskripsi      : Meminta menampilkan username dan password admin      //
//                  yang diberikan pertama kali dan merupakan akun       //
//                  default                                              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-12-2020                               Tgl: 09-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void loginAdmin(){
    char c;
    int z=0;

    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);

    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                SELAMAT DATANG                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(55,17,92,19);
    kotak(55,21,92,27);
    warna(7);
    posisi(60,18);printf("Silahkan Masukkan Akun Anda");

        Login :
        posisi(58,23);printf ("Username : ");
        scanf ("%s", &usrnm);
        posisi(58,25);printf ("Password : ");
        while((c=getch())!=13)
        {
          pass[z++]=c;
          printf("%c",'*');
        }
        pass[z]='\0';
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        warna(7);
        if (strcmp (usrnm, "Medhiko")==0 && strcmp (pass, "2005551044")==0){
            absenPegawai();
            system ("cls");
        }else if (strcmp (usrnm, "Surya")==0 && strcmp (pass, "2005551151")==0){
            absenPegawai();
            system ("cls");
        }else if (strcmp (usrnm, "Kris")==0 && strcmp (pass, "2005551087")==0){
            absenPegawai();
            system ("cls");
        }else {
            system ("cls");
            printf ("\t\t\t\t\t\t  Username atau Password yang Anda Masukkan Salah!\n");
            printf ("\t\t\t\t\t\t         Perhatikan Penggunaan Capslock!\n");
            halamanAwal(panjangX, panjangY, button, kode, pilihan);
        }

}

//==========================Fungsi Login Owner===========================//
//=======================================================================//
// Nama Fungsi    : Login Owner                                          //
// Input Argumen  : char usrnm, pass                                     //
// Output Argumen : -                                                    //
// Deskripsi      : Meminta menampilkan username dan password admin      //
//                  yang diberikan pertama kali dan merupakan akun       //
//                  default                                              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-12-2020                               Tgl: 09-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void loginOwner(){
    char c;
    int z=0;

    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);

    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                SELAMAT DATANG                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(55,17,92,19);
    kotak(55,21,92,27);
    warna(7);
    posisi(60,18);printf("Silahkan Masukkan Akun Anda");

        Login :
        posisi(58,23);printf ("Username : ");
        scanf ("%s", &usrnm);
        posisi(58,25);printf ("Password : ");
        while((c=getch())!=13)
        {
          pass[z++]=c;
          printf("%c",'*');
        }
        pass[z]='\0';
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        warna(7);
        if (strcmp (usrnm, "Medhiko")==0 && strcmp (pass, "2005551044")==0){
            system ("cls");
        }else if (strcmp (usrnm, "Surya")==0 && strcmp (pass, "2005551151")==0){
            system ("cls");
        }else if (strcmp (usrnm, "Kris")==0 && strcmp (pass, "2005551087")==0){
            system ("cls");
        }else {
            system ("cls");
            printf ("\t\t\t\t\t\t  Username atau Password yang Anda Masukkan Salah!\n");
            printf ("\t\t\t\t\t\t         Perhatikan Penggunaan Capslock!\n");
            halamanAwal(panjangX, panjangY, button, kode, pilihan);
        }

}

//===========================Fungsi Login Tamu===========================//
//=======================================================================//
// Nama Fungsi    : Login Tamu                                           //
// Input Argumen  : char nama                                            //
// Output Argumen : -                                                    //
// Deskripsi      : User akan masuk sebagai tamu dan diminta untuk       //
//                  memasukkan nama depannya                             //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-12-2020                               Tgl: 09-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 1.2                                      Rev. 2               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void loginTamu(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);

    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                SELAMAT DATANG                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(55,17,92,19);
    kotak(55,22,92,26);
    warna(7);
    posisi(60,18);printf("Anda Akan Masuk Sebagai Tamu");
    posisi(57,24);printf ("Masukkan Nama Depan Anda : ");
    scanf ("%s", &tamu);

    posisi(68,33);
        for(int i=1 ; i<=10 ; i++){
            warna(11);
            printf("%c",219);
            Sleep(100);
        }
    warna(7);
    system ("cls");
    menuTamu();

}

//==========================Fungsi Daftar Menu===========================//
//=======================================================================//
// Nama Fungsi    : Daftar Menu                                          //
// Input Argumen  : int pilihan                                          //
//                  int makanan                                          //
//                  int minuman                                          //
//                  int cemilan                                          //
// Output Argumen : harga                                                //
// Deskripsi      : Menampilkan menu menu makanan, minuman, cemilan      //
//                  dan harga yang terdapat dalam Kedai Pemersatu Bangsa //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 12-12-2020                               Tgl: 12-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl  : 02-12-2020                                Tgl: 02-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.1                                      Rev. 2               //
// Tgl  : 19-12-2020                                Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void daftarMenu(){
    int pilihan;
    int makanan;
    int minuman;
    int cemilan;
    int lagi;

    printf("\n\t\t\t\t\t\t\t\t  --Customer : %s--\n", customer);
    kategori1:
    printf("\n\n\t\t\t\t\t\t\t\t -- Kategori Pesanan --\n\n");
    printf("\t\t\t\t\t\t\t\t=========================\n");
    printf("\t\t\t\t\t\t\t\t|  No |     Kategori    |\n");
    printf("\t\t\t\t\t\t\t\t|=====|=================|\n");
    printf("\t\t\t\t\t\t\t\t|  1  | Makanan         |\n");
    printf("\t\t\t\t\t\t\t\t|  2  | Minuman         |\n");
    printf("\t\t\t\t\t\t\t\t|  3  | Cemilan         |\n");
    printf("\t\t\t\t\t\t\t\t=========================\n\n");
    printf("\t\t\t\t\t\t\t     Masukkan Pilihan Anda (1-3) : ");
    scanf("%d", &pilihan);

    if(pilihan == 1){
        printf("\n\t\t\t\t\t\t\t         KEDAI PEMERSATU BANGSA\n");
        printf("\t\t\t\t\t\t\t          -- DAFTAR MAKANAN --\n\n");
        printf("\t\t\t\t\t\t\t   ===================================\n");
        printf("\t\t\t\t\t\t\t   |  No |     Makanan     |  Harga  |\n");
        printf("\t\t\t\t\t\t\t   |=====|=================|=========|\n");
        printf("\t\t\t\t\t\t\t   |  1  | Nasi Telur      | 6500    |\n");
        printf("\t\t\t\t\t\t\t   |  2  | Nasi Lele       | 8500    |\n");
        printf("\t\t\t\t\t\t\t   |  3  | Nasi Goreng     | 8000    |\n");
        printf("\t\t\t\t\t\t\t   |  4  | Nasi Liwet      | 7500    |\n");
        printf("\t\t\t\t\t\t\t   |  5  | Nasi Ayam       | 9000    |\n");
        printf("\t\t\t\t\t\t\t   ===================================\n");

        makanan1:
        printf("\t\t\t\t\t\t\t    Masukkan Pesanan Anda (1-5) : ");
        scanf("%d", &makanan);

        switch(makanan) { //kontrol percabangan switch case

             case 1 :
                    hrg_mknn1=6500;
                    printf ("\t\t\t\t\t\t\t    ==> Nasi Telur \t: @ Rp.%d\n", hrg_mknn1);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mknn1);
                    ttl_mknn1=qtt_mknn1*hrg_mknn1;
                    break;
            case 2 :
                    hrg_mknn2=8500;
                    printf ("\t\t\t\t\t\t\t    ==> Nasi Lele \t: @ Rp.%d\n", hrg_mknn2);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mknn2);
                    ttl_mknn2=qtt_mknn2*hrg_mknn2;
                    break;
            case 3 :
                    hrg_mknn3=8000;
                    printf ("\t\t\t\t\t\t\t    ==> Nasi Goreng \t: @ Rp.%d\n", hrg_mknn3);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mknn3);
                    ttl_mknn3=qtt_mknn3*hrg_mknn3;
                    break;
            case 4 :
                    hrg_mknn4=7500;
                    printf ("\t\t\t\t\t\t\t    ==> Nasi Liwet \t: @ Rp.%d\n", hrg_mknn4);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mknn4);
                    ttl_mknn4=qtt_mknn4*hrg_mknn4;
                    break;
            case 5 :
                    hrg_mknn5=9000;
                    printf ("\t\t\t\t\t\t\t    ==> Nasi Ayam \t: @ Rp.%d\n", hrg_mknn5);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mknn5);
                    ttl_mknn5=qtt_mknn5*hrg_mknn5;
                    break;

            default:
                    printf("\n\t\t\t\t\t\t       Error..!!!, Menu no.%d tidak ada dalam daftar\n", makanan);
                printf("\t\t\t\t\t\t                  Silakan input kembali\n\n");
                    goto makanan1;
        }
    }
    else if(pilihan == 2){
        printf("\n\t\t\t\t\t\t\t         KEDAI PEMERSATU BANGSA\n");
        printf("\t\t\t\t\t\t\t          -- DAFTAR MINUMAN --\n\n");
        printf("\t\t\t\t\t\t\t   ===================================\n");
        printf("\t\t\t\t\t\t\t   |  No |     Minuman     |  Harga  |\n");
        printf("\t\t\t\t\t\t\t   |=====|=================|=========|\n");
        printf("\t\t\t\t\t\t\t   |  1  | Es Teh          | 2000    |\n");
        printf("\t\t\t\t\t\t\t   |  2  | Es Jeruk        | 2500    |\n");
        printf("\t\t\t\t\t\t\t   |  3  | Es Susu         | 3500    |\n");
        printf("\t\t\t\t\t\t\t   |  4  | Es Kopi         | 3000    |\n");
        printf("\t\t\t\t\t\t\t   |  5  | Es Buah         | 5000    |\n");
        printf("\t\t\t\t\t\t\t   ===================================\n");

        minuman1:
        printf("\t\t\t\t\t\t\t   Masukkan Pesanan Anda (1-5) : ");
        scanf("%d", &minuman);

        switch(minuman) {

            case 1 :
                    hrg_mnm1=2000;
                    printf ("\t\t\t\t\t\t\t    ==> Es Teh \t\t: @ Rp.%d\n", hrg_mnm1);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mnm1);
                    ttl_mnm1=qtt_mnm1*hrg_mnm1;
                    break;
            case 2 :
                    hrg_mnm2=2500;
                    printf ("\t\t\t\t\t\t\t    ==> Es jeruk \t: @ Rp.%d\n", hrg_mnm2);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mnm2);
                    ttl_mnm2=qtt_mnm2*hrg_mnm2;
                    break;
            case 3 :
                    hrg_mnm3=3500;
                    printf ("\t\t\t\t\t\t\t    ==> Es Susu \t: @ Rp.%d\n", hrg_mnm3);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mnm3);
                    ttl_mnm3=qtt_mnm3*hrg_mnm3;
                    break;
            case 4 :
                    hrg_mnm4=3000;
                    printf ("\t\t\t\t\t\t\t    ==> Es Kopi \t: @ Rp.%d\n", hrg_mnm4);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mnm4);
                    ttl_mnm4=qtt_mnm4*hrg_mnm4;
                    break;
            case 5 :
                    hrg_mnm5=5000;
                    printf ("\t\t\t\t\t\t\t    ==> Es Buah \t: @ Rp.%d\n", hrg_mnm5);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_mnm5);
                    ttl_mnm5=qtt_mnm5*hrg_mnm5;
                    break;
            default:
                printf("\n\t\t\t\t\t\t       Error..!!!, Menu no.%d tidak ada dalam daftar\n", minuman);
                printf("\t\t\t\t\t\t                  Silakan input kembali\n\n");
                goto minuman1;
        }

    }
    else if(pilihan == 3){
        printf("\n\t\t\t\t\t\t\t         KEDAI PEMERSATU BANGSA\n");
        printf("\t\t\t\t\t\t\t          -- DAFTAR CEMILAN --\n\n");
        printf("\t\t\t\t\t\t\t   ===================================\n");
        printf("\t\t\t\t\t\t\t   |  No |     Cemilan     |  Harga  |\n");
        printf("\t\t\t\t\t\t\t   |=====|=================|=========|\n");
        printf("\t\t\t\t\t\t\t   |  1  | Kentang Goreng  | 6000    |\n");
        printf("\t\t\t\t\t\t\t   |  2  | Tahu Goreng     | 5000    |\n");
        printf("\t\t\t\t\t\t\t   |  3  | Tahu Bacem      | 5000    |\n");
        printf("\t\t\t\t\t\t\t   |  4  | Tempe Bacem     | 5000    |\n");
        printf("\t\t\t\t\t\t\t   |  5  | Perkedel        | 5000    |\n");
        printf("\t\t\t\t\t\t\t   ===================================\n");
        cemilan1:
        printf("\t\t\t\t\t\t\t   Masukkan Pesanan Anda (1-5) : ");
        scanf("%d", &cemilan);

        switch(cemilan) {

            case 1 :
                    hrg_cmln1=6000;
                    printf ("\t\t\t\t\t\t\t    ==> Kentang Goreng \t: @ Rp.%d\n", hrg_cmln1);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_cmln1);
                    ttl_cmln1=qtt_cmln1*hrg_cmln1;
                    break;
            case 2 :
                    hrg_cmln2=5000;
                    printf ("\t\t\t\t\t\t\t    ==> Tahu Goreng \t: @ Rp.%d\n", hrg_cmln2);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_cmln2);
                    ttl_cmln2=qtt_cmln2*hrg_cmln2;
                    break;
            case 3 :
                    hrg_cmln3=5000;
                    printf ("\t\t\t\t\t\t\t    ==> Tahu Bacem \t: @ Rp.%d\n", hrg_cmln3);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_cmln3);
                    ttl_cmln3=qtt_cmln3*hrg_cmln3;
                    break;
            case 4 :
                    hrg_cmln4=5000;
                    printf ("\t\t\t\t\t\t\t    ==> Tempe Bacem \t: @ Rp.%d\n", hrg_cmln4);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_cmln4);
                    ttl_cmln4=qtt_cmln4*hrg_cmln4;
                    break;
            case 5 :
                    hrg_cmln5=5000;
                    printf ("\t\t\t\t\t\t\t    ==> Perkedel \t: @ Rp.%d\n", hrg_cmln5);
                    printf ("\t\t\t\t\t\t\t    Jumlah pesanan \t: "); scanf("%d", &qtt_cmln5);
                    ttl_cmln5=qtt_cmln5*hrg_cmln5;
                    break;
            default:
                printf("\n\t\t\t\t\t\t       Error..!!!, Menu no.%d tidak ada dalam daftar\n", cemilan);
                printf("\t\t\t\t\t\t                  Silakan input kembali\n\n");
                goto cemilan1;
        }
    }
    else{
        printf("\n\t\t\t\t\t\t\t    ================================\n");
        printf("\t\t\t\t\t\t\t    -Input yang Anda Masukkan Salah-\n");
        printf("\t\t\t\t\t\t\t    ================================\n");
        printf("\t\t\t\t\t\t\t         Silakan input kembali\n");
        goto kategori1;
    }

    printf("\n\t\t\t\t\t\t\t\t  +=====================+\n");
    printf("\t\t\t\t\t\t\t\t  | Ingin Memesan Lagi? |\n");
    printf("\t\t\t\t\t\t\t\t  +=====================+\n");
    printf("\t\t\t\t\t\t\t\t  |  1.  |      Ya      |\n");
    printf("\t\t\t\t\t\t\t\t  |  2.  |     Tidak    |\n");
    printf("\t\t\t\t\t\t\t\t  +=====================+\n");
    printf("\t\t\t\t\t\t\t\t   Pilihan Anda : ");
    scanf("%d",&lagi);

    if(lagi==1){
        goto kategori1;
    }else{
        goto hasil;
    }
     hasil :
        printf("\n\t\t\t\t\t+=======================================================================+\n");
        printf("\t\t\t\t\t|Nama Pesanan \t\t\t|  Harga \t| Jumlah |    Total\t|\n");
        printf("\t\t\t\t\t+=======================================================================+\n");

        if(qtt_mknn1>0){
            printf("\t\t\t\t\t|Nasi Telur\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn1, qtt_mknn1, ttl_mknn1);
        }else{}

        if(qtt_mknn2>0){
            printf("\t\t\t\t\t|Nasi Lele\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn2, qtt_mknn2, ttl_mknn2);
        }else{}

        if(qtt_mknn3>0){
            printf("\t\t\t\t\t|Nasi Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn3, qtt_mknn3, ttl_mknn3);
        }else{}

        if(qtt_mknn4>0){
            printf("\t\t\t\t\t|Nasi Liwet\t\t\t|Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn4, qtt_mknn4, ttl_mknn4);
        }else{}

        if(qtt_mknn5>0){
            printf("\t\t\t\t\t|Nasi Ayam\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn5, qtt_mknn5, ttl_mknn5);
        }else{}

        if(qtt_mnm1>0){
            printf("\t\t\t\t\t|Es Teh\t\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm1, qtt_mnm1, ttl_mnm1);
        }else{}

        if(qtt_mnm2>0){
            printf("\t\t\t\t\t|Es Jeruk\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm2, qtt_mnm2, ttl_mnm2);
        }else{}

        if(qtt_mnm3>0){
            printf("\t\t\t\t\t|Es Susu\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm3, qtt_mnm3, ttl_mnm3);
        }else{}

        if(qtt_mnm4>0){
            printf("\t\t\t\t\t|Es Kopi\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm4, qtt_mnm4, ttl_mnm4);
        }else{}

        if(qtt_mnm5>0){
            printf("\t\t\t\t\t|Es Buah\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm5, qtt_mnm5, ttl_mnm5);
        }else{}

        if(qtt_cmln1>0){
            printf("\t\t\t\t\t|Kentang Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln1, qtt_cmln1, ttl_cmln1);
        }else{}

        if(qtt_cmln2>0){
            printf("\t\t\t\t\t|Tahu Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln2, qtt_cmln2, ttl_cmln2);
        }else{}

        if(qtt_cmln3>0){
            printf("\t\t\t\t\t|Tahu Bacem\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln3, qtt_cmln3, ttl_cmln3);
        }else{}

        if(qtt_cmln4>0){
            printf("\t\t\t\t\t|Tempe Bacem\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln4, qtt_cmln4, ttl_cmln4);
        }else{}

        if(qtt_cmln5>0){
            printf("\t\t\t\t\t|Perkedel\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln5, qtt_cmln5, ttl_cmln5);
        }else{}

        printf("\t\t\t\t\t+=======================================================================+\n\n");
        printf("\t\t\t\t\t+=======================================================================+\n");
        total=ttl_mknn1+ttl_mknn2+ttl_mknn3+ttl_mknn4+ttl_mknn5+ttl_mnm1+ttl_mnm2+ttl_mnm3+ttl_mnm4+ttl_mnm5+ttl_cmln1+ttl_cmln2+ttl_cmln3+ttl_cmln4+ttl_cmln5;
        printf("\t\t\t\t\t|Harga \t\t\t\t\t\t: \tRp.%d   \t|\n", total);
        printf("\t\t\t\t\t+=======================================================================+\n\n");

    mendapatkanDiskon();
}

//======================Fungsi Mendapatkan Diskon========================//
//=======================================================================//
// Nama Fungsi    : Mendapatkan Diskon                                   //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menentukan diskon yang didapat                       //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 12-12-2020                               Tgl: 12-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void mendapatkanDiskon(){

        if (total >= 100000){
            discount = 25;
            printf("\t\t\t\t\t+=======================================================================+\n");
            printf("\t\t\t\t\t|Berhasil Mendapatkan Potongan Harga Sebesar \t: \t%d persen!\t|\n", discount);
        }else if (total >= 80000){
            discount = 10;
            printf("\t\t\t\t\t+=======================================================================+\n");
            printf("\t\t\t\t\t|Berhasil Mendapatkan Potongan Harga Sebesar \t: \t%d persen!\t|\n", discount);
        }else if (total >= 50000){
            discount = 5;
            printf("\t\t\t\t\t+=======================================================================+\n");
            printf("\t\t\t\t\t|Berhasil Mendapatkan Potongan Harga Sebesar \t: \t%d persen!\t|\n", discount);
        }else {
            printf("\t\t\t\t\t+=======================================================================+\n");
            printf("\t\t\t\t\t|Anda tidak Mendapatkan Diskon\t\t\t:\t-\t\t|\n");
        }
    potonganHarga();
}

//=========================Fungsi Potongan Harga=========================//
//=======================================================================//
// Nama Fungsi    : Potongan Harga                                       //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menentukan potongan harga                            //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 12-12-2020                               Tgl: 12-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void potonganHarga(){
    harga = discount*total/100;
    printf("\t\t\t\t\t+=======================================================================+\n");
    printf("\t\t\t\t\t Diskon Terakumulasikan Sebesar \t\t: \tRp.%d  \t\n", harga);
    printf("\t\t\t\t\t+=======================================================================+\n");

    hargaAkhir();
}

//==========================Fungsi Harga Akhir===========================//
//=======================================================================//
// Nama Fungsi    : Harga Akhir                                          //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menentukan harga akhir setelah diskon                //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 12-12-2020                               Tgl: 12-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void hargaAkhir(){
    harga_akhir = total-harga;

    printf("\t\t\t\t\t+=======================================================================+\n");
    printf("\t\t\t\t\t|Total Harga yang Harus Dibayar Sebesar \t: \tRp.%d  \t|\n", harga_akhir);
    printf("\t\t\t\t\t+=======================================================================+\n");

    transaksiPembayaran();
}

//=====================Fungsi Transaksi Pembayaran=======================//
//=======================================================================//
// Nama Fungsi    : Transaksi Pembayaran                                 //
// Input Argumen  : int uang                                             //
// Output Argumen :                                                      //
// Deskripsi      : Menginputkan uang yang harus dibayar                 //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 13-12-2020                               Tgl: 13-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//=======================================================================//
void transaksiPembayaran(){
    Transaksi :
    printf("\t\t\t\t\t Uang Pembayaran \t\t\t\t: \tRp.");
    scanf("%d",&uang);
    if(uang<harga_akhir){
        printf("\t\t\t\t\t Uang tidak cukup!\n");
            goto Transaksi;
        }
        else{}

    transaksiKembalian();
}

//=====================Fungsi Transaksi Kembalian========================//
//=======================================================================//
// Nama Fungsi    : Transaksi Kembalian                                  //
// Input Argumen  : int uang                                             //
// Output Argumen : kembalian                                            //
// Deskripsi      : menampilkan kembalian                                //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 13-12-2020                               Tgl: 13-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//=======================================================================//
void transaksiKembalian(){
    kembalian = uang-harga_akhir;
    printf("\t\t\t\t\t+=======================================================================+\n");
    printf("\t\t\t\t\t Kembalian \t\t\t\t\t:   \tRp.%d\n", kembalian);
    printf("\t\t\t\t\t+=======================================================================+\n");

    laporanTransaksi();

    printf("\t\t\t\t\t+=======================================================================+\n");
    printf("\t\t\t\t\t|\t\t     Terima Kasih Atas Kunjungan Anda\t\t\t|\n");
    printf("\t\t\t\t\t|\t\t   Kami Nanti Kunjungan Anda Berikutnya\t\t\t|\n");
    printf("\t\t\t\t\t|\t\t\t         MERDEKA!\t\t\t\t|\n");
    printf("\t\t\t\t\t+=======================================================================+\n");
}

//========================Fungsi Laporan Transaksi=======================//
//=======================================================================//
// Nama Fungsi    : Laporan Transaksi                                    //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan list pesanan antara lain : Nama Pesanan, //
//                  Jumlah, Harga, Total Harga, Diskon, serta Harga Akhir//
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 13-12-2020                               Tgl: 13-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 13-12-2020                               Tgl: 18-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.1                                      Rev. 2               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.2                                      Rev. 3               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 3.0                                      Rev. 4               //
// Tgl   : 07-01-2021                               Tgl: 07-01-2021      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void laporanTransaksi(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    FILE * fPointer;

    fPointer = fopen("Report Transaksi Pembelian.txt", "a");

        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"\t\t       %s", asctime (Sys_T));
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"\t\t\t    STRUK BELANJA \n\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer," Meja\t\t: %s\n", meja);
        fprintf(fPointer," Nama\t\t: %s\n", customer);
        fprintf(fPointer," No Telepon\t: %s\n", telp_customer);
        fprintf(fPointer," Alamat\t\t: %s\n", almt_customer);
        fprintf(fPointer,"+=======================================================================+\n\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Nama Pesanan \t\t\t|  Harga \t| Jumlah |    Total\t|\n");
        fprintf(fPointer,"+=======================================================================+\n");


        if(qtt_mknn1>0){
          fprintf(fPointer,"|Nasi Telur\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn1, qtt_mknn1, ttl_mknn1);
        }else{}

        if(qtt_mknn2>0){
            fprintf(fPointer,"|Nasi Lele\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn2, qtt_mknn2, ttl_mknn2);
        }else{}

        if(qtt_mknn3>0){
            fprintf(fPointer,"|Nasi Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn3, qtt_mknn3, ttl_mknn3);
        }else{}

        if(qtt_mknn4>0){
            fprintf(fPointer,"|Nasi Liwet\t\t\t|Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn4, qtt_mknn4, ttl_mknn4);
        }else{}

        if(qtt_mknn5>0){
            fprintf(fPointer,"|Nasi Ayam\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn5, qtt_mknn5, ttl_mknn5);
        }else{}

        if(qtt_mnm1>0){
           fprintf(fPointer,"|Es Teh\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm1, qtt_mnm1, ttl_mnm1);
        }else{}

        if(qtt_mnm2>0){
           fprintf(fPointer,"|Es Jeruk\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm2, qtt_mnm2, ttl_mnm2);
        }else{}

        if(qtt_mnm3>0){
           fprintf(fPointer,"|Es Susu\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm3, qtt_mnm3, ttl_mnm3);
        }else{}

        if(qtt_mnm4>0){
           fprintf(fPointer,"|Es Kopi\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm4, qtt_mnm4, ttl_mnm4);
        }else{}

        if(qtt_mnm5>0){
           fprintf(fPointer,"|Es Buah\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm5, qtt_mnm5, ttl_mnm5);
        }else{}

        if(qtt_cmln1>0){
          fprintf(fPointer,"|Kentang Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln1, qtt_cmln1, ttl_cmln1);
        }else{}

        if(qtt_cmln2>0){
           fprintf(fPointer,"|Tahu Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln2, qtt_cmln2, ttl_cmln2);
        }else{}

        if(qtt_cmln3>0){
            fprintf(fPointer,"|Tahu Bacem\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln3, qtt_cmln3, ttl_cmln3);
        }else{}

        if(qtt_cmln4>0){
            fprintf(fPointer,"|Tempe Bacem\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln4, qtt_cmln4, ttl_cmln4);
        }else{}

        if(qtt_cmln5>0){
            fprintf(fPointer,"|Perkedel\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln5, qtt_cmln5, ttl_cmln5);
        }else{}

        fprintf(fPointer,"+=======================================================================+\n\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Harga \t\t\t\t\t\t: \tRp.%d   \t|\n", total);
        fprintf(fPointer,"+=======================================================================+\n\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Berhasil Mendapatkan Potongan Harga Sebesar \t: \t%d persen!\t|\n", discount);
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer," Diskon Terakumulasikan Sebesar \t\t: \tRp.%d\t\t \n", harga);
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Total Harga yang Harus Dibayar Sebesar \t: \tRp.%d  \t|\n", harga_akhir);
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer," Uang Pembayaran \t\t\t\t: \tRp.%d\n", uang);
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Kembalian \t\t\t\t\t:   \tRp.%d  \t|\n", kembalian);
        fprintf(fPointer,"+=======================================================================+\n\n\n");

        fclose(fPointer);

    strukTransaksi();
}

//=========================Fungsi Struk Transaksi========================//
//=======================================================================//
// Nama Fungsi    : Struk Transaksi                                      //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan list pesanan antara lain : Nama Pesanan, //
//                  Jumlah, Harga, Total Harga, Diskon, serta Harga Akhir//
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 13-12-2020                               Tgl: 13-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 13-12-2020                               Tgl: 18-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.1                                      Rev. 2               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.2                                      Rev. 3               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 3.0                                      Rev. 4               //
// Tgl   : 07-01-2021                               Tgl: 07-01-2021      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 4.0                                      Rev. 5               //
// Tgl   : 08-01-2021                               Tgl: 08-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void strukTransaksi(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    FILE * fPointer;
    fPointer = fopen("Struk Transaksi Pembelian.txt", "w");

        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"\t\t        KEDAI PEMERSATU BANGSA\n");
        fprintf(fPointer,"\t\t   Jl. Pantai Berawa No. 888, Bali\n");
        fprintf(fPointer,"\t\t       %s", asctime (Sys_T));
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"\t\t\t    STRUK BELANJA \n\n");
        fprintf(fPointer," Meja\t\t: %s\n", meja);
        fprintf(fPointer," Nama\t\t: %s\n", customer);
        fprintf(fPointer," No Telepon\t: %s\n", telp_customer);
        fprintf(fPointer," Alamat\t\t: %s\n", almt_customer);
        fprintf(fPointer,"+=======================================================================+\n\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Nama Pesanan \t\t\t|  Harga \t| Jumlah |    Total\t|\n");
        fprintf(fPointer,"+=======================================================================+\n");


        if(qtt_mknn1>0){
          fprintf(fPointer,"|Nasi Telur\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn1, qtt_mknn1, ttl_mknn1);
        }else{}

        if(qtt_mknn2>0){
            fprintf(fPointer,"|Nasi Lele\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn2, qtt_mknn2, ttl_mknn2);
        }else{}

        if(qtt_mknn3>0){
            fprintf(fPointer,"|Nasi Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn3, qtt_mknn3, ttl_mknn3);
        }else{}

        if(qtt_mknn4>0){
            fprintf(fPointer,"|Nasi Liwet\t\t\t|Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn4, qtt_mknn4, ttl_mknn4);
        }else{}

        if(qtt_mknn5>0){
            fprintf(fPointer,"|Nasi Ayam\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn5, qtt_mknn5, ttl_mknn5);
        }else{}

        if(qtt_mnm1>0){
           fprintf(fPointer,"|Es Teh\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm1, qtt_mnm1, ttl_mnm1);
        }else{}

        if(qtt_mnm2>0){
           fprintf(fPointer,"|Es Jeruk\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm2, qtt_mnm2, ttl_mnm2);
        }else{}

        if(qtt_mnm3>0){
           fprintf(fPointer,"|Es Susu\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm3, qtt_mnm3, ttl_mnm3);
        }else{}

        if(qtt_mnm4>0){
           fprintf(fPointer,"|Es Kopi\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm4, qtt_mnm4, ttl_mnm4);
        }else{}

        if(qtt_mnm5>0){
           fprintf(fPointer,"|Es Buah\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm5, qtt_mnm5, ttl_mnm5);
        }else{}

        if(qtt_cmln1>0){
          fprintf(fPointer,"|Kentang Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln1, qtt_cmln1, ttl_cmln1);
        }else{}

        if(qtt_cmln2>0){
           fprintf(fPointer,"|Tahu Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln2, qtt_cmln2, ttl_cmln2);
        }else{}

        if(qtt_cmln3>0){
            fprintf(fPointer,"|Tahu Bacem\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln3, qtt_cmln3, ttl_cmln3);
        }else{}

        if(qtt_cmln4>0){
            fprintf(fPointer,"|Tempe Bacem\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln4, qtt_cmln4, ttl_cmln4);
        }else{}

        if(qtt_cmln5>0){
            fprintf(fPointer,"|Perkedel\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln5, qtt_cmln5, ttl_cmln5);
        }else{}

        fprintf(fPointer,"+=======================================================================+\n\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Harga \t\t\t\t\t\t: \tRp.%d   \t|\n", total);
        fprintf(fPointer,"+=======================================================================+\n\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Berhasil Mendapatkan Potongan Harga Sebesar \t: \t%d persen!\t|\n", discount);
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer," Diskon Terakumulasikan Sebesar \t\t: \tRp.%d\t\t \n", harga);
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Total Harga yang Harus Dibayar Sebesar \t: \tRp.%d  \t|\n", harga_akhir);
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer," Uang Pembayaran \t\t\t\t: \tRp.%d\n", uang);
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|Kembalian \t\t\t\t\t:   \tRp.%d  \t|\n", kembalian);
        fprintf(fPointer,"+=======================================================================+\n\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"|\t\t     Terima Kasih Atas Kunjungan Anda\t\t\t|\n");
        fprintf(fPointer,"|\t\t   Kami Nanti Kunjungan Anda Berikutnya\t\t\t|\n");
        fprintf(fPointer,"|\t\t\t         MERDEKA!\t\t\t\t|\n");
        fprintf(fPointer,"+=======================================================================+\n\n");

        fclose(fPointer);
}

//=========================Fungsi Menu Program===========================//
//=======================================================================//
// Nama Fungsi    : Menu Program                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Menu Program                             //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 18-12-2020                               Tgl: 18-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void menuProgram(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);
    posisi(63,1); printf("Selamat Datang, %s", usrnm);
    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                SELAMAT DATANG                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));

    warna(11);
    kotak(52,15,96,25);
    kotak(52,26,96,28);
    warna(7);
    posisi(54,16);printf("+=======================================+\n");
    posisi(54,17);printf("|        Program Kasir Milenium         |\n");
    posisi(54,18);printf("+=======================================+\n");
    posisi(54,19);printf("| 1. | Kasir Kedai Pemersatu Bangsa     |\n");
    posisi(54,20);printf("| 2. | Produk                           |\n");
    posisi(54,21);printf("| 3. | Supplier                         |\n");
    posisi(54,22);printf("| 4. | Laporan Penjualan                |\n");
    posisi(54,23);printf("| 5. | About Us                         |\n");
    posisi(54,24);printf("+=======================================+\n");
    posisi(54,27);printf(" Pilihan anda : ");
    scanf("%d", &program);
    posisi(61,33);
    for(int i=1 ; i<=25 ; i++){
        warna(11);
        printf("%c",219);
        Sleep(100);
    }
    system("cls");

    warna(7);
    if(program==1){
        dataCustomer();
        headerMenu();
        daftarMenu();
    }
    else if(program==2){
        produkKedai();
    }
    else if(program==3){
        menuSupplier();
    }
    else if(program==4){
        laporanPenjualan();
    }
    else if(program==5){
        tentangKami();
    }else{
        printf ("\t\t\t\tMasukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }

    menuKonfirmasi();
}

//=========================Fungsi Menu Tamu==============================//
//=======================================================================//
// Nama Fungsi    : Menu Tamu                                            //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Menu Khusus Untuk Tamu                   //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void menuTamu(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);
    kotak(35,4,112,10);
    posisi(63,1); printf("Selamat Datang, %s", tamu);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                  MENU TAMU                      +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));

    warna(11);
    kotak(57,15,90,18);
    kotak(60,19,88,22);
    kotak(60,23,88,26);
    kotak(60,27,88,30);
    warna(7);
    posisi(64,16);printf("Pilih Kategori Menu!");
    posisi(59,17);printf("(Kursor(>) Untuk Menggerakkan)");
    posisi(68,20);printf("Produk Kedai");
    posisi(61,21);printf("(Makanan, Minuman, Cemilan)");
    posisi(70,24);printf("About Us");
    posisi(66,25);printf("(Pembuat Program)");
    posisi(71,28);printf("Selesai");
    posisi(66,29);printf("(Menutup Program)");

    panjangX = 57;
    panjangY = 20;

    do{
        warna(0);
        kotak(57,19,58,30);
        warna(7);
        posisi(panjangX,panjangY);
        printf(">>");
        button = getch();

        if(button == 77 && panjangY == 20)
        {
            panjangY = 24;
        }
        else if(button == 77 && panjangY == 24)
        {
            panjangY = 28;
        }
        else if(button == 77 && panjangY == 28)
        {
            panjangY = 20;
        }
    }
    while(button != 13);

    if(panjangY == 20 && panjangX == 57){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        produkKedai();

        warna(11);
        posisi(53,50);printf("+=======================================+");
        posisi(53,51);printf("|       Kembali ke Menu Program?        |");
        posisi(53,52);printf("+=======================================+");
        posisi(53,53);printf("| 1. | Kembali Ke Menu Awal             |");
        posisi(53,54);printf("| 2. | Selesai                          |");
        posisi(53,55);printf("+=======================================+");
        posisi(65,57);printf(" Pilihan anda :");
        scanf("%d", &kembali);
        posisi(68,60);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }

        if(kembali == 1){
            system("cls");
            menuTamu();
        }else if (kembali == 2){
            system("cls");
            closeProgram();
            exit (1);
        }else{
            kotak(45,59,101,61);
            produkKedai();
            posisi(47,60);printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!\n\n\n\n\n");
            exit (1);
        }

    }
    else if(panjangY == 24 && panjangX == 57){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        tentangKami();

        warna(11);
        posisi(53,34);printf("+=======================================+");
        posisi(53,35);printf("|       Kembali ke Menu Program?        |");
        posisi(53,36);printf("+=======================================+");
        posisi(53,37);printf("| 1. | Kembali Ke Menu Awal             |");
        posisi(53,38);printf("| 2. | Selesai                          |");
        posisi(53,39);printf("+=======================================+");
        posisi(65,40);printf(" Pilihan anda :");
        scanf("%d", &kembali);
        posisi(68,41);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }

        if(kembali == 1){
            system("cls");
            menuTamu();
        }else if (kembali == 2){
            system("cls");
            closeProgram();
            exit (1);
        }else{
            kotak(45,40,101,42);
            tentangKami();
            posisi(47,41);printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!\n");
            exit (1);
        }
    }
    else if(panjangY == 28 && panjangX == 57){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        harapTunggu();
        closeProgram();
    }

}

//=========================Fungsi Produk Kedai===========================//
//=======================================================================//
// Nama Fungsi    : Produk Kedai                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Produk Kedai                             //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 18-12-2020                               Tgl: 18-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 26-12-2020                               Tgl: 26-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 1.3                                      Rev. 2               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void produkKedai(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,63);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++           -KEDAI PEMERSATU BANGSA-              +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));

    warna(7);
    posisi(63,14);printf("KEDAI PEMERSATU BANGSA");
    posisi(64,15);printf("-- DAFTAR MAKANAN --");
    posisi(56,16);printf("+=================================+");
    posisi(56,17);printf("|  No |     Makanan     |  Harga  |");
    posisi(56,18);printf("|=====+=================+=========|");
    posisi(56,19);printf("|  1  | Nasi Telur\t| 6500    |");
    posisi(56,20);printf("|  2  | Nasi Lele\t| 8500    |");
    posisi(56,21);printf("|  3  | Nasi Goreng\t| 8000    |");
    posisi(56,22);printf("|  4  | Nasi Liwet\t| 7500    |");
    posisi(56,23);printf("|  5  | Nasi Ayam\t| 9000    |");
    posisi(56,24);printf("+=================================+");

    posisi(63,26);printf("KEDAI PEMERSATU BANGSA");
    posisi(64,27);printf("-- DAFTAR MINUMAN --");
    posisi(56,28);printf("+=================================+");
    posisi(56,29);printf("|  No |     Minuman     |  Harga  |");
    posisi(56,30);printf("|=====+=================+=========|");
    posisi(56,31);printf("|  1  | Es Teh\t\t| 2000    |");
    posisi(56,32);printf("|  2  | Es Jeruk \t| 2500    |");
    posisi(56,33);printf("|  3  | Es Susu \t| 3500    |");
    posisi(56,34);printf("|  4  | Es Kopi \t| 3000    |");
    posisi(56,35);printf("|  5  | Es Buah \t| 5000    |");
    posisi(56,36);printf("+=================================+");

    posisi(63,38);printf("KEDAI PEMERSATU BANGSA");
    posisi(64,39);printf("-- DAFTAR CEMILAN --");
    posisi(56,40);printf("+=================================+");
    posisi(56,41);printf("|  No |     Cemilan     |  Harga  |");
    posisi(56,42);printf("|=====+=================+=========|");
    posisi(56,43);printf("|  1  | Kentang Goreng\t| 6000    |");
    posisi(56,44);printf("|  2  | Tahu Goreng Isi\t| 5000    |");
    posisi(56,45);printf("|  3  | Tahu Bacem\t| 5000    |");
    posisi(56,46);printf("|  4  | Tempe Bacem\t| 5000    |");
    posisi(56,47);printf("|  5  | Perkedel\t| 5000    |");
    posisi(56,48);printf("+=================================+");
}

//========================Fungsi Tentang Kami============================//
//=======================================================================//
// Nama Fungsi    : Tentang Kami                                         //
// Input Argumen  :                                                      //
// Output Argumen :                                                      //
// Deskripsi      : Mendeskripsikan Developer dari program ini serta     //
//                  Tujuan dari dubuatnya program ini                    //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 15-12-2020                               Tgl: 15-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void tentangKami(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,33);

    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                 =DEVELOPER=                     +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(32,14,115,32);
    warna(7);
    posisi(34,15);printf ("================================================================================");
    posisi(34,16);printf ("\t\t\t\t      ABOUT US\n");
    posisi(34,17);printf ("================================================================================");
    posisi(34,18);printf ("\t\t\t\t   Developed By : ");
    posisi(34,20);printf ("  A.A. Krisnha Wirayudha  I Gusti Made Agung Ary Surya Persada  Medhiko Biraja");
    posisi(34,21);printf ("       2005551087                      2005551151                 2005551044  ");
    posisi(34,23);printf ("   Kami merupakan Mahasiswa Universitas Udayana dari Fakultas Teknik, Jurusan");
    posisi(34,24);printf ("    Teknologi Informasi. Program ini kami buat bersama untuk memenuhi tugas ");
    posisi(34,25);printf ("\t\t  akhir semester dari Mata Kuliah Pemrograman. ");
    posisi(34,27);printf ("    Program ini ditujukan untuk Usaha Kecil Menengah (UKM) yang baru memulai");
    posisi(34,28);printf ("\tusaha agar rekap penjualan yang dihasilkan setiap harinya menjadi\n");
    posisi(34,29);printf ("\t\t\tlebih tertata dan lebih efisien.\n\n\n");
    posisi(34,31);printf ("================================================================================");
}

//=========================Fungsi Menu Supplier==========================//
//=======================================================================//
// Nama Fungsi    : Menu Supplier                                        //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Menu Supplier                            //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void menuSupplier(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);
    int pilihanSupplier;

    warna(11);
    kotak2(30,2,117,33);

    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                  =SUPPLIER=                     +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(65,14,81,16);
    kotak(64,27,82,29);
    kotak(56,17,91,26);
    posisi(67,15);printf("MENU SUPPLIER");

    warna(7);
    posisi(58,18);printf("+==============================+\n");
    posisi(58,19);printf("|  No |          Menu          |\n");
    posisi(58,20);printf("|=====+========================|\n");
    posisi(58,21);printf("|  1  | Menambah Data Supplier |\n");
    posisi(58,22);printf("|  2  | Membaca Data Supplier  |\n");
    posisi(58,23);printf("|  3  | Kembali Ke Menu Awal   |\n");
    posisi(58,24);printf("|  4  | Selesai                |\n");
    posisi(58,25);printf("+==============================+\n");
    posisi(65,28);printf(" Plihan Anda : ");
    scanf("%d", &pilihanSupplier);
    posisi(68,30);
        for(int i=1 ; i<=10 ; i++){
            warna(11);
            printf("%c",219);
            Sleep(100);
        }
    system("cls");

    if(pilihanSupplier == 1){
        dataSupplier();
    }else if (pilihanSupplier == 2){
        readSupplier();
    }else if (pilihanSupplier == 3){
        menuProgram();
    }else if (pilihanSupplier == 4){
        closeProgram();
        exit (1);
    }else{
        warna(11);
        kotak(45,29,101,31);
        posisi(47,30);printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        menuSupplier();
    }
}

//===========================Fungsi Supllier=============================//
//=======================================================================//
// Nama Fungsi    : Supllier                                             //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menginput data Supplier                              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 18-12-2020                               Tgl: 18-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//                                                                       //
// Versi : 1.2                                      Rev. 2               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void dataSupplier(){

    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);
    int pilihanSupplier;

    warna(11);
    kotak2(30,2,117,33);

    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                  =SUPPLIER=                     +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(61,14,86,16);
    kotak(52,17,96,25);
    warna(7);
    posisi(63,15);printf("MASUKKAN DATA SUPPLIER!");
    posisi(55,18);printf("> Jenis Supplier\t: ");
    scanf("%s", &supplier);
    posisi(55,20);printf("> Nama\t\t: ");
    scanf("%s", &nama);
    posisi(55,22);printf("> No Telepon\t: ");
    scanf("%s", &telepon);
    posisi(55,24);printf("> Alamat\t\t: ");
    scanf("%s", &alamat);
    fileSupplier();
    posisi(68,27);
        for(int i=1 ; i<=10 ; i++){
            warna(11);
            printf("%c",219);
            Sleep(100);
        }
    posisi(63,27);printf("Sukses menambah data!\n\n");
    konfirm:
    warna(11);
    posisi(53,36);printf("+=======================================+");
    posisi(53,37);printf("|       Kembali ke Menu Program?        |");
    posisi(53,38);printf("+=======================================+");
    posisi(53,39);printf("| 1. | Kembali Ke Menu Supplier         |");
    posisi(53,40);printf("| 2. | Kembali Ke Menu Home             |");
    posisi(53,41);printf("| 3. | Selesai                          |");
    posisi(53,42);printf("+=======================================+");
    posisi(65,43);printf(" Pilihan anda :");
    scanf("%d", &kembali);
    posisi(68,45);
        for(int i=1 ; i<=10 ; i++){
            warna(11);
            printf("%c",219);
            Sleep(100);
        }
    system("cls");

    if(kembali == 1){
        menuSupplier();
    }else if (kembali == 2){
        menuProgram();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        kotak(45,43,101,45);
        posisi(47,45);printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        goto konfirm;
    }
}

//========================Fungsi File Supllier===========================//
//=======================================================================//
// Nama Fungsi    : File Supllier                                        //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Memasukkan data supplier ke dalam file yang telah    //
//                  disediakan                                           //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 18-12-2020                               Tgl: 18-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void fileSupplier(){
    FILE *fptr;
    FILE * fPointer;
    fPointer = fopen("Supplier.txt", "a");

    fprintf(fPointer,"\n\n\n> Jenis Supplier\t: %s\n", supplier);
    fprintf(fPointer,"> Nama\t\t\t: %s\n", nama);
    fprintf(fPointer,"> No Telpon\t\t: %s\n", telepon);
    fprintf(fPointer,"> Alamat\t\t: %s\n\n", alamat);

    fclose(fPointer);
}

//========================Fungsi Read Supllier===========================//
//=======================================================================//
// Nama Fungsi    : Read Supllier                                        //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Membaca Seluruh Data Supplier yang Telah Tersimpan   //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void readSupplier(){
    char buff[255];
    FILE *fptr;

    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(33,2,117,14);
    kotak(38,4,112,10);
    warna(7);
    posisi(40,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(40,6); printf("  +++++ +++++               LAPORAN PENJUALAN                 +  + + + +");
    posisi(40,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(40,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(40,9); printf("      + +                                                   +    + +   +");
    posisi(65,12); printf ("%s", asctime (Sys_T));

    if((fptr = fopen("Supplier.txt", "r"))== NULL){
        posisi(59,15);printf("    Error! File Tidak Ditemukan");
    }

    while(fgets(buff, sizeof(buff), fptr)){
        printf("\t\t\t\t\t\t\t%s", buff);
    }
    fclose (fptr);

    warna(11);
    printf("\n\n\n\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t        |       Kembali ke Menu Program?        |\n");
    printf("\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t        | 1. | Kembali Ke Menu Supplier         |\n");
    printf("\t\t\t\t\t\t        | 2. | Kembali Ke Menu Home             |\n");
    printf("\t\t\t\t\t\t        | 3. | Selesai                          |\n");
    printf("\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t\t            Pilihan anda : ");
    scanf("%d", &kembali);
    system("cls");
    harapTunggu();
    system("cls");

    if(kembali == 1){
        menuSupplier();
    }else if (kembali == 2){
        menuProgram();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        readSupplier();
        printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }
}

//====================== ==Fungsi Close Program==========================//
//=======================================================================//
// Nama Fungsi    : Close Program                                        //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Terimakasih Telah Menggunakan Program    //
//                  Kami setelah selesai menggunakan program ini         //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 23-12-2020                               Tgl: 23-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
//=======================================================================//
void closeProgram(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,14);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                   TERIMAKASIH                    +   + +   +");
    posisi(38,6); printf("  +++++ +++++       -TELAH MENGGUNAKAN PROGRAM KAMI-          +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s\n\n", asctime (Sys_T));

}

//======================Fungsi Laporan Penjualan=========================//
//=======================================================================//
// Nama Fungsi    : Laporan Penjualan                                    //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan data dari file Report Transaksi          //
//                  Pembelian.txt ke layar                               //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 23-12-2020                               Tgl: 23-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//                                                                       //
// Versi : 2.0                                      Rev. 1               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
//=======================================================================//
void laporanPenjualan(){
    char buff[255];
    FILE *fptr;

    headerMenu();

    if((fptr = fopen("Report Transaksi Pembelian.txt", "r"))== NULL){
        posisi(59,15);printf("     Error! File Tidak Ditemukan");
    }

    while(fgets(buff, sizeof(buff), fptr)){
        printf("\t\t\t\t\t%s", buff);
    }
    fclose (fptr);
}

//======================Fungsi Menu Konfirmasi===========================//
//=======================================================================//
// Nama Fungsi    : Menu Konfirmasi                                      //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan data dari file Report Transaksi          //
//                  Pembelian.txt ke layar                               //
//                                                                       //
// Versi : 0                                        Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 07-01-2021      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void menuKonfirmasi(){
    warna(11);
    printf("\n\n\n\t\t\t\t\t\t     +=======================================+\n");
    printf("\t\t\t\t\t\t     |       Kembali ke Menu Program?        |\n");
    printf("\t\t\t\t\t\t     +=======================================+\n");
    printf("\t\t\t\t\t\t     | 1. | Kembali Ke Menu Awal             |\n");
    printf("\t\t\t\t\t\t     | 2. | Selesai                          |\n");
    printf("\t\t\t\t\t\t     +=======================================+\n");
    printf("\t\t\t\t\t\t\t         Pilihan anda : ");
    scanf("%d", &kembali);
    system("cls");
    harapTunggu();
    system("cls");
    if(kembali == 1){
        menuProgram();
    }else if (kembali == 2){
        closeProgram();
        exit (1);
    }else{
        printf ("\t\t\t\tMasukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }
}

//===================Fungsi Menu KOnfirmasi Supplier=====================//
//=======================================================================//
// Nama Fungsi    : Menu KOnfirmasi Supplier                             //
// Input Argumen  : int kembali                                          //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Menu yang digunakan untuk melanjutkan    //
//                  program atau selesai                                 //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void menuKonfirmasiSupplier(){
    warna(11);
    posisi(53,36);printf("+=======================================+");
    posisi(53,37);printf("|       Kembali ke Menu Program?        |");
    posisi(53,38);printf("+=======================================+");
    posisi(53,39);printf("| 1. | Kembali Ke Menu Supplier         |");
    posisi(53,40);printf("| 2. | Kembali Ke Menu Home             |");
    posisi(53,41);printf("| 3. | Selesai                          |");
    posisi(53,42);printf("+=======================================+");
    posisi(65,43);printf(" Pilihan anda : ");
    scanf("%d", &kembali);
    posisi(68,45);
        for(int i=1 ; i<=10 ; i++){
            warna(11);
            printf("%c",219);
            Sleep(100);
        }
    system("cls");
    harapTunggu();
    system("cls");

    if(kembali == 1){
        menuSupplier();
    }else if (kembali == 2){
        menuProgram();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        kotak(45,43,101,45);
        posisi(47,45);printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        menuKonfirmasiSupplier();
    }
}

//==========================Fungsi Absen Pegawai=========================//
//=======================================================================//
// Nama Fungsi    : Absen Pegawai                                        //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menyimpan data pegawai yang login                    //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void absenPegawai(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    FILE *fptr;
    FILE * fPointer;
    fPointer = fopen("Absen Pegawai.txt", "a");

    fprintf(fPointer,"\n\t%s  \t|\t%s\t", usrnm, asctime (Sys_T));

    fclose(fPointer);
}

//===========================Fungsi Data Customer========================//
//=======================================================================//
// Nama Fungsi    : Data Customer                                        //
// Input Argumen  : char meja                                            //
//                  char customer                                        //
//                  char telp_customer                                   //
//                  char almt_customer                                   //
// Output Argumen : -                                                    //
// Deskripsi      : Memasukkan Data Customer saat transaksi              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 07-01-2021                               Tgl: 7-01-2021       //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void dataCustomer(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,33);
    kotak(35,4,112,10);

    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                  =CUSTOMER=                     +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(61,14,86,16);
    kotak(52,17,96,25);
    warna(7);
    posisi(63,15);printf("MASUKKAN DATA CUSTOMER!");
    posisi(55,18);printf("> Meja\t\t: ");
    scanf("%s", &meja);
    posisi(55,20);printf("> Nama\t\t: ");
    scanf("%s", &customer);
    posisi(55,22);printf("> No Telepon\t: ");
    scanf("%s", &telp_customer);
    posisi(55,24);printf("> Alamat\t\t: ");
    scanf("%s", &almt_customer);
    posisi(68,29);
        for(int i=1 ; i<=10 ; i++){
            warna(11);
            printf("%c",219);
            Sleep(100);
        }
    system("cls");
}

//============================Fungsi Menu Owner==========================//
//=======================================================================//
// Nama Fungsi    : Menu Owner                                           //
// Input Argumen  : int program                                          //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Menu Owner                               //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void menuOwner(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);
    posisi(63,1); printf("Selamat Datang, %s", usrnm);
    warna(11);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                SELAMAT DATANG                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));

    warna(11);
    kotak(52,15,96,25);
    kotak(52,26,96,28);
    warna(7);
    posisi(54,16);printf("+=======================================+\n");
    posisi(54,17);printf("|              Program Owner            |\n");
    posisi(54,18);printf("+=======================================+\n");
    posisi(54,19);printf("| 1. | Laporan Penjualan                |\n");
    posisi(54,20);printf("| 2. | Data Pegawai                     |\n");
    posisi(54,21);printf("| 3. | Absen Pegawai                    |\n");
    posisi(54,22);printf("| 4. | Gaji Pegawai                     |\n");
    posisi(54,23);printf("| 5. | About Us                         |\n");
    posisi(54,24);printf("+=======================================+\n");
    posisi(54,27);printf(" Pilihan anda : ");
    scanf("%d", &program);
    posisi(61,33);
    for(int i=1 ; i<=25 ; i++){
        warna(11);
        printf("%c",219);
        Sleep(100);
    }
    system("cls");

    warna(7);
    if(program==1){
        laporanPenjualan();
        menuKonfirmasiOwner();
    }
    else if(program==2){
        menuPegawai();
    }
    else if(program==3){
        readAbsen();
    }
    else if(program==4){
        menuGaji();
    }
    else if(program==5){
        tentangKami();
        menuKonfirmasiOwner();
    }else{
        printf ("\t\t\t\tMasukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }

}

//===========================Fungsi Menu Pegawai=========================//
//=======================================================================//
// Nama Fungsi    : Menu Pegawai                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Menu Pegawai                             //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void menuPegawai(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);
    warna(11);
    kotak(35,4,112,10);
    kotak(55,17,92,19);
    kotak(58,22,88,25);
    kotak(58,27,88,30);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                =MENU PEGAWAI=                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));

    posisi(60,18);printf("-Menu Pegawai Kasir Milenum-");
    posisi(67,23);printf("Data Pegawai");
    posisi(64,24);printf("(Data Pegawai.txt)");
    posisi(67,28);printf("Tambah Data");
    posisi(62,29);printf("(Menambah Data Pegawai)");

    panjangX = 55;
    panjangY = 23;

    do{
        warna(0);
        kotak(55,22,56,24);
        kotak(55,27,56,29);
        warna(7);
        posisi(panjangX,panjangY);
        printf(">>");
        button = getch();

        if(button == 77 && panjangY == 23)
        {
            panjangY = 28;
        }
        else if(button == 75 && panjangY == 28)
        {
            panjangY = 23;
        }
    }
    while(button != 13);

    if(panjangY == 23 && panjangX == 55){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        readPegawai();
    }
    else if(panjangY == 28 && panjangX == 55){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        upPegawai();
    }

}

//=============================Fungsi Up Pegawai=========================//
//=======================================================================//
// Nama Fungsi    : Up Pegawai                                           //
// Input Argumen  : char id                                              //
//                  char pegawai                                         //
//                  char telp_pegawai                                    //
//                  char almt_pegawai                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Memasukkan Data Customer saat transaksi              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void upPegawai(){

    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,33);
    kotak(35,4,112,10);

    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                =DATA PEGAWAI=                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(61,14,86,16);
    kotak(52,17,96,25);
    warna(7);
    posisi(63,15);printf("MASUKKAN DATA PEGAWAI!");
    posisi(55,18);printf("> Id\t\t: ");
    scanf("%s", &id);
    posisi(55,20);printf("> Nama\t\t: ");
    scanf("%s", &pegawai);
    posisi(55,22);printf("> No Telepon\t: ");
    scanf("%s", &telp_pegawai);
    posisi(55,24);printf("> Alamat\t\t: ");
    scanf("%s", &almt_pegawai);
    posisi(68,29);

    filePegawai();

        for(int i=1 ; i<=10 ; i++){
            warna(11);
            printf("%c",219);
            Sleep(100);
        }
    posisi(63,29);printf("Sukses menambah data!\n\n");
    warna(11);
    posisi(53,35);printf("+=======================================+");
    posisi(53,36);printf("|       Kembali ke Menu Program?        |");
    posisi(53,37);printf("+=======================================+");
    posisi(53,38);printf("| 1. | Kembali Ke Menu Pegawai          |");
    posisi(53,39);printf("| 2. | Kembali Ke Menu Home             |");
    posisi(53,40);printf("| 3. | Selesai                          |");
    posisi(53,41);printf("+=======================================+");
    posisi(64,42);printf("Pilihan anda : ");
    scanf("%d", &kembali);

    system("cls");

    if(kembali == 1){
        menuPegawai();
    }else if (kembali == 2){
        menuOwner();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        readPegawai();
        printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }
    system("cls");
}

//===========================Fungsi File Pegawai=========================//
//=======================================================================//
// Nama Fungsi    : File Pegawai                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menyimpan Data Pegawai ke dalam file .txt            //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void filePegawai(){
    FILE * fPointer;

    fPointer = fopen("Data Pegawai.txt", "a");

        fprintf(fPointer,"\n\n\n Id\t\t: %s\n", id);
        fprintf(fPointer," Nama\t\t: %s\n", pegawai);
        fprintf(fPointer," No Telepon\t: %s\n", telp_pegawai);
        fprintf(fPointer," Alamat\t\t: %s\n", almt_pegawai);

    fclose(fPointer);
}

//===========================Fungsi Read Pegawai=========================//
//=======================================================================//
// Nama Fungsi    : Read Pegawai                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan data dari Data Pegawai.txt               //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void readPegawai(){
    char buff[255];
    FILE *fptr;

    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(33,2,117,14);
    kotak(38,4,112,10);
    warna(7);
    posisi(40,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(40,6); printf("  +++++ +++++                 DATA PEGAWAI                    +  + + + +");
    posisi(40,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(40,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(40,9); printf("      + +                                                   +    + +   +");
    posisi(65,12); printf ("%s", asctime (Sys_T));

    if((fptr = fopen("Data Pegawai.txt", "r"))== NULL){
        posisi(59,15);printf("    Error! File Tidak Ditemukan");
    }

    while(fgets(buff, sizeof(buff), fptr)){
        printf("\t\t\t\t\t\t\t%s", buff);
    }
    fclose (fptr);

    warna(11);
    printf("\n\n\n\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t        |       Kembali ke Menu Program?        |\n");
    printf("\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t        | 1. | Kembali Ke Menu Pegawai          |\n");
    printf("\t\t\t\t\t\t        | 2. | Kembali Ke Menu Home             |\n");
    printf("\t\t\t\t\t\t        | 3. | Selesai                          |\n");
    printf("\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t\t            Pilihan anda : ");
    scanf("%d", &kembali);
    system("cls");
    harapTunggu();
    system("cls");

    if(kembali == 1){
        menuPegawai();
    }else if (kembali == 2){
        menuOwner();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        readPegawai();
        printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }

}

//====================Fungsi Menu Konfirmasi Owner=======================//
//=======================================================================//
// Nama Fungsi    : Menu Konfirmasi Owner                                //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan menu konfirmasi                          //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void menuKonfirmasiOwner(){
    warna(11);
    printf("\n\n\n\t\t\t\t\t\t     +=======================================+\n");
    printf("\t\t\t\t\t\t     |       Kembali ke Menu Program?        |\n");
    printf("\t\t\t\t\t\t     +=======================================+\n");
    printf("\t\t\t\t\t\t     | 1. | Kembali Ke Menu Awal             |\n");
    printf("\t\t\t\t\t\t     | 2. | Selesai                          |\n");
    printf("\t\t\t\t\t\t     +=======================================+\n");
    printf("\t\t\t\t\t\t\t         Pilihan anda : ");
    scanf("%d", &kembali);
    system("cls");
    harapTunggu();
    system("cls");

    if(kembali == 1){
        menuOwner();
    }else if (kembali == 2){
        closeProgram();
        exit (1);
    }else{
        printf ("\t\t\t\tMasukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }
}

//===========================Fungsi Menu Gaji============================//
//=======================================================================//
// Nama Fungsi    : Menu Gaji                                            //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan menu gaji                                //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void menuGaji(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);
    warna(11);
    kotak(35,4,112,10);
    kotak(55,17,92,19);
    kotak(58,22,88,25);
    kotak(58,27,88,30);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                 =MENU GAJI=                     +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));

    posisi(65,18);printf("-Menu Gaji Pegawai-");
    posisi(65,23);printf("Data Gaji Pegawai");
    posisi(62,24);printf("(Data Gaji Pegawai.txt)");
    posisi(65,28);printf("Tambah Data Gaji");
    posisi(60,29);printf("(Menambah Data Gaji Pegawai)");

    panjangX = 55;
    panjangY = 23;

    do{
        warna(0);
        kotak(55,22,56,24);
        kotak(55,27,56,29);
        warna(7);
        posisi(panjangX,panjangY);
        printf(">>");
        button = getch();

        if(button == 77 && panjangY == 23)
        {
            panjangY = 28;
        }
        else if(button == 75 && panjangY == 28)
        {
            panjangY = 23;
        }
    }
    while(button != 13);

    if(panjangY == 23 && panjangX == 55){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        readGaji();
    }
    else if(panjangY == 28 && panjangX == 55){
        posisi(68,33);
            for(int i=1 ; i<=10 ; i++){
                warna(11);
                printf("%c",219);
                Sleep(100);
            }
        system ("cls");
        upGaji();
    }

}

//===============================Fungsi Up Gaji==========================//
//=======================================================================//
// Nama Fungsi    : Up Gaji                                              //
// Input Argumen  : char id                                              //
//                  char pegawai                                         //
//                  char bulan                                           //
//                  char gaji                                            //
// Output Argumen : -                                                    //
// Deskripsi      : Memasukkan Data Customer saat transaksi              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void upGaji(){

    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,33);
    kotak(35,4,112,10);

    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                =GAJI PEGAWAI=                   +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,12); printf ("%s", asctime (Sys_T));
    warna(11);
    kotak(61,14,86,16);
    kotak(52,17,96,25);
    warna(7);
    posisi(63,15);printf("MASUKKAN GAJI PEGAWAI!");
    posisi(55,18);printf("> Id\t\t: ");
    scanf("%s", &id);
    posisi(55,20);printf("> Nama\t\t: ");
    scanf("%s", &pegawai);
    posisi(55,22);printf("> Bulan\t\t: ");
    scanf("%s", &bulan);
    posisi(55,24);printf("> Total Gaji\t: ");
    scanf("%s", &gaji);

    fileGaji();

    posisi(68,29);
        for(int i=1 ; i<=10 ; i++){
            warna(11);
            printf("%c",219);
            Sleep(100);
        }
    posisi(63,29);printf("Sukses menambah data!\n\n");
    warna(11);
    posisi(53,35);printf("+=======================================+");
    posisi(53,36);printf("|     Kembali ke Menu Gaji Program?     |");
    posisi(53,37);printf("+=======================================+");
    posisi(53,38);printf("| 1. | Kembali Ke Menu Gaji Pegawai     |");
    posisi(53,39);printf("| 2. | Kembali Ke Menu Home             |");
    posisi(53,40);printf("| 3. | Selesai                          |");
    posisi(53,41);printf("+=======================================+");
    posisi(64,42);printf("Pilihan anda : ");
    scanf("%d", &kembali);

    system("cls");

    if(kembali == 1){
        menuGaji();
    }else if (kembali == 2){
        menuOwner();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        readPegawai();
        printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }
    system("cls");
}

//===========================Fungsi File Gaji============================//
//=======================================================================//
// Nama Fungsi    : File Gaji                                            //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menyimpan Data Gaji ke dalam file .txt               //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void fileGaji(){
    FILE * fPointer;

    fPointer = fopen("Gaji Pegawai.txt", "a");

        fprintf(fPointer,"\n\n\n Id\t\t: %s\n", id);
        fprintf(fPointer," Nama\t\t: %s\n", pegawai);
        fprintf(fPointer," Bulan\t\t: %s\n", bulan);
        fprintf(fPointer," Total Gaji\t: %s\n", gaji);

    fclose(fPointer);
}

//===========================Fungsi Read Gaji============================//
//=======================================================================//
// Nama Fungsi    : Read Gaji                                            //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan data dari Gaji Pegawai.txt               //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void readGaji(){
    char buff[255];
    FILE *fptr;

    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(33,2,117,14);
    kotak(38,4,112,10);
    warna(7);
    posisi(40,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(40,6); printf("  +++++ +++++                 GAJI PEGAWAI                    +  + + + +");
    posisi(40,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(40,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(40,9); printf("      + +                                                   +    + +   +");
    posisi(65,12); printf ("%s", asctime (Sys_T));

    if((fptr = fopen("Gaji Pegawai.txt", "r"))== NULL){
        posisi(59,15);printf("    Error! File Tidak Ditemukan");
    }

    while(fgets(buff, sizeof(buff), fptr)){
        printf("\t\t\t\t\t\t\t%s", buff);
    }
    fclose (fptr);

    warna(11);
    printf("\n\n\n\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t        |       Kembali ke Menu Program?        |\n");
    printf("\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t        | 1. | Kembali Ke Menu Gaji Pegawai     |\n");
    printf("\t\t\t\t\t\t        | 2. | Kembali Ke Menu Home             |\n");
    printf("\t\t\t\t\t\t        | 3. | Selesai                          |\n");
    printf("\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t\t            Pilihan anda : ");
    scanf("%d", &kembali);
    system("cls");
    harapTunggu();
    system("cls");

    if(kembali == 1){
        menuGaji();
    }else if (kembali == 2){
        menuOwner();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        readPegawai();
        printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }

}

//===========================Fungsi Read Absen===========================//
//=======================================================================//
// Nama Fungsi    : Read Absen                                           //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan data dari Absen Pegawai.txt              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void readAbsen(){
    char buff[255];
    FILE *fptr;

    headerMenu();

    if((fptr = fopen("Absen Pegawai.txt", "r"))== NULL){
        posisi(59,15);printf("    Error! File Tidak Ditemukan");
    }

    while(fgets(buff, sizeof(buff), fptr)){
        printf("\t\t\t\t\t\t%s", buff);
    }
    fclose (fptr);

    warna(11);
    printf("\n\n\n\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t        |       Kembali ke Menu Program?        |\n");
    printf("\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t        | 1. | Kembali Ke Menu Home             |\n");
    printf("\t\t\t\t\t\t        | 2. | Selesai                          |\n");
    printf("\t\t\t\t\t\t        +=======================================+\n");
    printf("\t\t\t\t\t\t\t            Pilihan anda : ");
    scanf("%d", &kembali);
    system("cls");
    harapTunggu();
    system("cls");

    if(kembali == 1){
        menuOwner();
    }else if (kembali == 2){
        closeProgram();
        exit (1);
    }else{
        readPegawai();
        printf ("Masukkan Pilihan Konfirmasi Melanjutkan Dengan Benar!");
        exit (1);
    }

}

//=========================Fungsi Harap Tunggu===========================//
//=======================================================================//
// Nama Fungsi    : Harap Tunggu                                         //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan kata harap tunggu saat selesai 		 //
// 		    menggunakan    					 //
//                  suatu menu                                           //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-01-2021                               Tgl: 09-01-2021      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void harapTunggu(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    warna(11);
    kotak2(30,2,117,35);
    kotak(35,4,112,10);
    warna(7);
    posisi(38,5); printf("+++++++ +++                                                  +   + +   +");
    posisi(38,6); printf("  +++++ +++++                                                 +  + + + +");
    posisi(38,7); printf("     ++ +++                 -KASIR MILENIUM-                    ++ +   +");
    posisi(38,8); printf("     ++ ++                        2020                        +  + +   +");
    posisi(38,9); printf("      + +                                                   +    + +   +");
    posisi(62,11); printf ("%s", asctime (Sys_T));

    posisi(67,26); printf ("Developed By :");
    posisi(61,28); printf ("2005551044 - Medhiko Biraja");
    posisi(50,29); printf ("2005551151 - I Gusti Made Agung Ary Surya Persada");
    posisi(58,30); printf ("2005551087 - A.A. Krisnha Wirayudha");

    posisi(67,19);printf("Harap Tunggu");
    posisi(65,21);
    for(int i=1 ; i<=16 ; i++){
        warna(11);
        printf("%c",223);
        Sleep(100);
    }
    system ("cls");
}
