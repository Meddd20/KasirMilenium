#include <stdio.h> //Header Standar Input/Output dalam C
#include <time.h> // Header dalam C untuk memanipulasi waktu

int h1, h2, h3, h4, h5;
int j1=0, j2=0, j3=0, j4=0, j5=0;
int t1=0, t2=0, t3=0, t4=0, t5=0;
int m1, m2, m3, m4, m5;
int j6=0, j7=0, j8=0, j9=0, j10=0;
int t6=0, t7=0, t8=0, t9=0, t10=0;
int c1, c2, c3, c4, c5;
int j11=0, j12=0, j13=0, j14=0, j15=0;
int t11=0, t12=0, t13=0, t14=0, t15=0;
int discount;
int harga;
int harga_akhir;
int uang;
int kembalian;
int total;
int program;
char nama;
char alamat;
char telepon;
int kembali;

//Deklarasi fungsi yang digunakan dalam program ini
void loginAdmin();
void headerMenu();
float menuProgram();
float daftarMenu();
void produkKedai();
float supplier();
void tentangKami();
float mendapatkanDiskon();
float potonganHarga();
float hargaAkhir();
float transaksiAkhir();
float struk();
void tentangKami();


//Merupakan fungsi utama dalam program yang akan dieksekusi pertama kali saat program dijalankan
int main()
{
    loginAdmin();
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

void headerMenu()
{
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    printf ("================================================================================\n");
    printf ("\t\t\t      KEDAI PEMERSATU BANGSA\n");
    printf ("\t\t\t Jl. Pantai Berawa No. 888, Bali\n");
    printf ("\t\t\t\t   Developed By : \n");
    printf ("\t\t\t     2005551044 - Medhiko Biraja\n");
    printf ("\t\t2005551151 - I Gusti Made Agung Ary Surya Persada\n");
    printf ("\t\t\t2005551087 - A.A. Krisnha Wirayudha\n");
    printf ("\t\t\t      %s", asctime (Sys_T));
    printf ("================================================================================");
}

//==========================Fungsi Login Admin===========================//
//=======================================================================//
// Nama Fungsi    : Login Admin                                          //
// Input Argumen  : char konfirmasiAkun                                  //
// Output Argumen : -                                                    //
// Deskripsi      : Meminta menampilkan username dan password admin      //
//                  yang diberikan pertama kali dan merupakan akun       //
//                  default                                              //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-12-2020                               Tgl: 09-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void loginAdmin()
{
    char usrnm[5], pass[12];
    int status = 0;
    int salah = 0;
    char nama;
    char konfirmasiAkun;

    printf ("Sudah Punya Akun? Login Disini! (Y/N)");
    scanf ("%c", &konfirmasiAkun);

    if (konfirmasiAkun == 'Y' || konfirmasiAkun == 'y'){
        Login :
        printf ("Username : ");
        scanf ("%s", &usrnm);
        printf ("Password : ");
        scanf ("%s", &pass);

        if (strcmp (usrnm, "admin")==0 && strcmp (pass, "12345")==0){
            system ("cls");
            menuProgram();
            printf ("Selamat Datang, %s\n", usrnm);
        }else {
            system ("cls");
            printf ("Username atau Password yang Anda Masukkan Salah!\n");
            goto Login;
        }
    return 0;
    }
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
// Tgl   : 01-12-2020                               Tgl: 01-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
// Tgl  : 02-12-2020                                Rev. 1               //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//=======================================================================//
float daftarMenu()
{
    int pilihan;
    int makanan;
    int minuman;
    int cemilan;
    int lagi;

    kategori1:
    printf("\n\n -- Kategori Pesanan --\n\n");
    printf("=========================\n");
    printf("|  No |     Kategori    |\n");
    printf("|=====|=================|\n");
    printf("|  1  | Makanan         |\n");
    printf("|  2  | Minuman         |\n");
    printf("|  3  | Cemilan         |\n");
    printf("=========================\n\n");
    printf("Masukkan Pilihan Anda (1-3) : ");
    scanf("%d", &pilihan);

    if(pilihan == 1){
        printf("\n     KEDAI PEMERSATU BANGSA\n");
        printf("      -- DAFTAR MAKANAN --\n\n");
        printf("===================================\n");
        printf("|  No |     Makanan     |  Harga  |\n");
        printf("|=====|=================|=========|\n");
        printf("|  1  | Nasi Telur\t| 6500    |\n");
        printf("|  2  | Nasi Lele\t| 8500    |\n");
        printf("|  3  | Nasi Goreng\t| 8000    |\n");
        printf("|  4  | Nasi Liwet\t| 7500    |\n");
        printf("|  5  | Nasi Ayam\t| 9000    |\n");
        printf("===================================\n");

        makanan1:
        printf("Masukkan Pesanan Anda (1-5) : ");
        scanf("%d", &makanan);

        switch(makanan) { //kontrol percabangan switch case

            case 1 :
                    h1=6500;
                    printf (" ==> Nasi Telur \t: @ Rp.%d\n", h1);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j1);
                    t1=j1*h1;
                    break;

            case 2 :
                    h2=8500;
                    printf (" ==> Nasi Lele \t\t: @ Rp.%d\n", h2);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j2);
                    t2=j2*h2;
                    break;

            case 3 :
                    h3=8000;
                    printf (" ==> Nasi Goreng \t: @ Rp.%d\n", h3);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j3);
                    t3=j3*h3;
                    break;

            case 4 :
                    h4=7500;
                    printf (" ==> Nasi Liwet \t: @ Rp.%d\n", h4);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j4);
                    t4=j4*h4;
                    break;

            case 5 :
                    h5=9000;
                    printf (" ==> Nasi Ayam \t\t: @ Rp.%d\n", h5);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j5);
                    t5=j5*h5;
                    break;

            default:
                    printf(" Error..!!!, Menu no.%d tidak ada dalam daftar\n", makanan);
                    printf(" ==> Silakan input kembali\n");
                    goto makanan1;
        }
    }
    else if(pilihan == 2){
        printf("\n      KEDAI PEMERSATU BANGSA\n");
        printf("       -- DAFTAR MINUMAN --\n\n");
        printf("===================================\n");
        printf("|  No |     Minuman     |  Harga  |\n");
        printf("|=====|=================|=========|\n");
        printf("|  1  | Es Teh\t\t| 2000    |\n");
        printf("|  2  | Es Jeruk \t| 2500    |\n");
        printf("|  3  | Es Susu \t| 3500    |\n");
        printf("|  4  | Es Kopi \t| 3000    |\n");
        printf("|  5  | Es Buah \t| 5000    |\n");
        printf("===================================\n");

        minuman1:
        printf("Masukkan Pesanan Anda (1-5) : ");
        scanf("%d", &minuman);

        switch(minuman) {

            case 1 :
                    m1=2000;
                    printf (" ==> Es Teh \t\t: @ Rp.%d\n", m1);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j6);
                    t6=j6*m1;
                    break;

            case 2 :
                    m2=2500;
                    printf (" ==> Es jeruk \t\t: @ Rp.%d\n", m2);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j7);
                    t7=j7*m2;
                    break;

            case 3 :
                    m3=3500;
                    printf (" ==> Es Susu \t\t: @ Rp.%d\n", m3);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j8);
                    t8=j8*m3;
                    break;

            case 4 :
                    m4=3000;
                    printf (" ==> Es Kopi \t\t: @ Rp.%d\n", m4);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j9);
                    t9=j9*m4;
                    break;

            case 5 :
                    m5=5000;
                    printf (" ==> Es Buah \t\t: @ Rp.%d\n", m5);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j10);
                    t10=j10*m5;
                    break;

            default:
                printf(" Error..!!!, Menu no.%d tidak ada dalam daftar\n", minuman);
                printf(" ==> Silakan input kembali\n");
                goto minuman1;
        }

    }
    else if(pilihan == 3){
        printf("\n      KEDAI PEMERSATU BANGSA\n");
        printf("       -- DAFTAR CEMILAN --\n\n");
        printf("===================================\n");
        printf("|  No |     Cemilan     |  Harga  |\n");
        printf("|=====|=================|=========|\n");
        printf("|  1  | Kentang Goreng\t| 6000    |\n");
        printf("|  2  | Tahu Goreng Isi\t| 5000    |\n");
        printf("|  3  | Tahu Bacem\t| 5000    |\n");
        printf("|  4  | Tempe Bacem\t| 5000    |\n");
        printf("|  5  | Perkedel\t| 5000    |\n");
        printf("===================================\n");
        cemilan1:
        printf("Masukkan Pesanan Anda (1-5) : ");
        scanf("%d", &cemilan);

        switch(cemilan) {

            case 1 :
                    c1=6000;
                    printf (" ==> Kentang Goreng \t: @ Rp.%d\n", c1);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j11);
                    t11=j11*c1;
                    break;


            case 2 :
                    c2=5000;
                    printf (" ==> Tahu Goreng Isi \t\t: @ Rp.%d\n", c2);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j12);
                    t12=j12*c2;
                    break;

            case 3 :
                    c3=5000;
                    printf (" ==> Tahu Bacem \t\t: @ Rp.%d\n", c3);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j13);
                    t13=j13*c3;
                    break;

            case 4 :
                    c4=5000;
                    printf (" ==> Tempe Bacem \t\t: @ Rp.%d\n", c4);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j14);
                    t14=j14*c4;
                    break;

            case 5 :
                    c5=5000;
                    printf (" ==> Perkedel \t\t: @ Rp.%d\n", c5);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j15);
                    t15=j15*c5;
                    break;

            default:
                printf(" Error..!!!, Menu no.%d tidak ada dalam daftar\n", cemilan);
                printf(" ==> Silakan input kembali\n");
                goto cemilan1;
        }
    }
    else{
        printf("\n================================\n");
        printf("-Input yang Anda Masukkan Salah-\n");
        printf("================================\n");
        printf(" ==> Silakan input kembali\n");
        goto kategori1;
    }
    
    printf("\nIngin Memesan Lagi?\n");
    printf("(1) Ya,\n(2) Tidak");
    printf("\nPilihan Anda : ");
    scanf("%d",&lagi);

    if(lagi==1){
        goto kategori1;
    }else{
        goto hasil;
    }
     hasil :
        printf("\nPesanan Anda :\n");

        if(j1>0){
            printf("Nasi Telur : %d\n",j1);
        }else{}

        if(j2>0){
            printf("Nasi Lele : %d\n",j2);
        }else{}

        if(j3>0){
            printf("Nasi Goreng : %d\n",j3);
        }else{}

        if(j4>0){
            printf("Nasi Liwet : %d\n",j4);
        }else{}

        if(j5>0){
            printf("Nasi Ayam : %d\n",j5);
        }else{}

        if(j6>0){
            printf("Es Teh : %d\n",j6);
        }else{}

        if(j7>0){
            printf("Es Jeruk : %d\n",j7);
        }else{}

        if(j8>0){
            printf("Es Susu : %d\n",j8);
        }else{}

        if(j9>0){
            printf("Es Kopi : %d\n",j9);
        }else{}

        if(j10>0){
            printf("Es Buah : %d\n",j10);
        }else{}

        if(j11>0){
            printf("Kentang Goreng : %d\n",j11);
        }else{}

        if(j12>0){
            printf("Tahu Goreng : %d\n",j12);
        }else{}

        if(j13>0){
            printf("Tahu Bacem : %d\n",j13);
        }else{}

        if(j14>0){
            printf("Tempe Bacem : %d\n",j14);
        }else{}

        if(j15>0){
            printf("Perkedel : %d\n",j15);
        }else{}

        printf("\n====================\n");
        total=t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+t11+t12+t13+t14+t15;
        printf("Harga : %d\n", total);
        printf("====================\n");

    return total;
}
//=============================Fungsi Diskon=============================//
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
float mendapatkanDiskon(){

        if (total >= 100000){
            discount = 25;
            printf("\nBerhasil Mendapatkan Potongan Harga Sebesar %d persen!\n", discount);
        }else if (total >= 80000){
            discount = 10;
            printf("\nBerhasil Mendapatkan Potongan Harga Sebesar %d persen!\n", discount);
        }else if (total >= 50000){
            discount = 5;
            printf("\nBerhasil Mendapatkan Potongan Harga Sebesar %d persen!\n", discount);
        }else {
            printf ("Anda tidak Mendapatkan Diskon\n");
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
float potonganHarga(){
    harga = discount*total/100;
    printf("Diskon Terakumulasikan Sebesar : Rp.%d\n\n", harga);

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
float hargaAkhir(){
    harga_akhir = total-harga;

    printf("=======================================================\n");
    printf("Total Harga yang Harus Dibayar Sebesar : Rp.%d         \n", harga_akhir);
    printf("=======================================================\n\n");
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
float transaksiPembayaran(){
    Transaksi :
    printf("Uang Pembayaran : ");
    scanf("%d",&uang);
    if(uang<harga_akhir){
        printf("Uang tidak cukup!");
            goto Transaksi;
        }
        else{}
transaksiKembalian();
}

//==========================Fungsi Struk Pesanan=========================//
//=======================================================================//
// Nama Fungsi    : Struk Pesanan                                        //
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
// Versi : 2.0                                      Rev. 0               //
// Tgl   : 13-12-2020                               Tgl: 18-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
//=======================================================================//

float struk(){

    FILE *fptr;

    FILE * fPointer;
    fPointer = fopen("Struk Transaksi Pembelian.txt", "w");

    fprintf(fPointer,"=================================================================\n");
    fprintf(fPointer,"\n\t\t\tKEDAI PEMERSATU BANGSA\n");
    fprintf(fPointer,"\n\t\t\t    STRUK BELANJA \n\n");
    fprintf(fPointer,"=================================================================\n");
    fprintf(fPointer,"\n\n");
    fprintf(fPointer,"=================================================================\n");
    fprintf(fPointer,"Nama Pesanan\t | Jumlah\t | Harga\t | Total\t|\n");
    fprintf(fPointer,"=================================================================\n");

   if(j>0){
           fprintf(fPointer,"Nasi Telur\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j, h1, t1);
        }else{}

        if(j2>0){
            fprintf(fPointer,"Nasi Lele\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j2, h2, t2);
        }else{}

        if(j3>0){
            fprintf(fPointer,"Nasi Goreng\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j3, h3, t3);
        }else{}

        if(j4>0){
            fprintf(fPointer,"Nasi Liwet\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j4, h4, t4);
        }else{}

        if(j5>0){
            fprintf(fPointer,"Nasi Ayam\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j5, h5, t5);
        }else{}

        if(j6>0){
           fprintf(fPointer,"Es Teh\t\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j6, m1, t6);
        }else{}

        if(j7>0){
           fprintf(fPointer,"Es Jeruk\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j7, m2, t7);
        }else{}

        if(j8>0){
           fprintf(fPointer,"Es Susu\t\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j8, m3, t8);
        }else{}

        if(j9>0){
            fprintf(fPointer,"Es Kopi\t\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j9, m4, t9);
        }else{}

        if(j10>0){
            fprintf(fPointer,"Es Buah\t\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j10, m5, t10);
        }else{}

        if(j11>0){
          fprintf(fPointer,"Kentang Goreng\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j11, c1, t11);
        }else{}

        if(j12>0){
           fprintf(fPointer,"Tahu Goreng\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j12, c2, t12);
        }else{}

        if(j13>0){
            fprintf(fPointer,"Tahu Bacem\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j13, c3, t13);
        }else{}

        if(j14>0){
            fprintf(fPointer,"Tempe Bacem\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j14, c4, t14);
        }else{}

        if(j15>0){
            fprintf(fPointer,"Perkedel\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j15, c5, t15);
        }else{}

   fprintf(fPointer,"=================================================================\n");
   fprintf(fPointer,"Total Harga\t : Rp.%d\t\n",total);
   fprintf(fPointer,"Diskon\t\t : %d persen\n", discount);
   fprintf(fPointer,"Harga Akhir\t : Rp.%d\t\n", harga_akhir);
   fprintf(fPointer,"=================================================================\n");
   fprintf(fPointer,"Uang Pembayaran\t : Rp.%d\t\n", uang);
   fprintf(fPointer,"Kembalian\t : Rp.%d\t\n", kembalian);
   fprintf(fPointer,"=================================================================\n\n"); 

   fPointer = fopen("Report Transaksi Pembelian.txt", "a");

    fprintf(fPointer,"=================================================================\n");
    fprintf(fPointer,"\n\t\t\tKEDAI PEMERSATU BANGSA\n");
    fprintf(fPointer,"\n\t\t\t    STRUK BELANJA \n\n");
    fprintf(fPointer,"=================================================================\n");
    fprintf(fPointer,"\n\n");
    fprintf(fPointer,"=================================================================\n");
    fprintf(fPointer,"Nama Pesanan\t | Jumlah\t | Harga\t | Total\t|\n");
    fprintf(fPointer,"=================================================================\n");

     if(j>0){
           fprintf(fPointer,"Nasi Telur\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j, h1, t1);
        }else{}

        if(j2>0){
            fprintf(fPointer,"Nasi Lele\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j2, h2, t2);
        }else{}

        if(j3>0){
            fprintf(fPointer,"Nasi Goreng\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j3, h3, t3);
        }else{}

        if(j4>0){
            fprintf(fPointer,"Nasi Liwet\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j4, h4, t4);
        }else{}

        if(j5>0){
            fprintf(fPointer,"Nasi Ayam\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j5, h5, t5);
        }else{}

        if(j6>0){
           fprintf(fPointer,"Es Teh\t\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j6, m1, t6);
        }else{}

        if(j7>0){
           fprintf(fPointer,"Es Jeruk\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j7, m2, t7);
        }else{}

        if(j8>0){
           fprintf(fPointer,"Es Susu\t\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j8, m3, t8);
        }else{}

        if(j9>0){
            fprintf(fPointer,"Es Kopi\t\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j9, m4, t9);
        }else{}

        if(j10>0){
            fprintf(fPointer,"Es Buah\t\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j10, m5, t10);
        }else{}

        if(j11>0){
          fprintf(fPointer,"Kentang Goreng\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j11, c1, t11);
        }else{}

        if(j12>0){
           fprintf(fPointer,"Tahu Goreng\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j12, c2, t12);
        }else{}

        if(j13>0){
            fprintf(fPointer,"Tahu Bacem\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j13, c3, t13);
        }else{}

        if(j14>0){
            fprintf(fPointer,"Tempe Bacem\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j14, c4, t14);
        }else{}

        if(j15>0){
            fprintf(fPointer,"Perkedel\t | %d\t\t | Rp.%d\t | Rp.%d\t|\n", j15, c5, t15);
        }else{}

   fprintf(fPointer,"=================================================================\n");
   fprintf(fPointer,"Total Harga\t : Rp.%d\t\n",total);
   fprintf(fPointer,"Diskon\t\t : %d persen\n", discount);
   fprintf(fPointer,"Harga Akhir\t : Rp.%d\t\n", harga_akhir);
   fprintf(fPointer,"=================================================================\n");
   fprintf(fPointer,"Uang Pembayaran\t : Rp.%d\t\n", uang);
   fprintf(fPointer,"Kembalian\t : Rp.%d\t\n", kembalian);
   fprintf(fPointer,"=================================================================\n\n"); 

    return 0;
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
//=======================================================================//
float menuProgram(){
    printf("+=======================================+\n");
    printf("|        Program Kasir Milenium         |\n");
    printf("+=======================================+\n");
    printf("| 1. | Kasir Kedai Pemersatu Bangsa\t|\n");
    printf("| 2. | Produk\t\t\t\t|\n");
    printf("| 3. | Supplier\t\t\t\t|\n");
    printf("| 4. | About Us\t\t\t\t|\n");
    printf("+=======================================+\n");
    printf(" pilihan anda :");
    scanf("%d", &program);
    system("cls");

    if(program==1){
        headerMenu();
        daftarMenu();
    }
    else if(program==2){
        produkKedai();
    }
    else if(program==3){
        supplier();
    }
    else if(program==4){
        tentangKami();
    }
    printf("\n+=======================================+\n");
    printf("|       Kembali ke Menu Program?        |\n");
    printf("+=======================================+\n");
    printf("| 1. | Kembali\t\t\t\t|\n");
    printf("| 2. | Selesai\t\t\t\t|\n");
    printf("+=======================================+\n");
    printf(" pilihan anda :");
    scanf("%d", &kembali);
    
    if(kembali==1){
        system("cls");
        menuProgram();
    }
    else if(kembali==2){
        printf("+============================================+\n");
        printf("| Terimakasih Telah Menggunakan Program Kami |\n");
        printf("+============================================+\n");
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
//=======================================================================//
void produkKedai(){
    printf("\n     KEDAI PEMERSATU BANGSA\n");
    printf("      -- DAFTAR MAKANAN --\n\n");
    printf("===================================\n");
    printf("|  No |     Makanan     |  Harga  |\n");
    printf("|=====|=================|=========|\n");
    printf("|  1  | Nasi Telur\t| 6500    |\n");
    printf("|  2  | Nasi Lele\t| 8500    |\n");
    printf("|  3  | Nasi Goreng\t| 8000    |\n");
    printf("|  4  | Nasi Liwet\t| 7500    |\n");
    printf("|  5  | Nasi Ayam\t| 9000    |\n");
    printf("===================================\n");

    printf("\n      KEDAI PEMERSATU BANGSA\n");
    printf("       -- DAFTAR MINUMAN --\n\n");
    printf("===================================\n");
    printf("|  No |     Minuman     |  Harga  |\n");
    printf("|=====|=================|=========|\n");
    printf("|  1  | Es Teh\t\t| 2000    |\n");
    printf("|  2  | Es Jeruk \t| 2500    |\n");
    printf("|  3  | Es Susu \t| 3500    |\n");
    printf("|  4  | Es Kopi \t| 3000    |\n");
    printf("|  5  | Es Buah \t| 5000    |\n");
    printf("===================================\n");
    
    printf("\n      KEDAI PEMERSATU BANGSA\n");
    printf("       -- DAFTAR CEMILAN --\n\n");
    printf("===================================\n");
    printf("|  No |     Cemilan     |  Harga  |\n");
    printf("|=====|=================|=========|\n");
    printf("|  1  | Kentang Goreng\t| 6000    |\n");
    printf("|  2  | Tahu Goreng Isi\t| 5000    |\n");
    printf("|  3  | Tahu Bacem\t| 5000    |\n");
    printf("|  4  | Tempe Bacem\t| 5000    |\n");
    printf("|  5  | Perkedel\t| 5000    |\n");
    printf("===================================\n");
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
    printf ("\n");
    printf ("================================================================================");
    printf ("\t\t\t\t    ABOUT US\n");
    printf ("================================================================================");
    printf ("DEVELOPER : \n\n");
    printf ("A.A. Krisnha Wirayudha \t I Gusti Made Agung Ary Surya Persada \t Medhiko Biraja");
    printf ("      2005551087                        2005551151                  2005551044  \n\n");
    printf ("   Kami merupakan Mahasiswa Universitas Udayana dari Fakultas Teknik, Jurusan\n");
    printf ("    Teknologi Informasi. Program ini kami buat bersama untuk memenuhi tugas \n");
    printf ("\t\t  akhir semester dari Mata Kuliah Pemrograman. \n\n");
    printf ("    Program ini ditujukan untuk Usaha Kecil Menengah (UKM) yang baru memulai\n");
    printf ("\tusaha agar rekap penjualan yang dihasilkan setiap harinya menjadi\n");
    printf ("\t\t\tlebih tertata dan lebih efisien.");
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
//=======================================================================//
float supplier(){
    printf("Masukkan Data Supplier!\n");
    printf("Nama\t: ");
    scanf("%s", &nama);
    printf("Alamat\t: ");
    scanf("%s", &alamat);
    printf("No Telepon\t: ");
    scanf("%s", &telepon);
    printf("Sukses menambah data.");

    FILE *fptr;
    FILE * fPointer;
    fPointer = fopen("Data Supplier.txt", "a+");

    fprintf(fPointer,"Nama\t:%s\n",nama);
    fprintf(fPointer,"Alamat\t:%s\n",alamat);
    fprintf(fPointer,"No Telpon\t:%s\n",telepon);
}
