//=======================================================================//
//                      Definisi dan Penyertaan Lib                      //
//=======================================================================//
#include <stdio.h> //Header Standar Input/Output dalam C
#include <time.h> // Header dalam C untuk memanipulasi waktu
#include <string.h> //Header untuk melakukan manipulasi string
#include <stdlib.h> //Header untuk operasi pembanding dan operasi konversi

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

//=======================================================================//
//          Deklarasi fungsi yang digunakan dalam program ini            //
//=======================================================================//
void loginAdmin();
void headerMenu();
float daftarMenu();
float mendapatkanDiskon();
float potonganHarga();
float hargaAkhir();
float transaksiPembayaran();
float transaksiKembalian();
float laporanTransaksi();
float menuProgram();
float menuTamu();
void produkKedai();
void tentangKami();
void menuSupplier();
void dataSupplier();
void fileSupplier();
void readSupplier();
void headerProgram();
void closeProgram();

//=======================================================================//
//       Merupakan fungsi utama dalam program yang akan dieksekusi       //
//                pertama kali saat program dijalankan                   //
//=======================================================================//
int main(){
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
void headerMenu(){
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
    printf ("================================================================================\n");
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
// Versi : 1.1                                      Rev. 1               //
// Tgl   : 19-12-2020                               Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void loginAdmin(){
    char usrnm[5], pass[12];
    int status = 0;
    int salah = 0;
    char nama[20];
    char konfirmasiAkun;

    headerProgram();
    
    printf ("Sudah Punya Akun? Login Disini! (Y/N)");
    scanf ("%c", &konfirmasiAkun);

    if (konfirmasiAkun == 'Y' || konfirmasiAkun == 'y'){
        Login :
        printf ("Username : ");
        scanf ("%s", &usrnm);
        printf ("Password : ");
        scanf ("%s", &pass);

        if (strcmp (usrnm, "Medhiko")==0 && strcmp (pass, "2005551044")==0){
            system ("cls");
            printf ("Selamat Datang, %s\n", usrnm);
            menuProgram();
        }else if (strcmp (usrnm, "Surya")==0 && strcmp (pass, "2005551151")==0){
            system ("cls");
            printf ("Selamat Datang, %s\n", usrnm);
            menuProgram();
        }else if (strcmp (usrnm, "Kris")==0 && strcmp (pass, "2005551087")==0){
            system ("cls");
            printf ("Selamat Datang, %s\n", usrnm);
            menuProgram();
        }else {
            system ("cls");
            printf ("Username atau Password yang Anda Masukkan Salah!\n");
            printf ("Perhatikan Penggunaan Capslock!\n");
            goto Login;
        }
    }else if (konfirmasiAkun == 'N' || konfirmasiAkun =='n'){
            printf ("Anda Akan Masuk Sebagai Tamu\n");
            printf ("Masukkan Nama Depan Anda : ");
            scanf ("%s", &nama);
            printf ("\nSelamat Datang, %s\n", nama);
            menuTamu();
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
// Tgl   : 12-12-2020                               Tgl: 12-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
// Versi : 2.0                                      Rev. 1               //
// Tgl  : 02-12-2020                                Tgl: 02-12-2020      //
// A.A. Krisnha Wirayudha - 2005551087                                   //
// Kelas B                                                               //
// Versi : 2.1                                      Rev. 2               //
// Tgl  : 19-12-2020                                Tgl: 19-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
float daftarMenu(){
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
                    hrg_mknn1=6500;
                    printf (" ==> Nasi Telur \t: @ Rp.%d\n", hrg_mknn1);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mknn1);
                    ttl_mknn1=qtt_mknn1*hrg_mknn1;
                    break;
            case 2 :
                    hrg_mknn2=8500;
                    printf (" ==> Nasi Lele \t\t: @ Rp.%d\n", hrg_mknn2);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mknn2);
                    ttl_mknn2=qtt_mknn2*hrg_mknn2;
                    break;
            case 3 :
                    hrg_mknn3=8000;
                    printf (" ==> Nasi Goreng \t: @ Rp.%d\n", hrg_mknn3);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mknn3);
                    ttl_mknn3=qtt_mknn3*hrg_mknn3;
                    break;
            case 4 :
                    hrg_mknn4=7500;
                    printf (" ==> Nasi Liwet \t: @ Rp.%d\n", hrg_mknn4);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mknn4);
                    ttl_mknn4=qtt_mknn4*hrg_mknn4;
                    break;
            case 5 :
                    hrg_mknn5=9000;
                    printf (" ==> Nasi Ayam \t\t: @ Rp.%d\n", hrg_mknn5);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mknn5);
                    ttl_mknn5=qtt_mknn5*hrg_mknn5;
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
                    hrg_mnm1=2000;
                    printf (" ==> Es Teh \t\t: @ Rp.%d\n", hrg_mnm1);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mnm1);
                    ttl_mnm1=qtt_mnm1*hrg_mnm1;
                    break;
            case 2 :
                    hrg_mnm2=2500;
                    printf (" ==> Es jeruk \t\t: @ Rp.%d\n", hrg_mnm2);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mnm2);
                    ttl_mnm2=qtt_mnm2*hrg_mnm2;
                    break;
            case 3 :
                    hrg_mnm3=3500;
                    printf (" ==> Es Susu \t\t: @ Rp.%d\n", hrg_mnm3);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mnm3);
                    ttl_mnm3=qtt_mnm3*hrg_mnm3;
                    break;
            case 4 :
                    hrg_mnm4=3000;
                    printf (" ==> Es Kopi \t\t: @ Rp.%d\n", hrg_mnm4);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mnm4);
                    ttl_mnm4=qtt_mnm4*hrg_mnm4;
                    break;
            case 5 :
                    hrg_mnm5=5000;
                    printf (" ==> Es Buah \t\t: @ Rp.%d\n", hrg_mnm5);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_mnm5);
                    ttl_mnm5=qtt_mnm5*hrg_mnm5;
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
                    hrg_cmln1=6000;
                    printf (" ==> Kentang Goreng \t: @ Rp.%d\n", hrg_cmln1);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_cmln1);
                    ttl_cmln1=qtt_cmln1*hrg_cmln1;
                    break;
            case 2 :
                    hrg_cmln2=5000;
                    printf (" ==> Tahu Goreng Isi \t: @ Rp.%d\n", hrg_cmln2);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_cmln2);
                    ttl_cmln2=qtt_cmln2*hrg_cmln2;
                    break;
            case 3 :
                    hrg_cmln3=5000;
                    printf (" ==> Tahu Bacem \t: @ Rp.%d\n", hrg_cmln3);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_cmln3);
                    ttl_cmln3=qtt_cmln3*hrg_cmln3;
                    break;
            case 4 :
                    hrg_cmln4=5000;
                    printf (" ==> Tempe Bacem \t: @ Rp.%d\n", hrg_cmln4);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_cmln4);
                    ttl_cmln4=qtt_cmln4*hrg_cmln4;
                    break;
            case 5 :
                    hrg_cmln5=5000;
                    printf (" ==> Perkedel \t: @ Rp.%d\n", hrg_cmln5);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &qtt_cmln5);
                    ttl_cmln5=qtt_cmln5*hrg_cmln5;
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
        printf("\n+=======================================================================+\n");
        printf("|Nama Pesanan \t\t\t|  Harga \t| Jumlah |    Total\t|\n");
        printf("+=======================================================================+\n");

        if(qtt_mknn1>0){
            printf("|Nasi Telur\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn1, qtt_mknn1, ttl_mknn1);
        }else{}

        if(qtt_mknn2>0){
            printf("|Nasi Lele\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn2, qtt_mknn2, ttl_mknn2);
        }else{}

        if(qtt_mknn3>0){
            printf("|Nasi Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn3, qtt_mknn3, ttl_mknn3);
        }else{}

        if(qtt_mknn4>0){
            printf("|Nasi Liwet\t\t\t|Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn4, qtt_mknn4, ttl_mknn4);
        }else{}

        if(qtt_mknn5>0){
            printf("|Nasi Ayam\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mknn5, qtt_mknn5, ttl_mknn5);
        }else{}

        if(qtt_mnm1>0){
            printf("|Es Teh\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm1, qtt_mnm1, ttl_mnm1);
        }else{}

        if(qtt_mnm2>0){
            printf("|Es Jeruk\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm2, qtt_mnm2, ttl_mnm2);
        }else{}

        if(qtt_mnm3>0){
            printf("|Es Susu\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm3, qtt_mnm3, ttl_mnm3);
        }else{}

        if(qtt_mnm4>0){
            printf("|Es Kopi\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm4, qtt_mnm4, ttl_mnm4);
        }else{}

        if(qtt_mnm5>0){
            printf("|Es Buah\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_mnm5, qtt_mnm5, ttl_mnm5);
        }else{}

        if(qtt_cmln1>0){
            printf("|Kentang Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln1, qtt_cmln1, ttl_cmln1);
        }else{}

        if(qtt_cmln2>0){
            printf("|Tahu Goreng\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln2, qtt_cmln2, ttl_cmln2);
        }else{}

        if(qtt_cmln3>0){
            printf("|Tahu Bacem\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln3, qtt_cmln3, ttl_cmln3);
        }else{}

        if(qtt_cmln4>0){
            printf("|Tempe Bacem\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln4, qtt_cmln4, ttl_cmln4);
        }else{}

        if(qtt_cmln5>0){
            printf("|Perkedel\t\t\t| Rp.%d\t|   %d\t |  Rp.%d\t|\n", hrg_cmln5, qtt_cmln5, ttl_cmln5);
        }else{}

        printf("+=======================================================================+\n\n");
        printf("+=======================================================================+\n");
        total=ttl_mknn1+ttl_mknn2+ttl_mknn3+ttl_mknn4+ttl_mknn5+ttl_mnm1+ttl_mnm2+ttl_mnm3+ttl_mnm4+ttl_mnm5+ttl_cmln1+ttl_cmln2+ttl_cmln3+ttl_cmln4+ttl_cmln5;
        printf("|Harga \t\t\t\t\t\t: \tRp.%d   \t|\n", total);
        printf("+=======================================================================+\n\n");

    mendapatkanDiskon();
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
            printf("+=======================================================================+\n");
            printf("|Berhasil Mendapatkan Potongan Harga Sebesar \t: \t%d persen!\t|\n", discount);
        }else if (total >= 80000){
            discount = 10;
            printf("+=======================================================================+\n");
            printf("|Berhasil Mendapatkan Potongan Harga Sebesar \t: \t%d persen!\t|\n", discount);
        }else if (total >= 50000){
            discount = 5;
            printf("+=======================================================================+\n");
            printf("|Berhasil Mendapatkan Potongan Harga Sebesar \t: \t%d persen!\t|\n", discount);
        }else {
            printf("+=======================================================================+\n");
            printf ("|Anda tidak Mendapatkan Diskon\t\t\t:\t-\t\t|\n");
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
    printf("+=======================================================================+\n");
    printf(" Diskon Terakumulasikan Sebesar \t\t: \tRp.%d  \t\n", harga);
    printf("+=======================================================================+\n");

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

    printf("+=======================================================================+\n");
    printf("|Total Harga yang Harus Dibayar Sebesar \t: \tRp.%d  \t|\n", harga_akhir);
    printf("+=======================================================================+\n");
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
    printf(" Uang Pembayaran \t\t\t\t: \tRp.");
    scanf("%d",&uang);
    if(uang<harga_akhir){
        printf(" Uang tidak cukup!\n");
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
float transaksiKembalian(){
    kembalian = uang-harga_akhir;
    printf("+=======================================================================+\n");
    printf("|Kembalian \t\t\t\t\t:   \tRp.%d  \t|\n", kembalian);
    printf("+=======================================================================+\n");

    laporanTransaksi();
    
    printf("+=======================================================================+\n");
    printf("|\t\t     Terima Kasih Atas Kunjungan Anda\t\t\t|\n");
    printf("|\t\t   Kami Nanti Kunjungan Anda Berikutnya\t\t\t|\n");
    printf("|\t\t\t         MERDEKA!\t\t\t\t|\n");
    printf("+=======================================================================+\n");
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
//=======================================================================//
float laporanTransaksi(){
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

   fPointer = fopen("Report Transaksi Pembelian.txt", "a");
    
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"\t\t        KEDAI PEMERSATU BANGSA\n");
        fprintf(fPointer,"\t\t   Jl. Pantai Berawa No. 888, Bali\n");
        fprintf(fPointer,"\t\t       %s", asctime (Sys_T));
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"+=======================================================================+\n");
        fprintf(fPointer,"\t\t\t    STRUK BELANJA \n\n");
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
//=======================================================================//
float menuProgram(){
    headerProgram();
    
    printf("+=======================================+\n");
    printf("|        Program Kasir Milenium         |\n");
    printf("+=======================================+\n");
    printf("| 1. | Kasir Kedai Pemersatu Bangsa\t|\n");
    printf("| 2. | Produk\t\t\t\t|\n");
    printf("| 3. | Supplier\t\t\t\t|\n");
    printf("| 4. | Laporan Penjualan\t\t|\n");
    printf("| 5. | About Us\t\t\t\t|\n");
    printf("+=======================================+\n");
    printf(" pilihan anda :");
    scanf("%d", &program);
    system("cls");

    if(program==1){
        headerMenu();
        daftarMenu();
    }
    else if(program==2){
        headerMenu();
        produkKedai();
    }
    else if(program==3){
        menuSupplier();
    }
    else if(program==4){
        headerMenu();
        laporanPenjualan();
    }
    else if(program==5){
        headerProgram();
        tentangKami();
    }else{
        menuProgram();
    }
    
    printf("\n+=======================================+\n");
    printf("|       Kembali ke Menu Program?        |\n");
    printf("+=======================================+\n");
    printf("| 1. | Kembali\t\t\t\t|\n");
    printf("| 2. | Selesai\t\t\t\t|\n");
    printf("+=======================================+\n");
    printf(" pilihan anda :");
    scanf("%d", &kembali);
    system("cls");
    
    if(kembali==1){
        menuProgram();
    }else if(kembali==2){
        closeProgram();
        exit (1);
    }else{
        menuProgram();
    }
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
//=======================================================================//
float menuTamu(){
    headerProgram();
    
    printf("+=======================================+\n");
    printf("|        Program Kasir Milenium         |\n");
    printf("+=======================================+\n");
    printf("| 1. | Produk\t\t\t\t|\n");
    printf("| 2. | About Us\t\t\t\t|\n");
    printf("+=======================================+\n");
    printf(" pilihan anda :");
    scanf("%d", &programTamu);
    system("cls");

    if(programTamu==1){
        headerMenu();
        produkKedai();
    }
    else if(programTamu==2){
        headerProgram();
        tentangKami();
    }else{
        menuTamu();
    }
    
    printf("\n+=======================================+\n");
    printf("|       Kembali ke Menu Program?        |\n");
    printf("+=======================================+\n");
    printf("| 1. | Kembali\t\t\t\t|\n");
    printf("| 2. | Selesai\t\t\t\t|\n");
    printf("+=======================================+\n");
    printf(" pilihan anda :");
    scanf("%d", &kembali);
    system("cls");
    
    if(kembali==1){
        menuTamu();
    }
    else if(kembali==2){
        closeProgram();
        exit (1);
    }else{
        menuTamu();
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
//=======================================================================//
void produkKedai(){
    printf("\n\t\t\t      KEDAI PEMERSATU BANGSA\n");
    printf("\t\t\t       -- DAFTAR MAKANAN --\n\n");
    printf("\t\t\t+=================================+\n");
    printf("\t\t\t|  No |     Makanan     |  Harga  |\n");
    printf("\t\t\t|=====+=================+=========|\n");
    printf("\t\t\t|  1  | Nasi Telur\t| 6500    |\n");
    printf("\t\t\t|  2  | Nasi Lele\t| 8500    |\n");
    printf("\t\t\t|  3  | Nasi Goreng\t| 8000    |\n");
    printf("\t\t\t|  4  | Nasi Liwet\t| 7500    |\n");
    printf("\t\t\t|  5  | Nasi Ayam\t| 9000    |\n");
    printf("\t\t\t+=================================+\n");

    printf("\n\t\t\t       KEDAI PEMERSATU BANGSA\n");
    printf("\t\t\t        -- DAFTAR MINUMAN --\n\n");
    printf("\t\t\t+=================================+\n");
    printf("\t\t\t|  No |     Minuman     |  Harga  |\n");
    printf("\t\t\t|=====+=================+=========|\n");
    printf("\t\t\t|  1  | Es Teh\t\t| 2000    |\n");
    printf("\t\t\t|  2  | Es Jeruk \t| 2500    |\n");
    printf("\t\t\t|  3  | Es Susu \t| 3500    |\n");
    printf("\t\t\t|  4  | Es Kopi \t| 3000    |\n");
    printf("\t\t\t|  5  | Es Buah \t| 5000    |\n");
    printf("\t\t\t+=================================+\n");

    printf("\n\t\t\t       KEDAI PEMERSATU BANGSA\n");
    printf("\t\t\t        -- DAFTAR CEMILAN --\n\n");
    printf("\t\t\t+=================================+\n");
    printf("\t\t\t|  No |     Cemilan     |  Harga  |\n");
    printf("\t\t\t|=====+=================+=========|\n");
    printf("\t\t\t|  1  | Kentang Goreng\t| 6000    |\n");
    printf("\t\t\t|  2  | Tahu Goreng Isi\t| 5000    |\n");
    printf("\t\t\t|  3  | Tahu Bacem\t| 5000    |\n");
    printf("\t\t\t|  4  | Tempe Bacem\t| 5000    |\n");
    printf("\t\t\t|  5  | Perkedel\t| 5000    |\n");
    printf("\t\t\t+=================================+\n");
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
    printf ("================================================================================\n");
    printf ("\t\t\t\t    ABOUT US\n");
    printf ("================================================================================\n");
    printf ("\t\t\t\t Developed By : \n\n");
    printf ("A.A. Krisnha Wirayudha \t I Gusti Made Agung Ary Surya Persada \t Medhiko Biraja\n");
    printf ("      2005551087                       2005551151                  2005551044  \n\n");
    printf ("   Kami merupakan Mahasiswa Universitas Udayana dari Fakultas Teknik, Jurusan\n");
    printf ("    Teknologi Informasi. Program ini kami buat bersama untuk memenuhi tugas \n");
    printf ("\t\t  akhir semester dari Mata Kuliah Pemrograman. \n\n");
    printf ("    Program ini ditujukan untuk Usaha Kecil Menengah (UKM) yang baru memulai\n");
    printf ("\tusaha agar rekap penjualan yang dihasilkan setiap harinya menjadi\n");
    printf ("\t\t\tlebih tertata dan lebih efisien.\n\n\n");
    printf ("================================================================================\n");
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
//=======================================================================//
void menuSupplier(){
    headerMenu();
    
    int pilihanSupplier;

    printf("================================\n");
    printf("|  No |           Menu         |\n");
    printf("|=====|========================|\n");
    printf("|  1  | Menambah Data Supplier |\n");
    printf("|  2  | Membaca Data Supplier  |\n");
    printf("|  3  | Kembali Ke Menu Awal   |\n");
    printf("|  4  | Selesai                |\n");
    printf("================================\n");
    printf(" pilihan anda :");
    scanf("%d", &pilihanSupplier);
    system("cls");

    if(pilihanSupplier == 1){
        headerMenu();
        dataSupplier();
    }else if (pilihanSupplier == 2){
        headerMenu();
        readSupplier();
    }else if (pilihanSupplier == 3){
        menuProgram();
    }else if (pilihanSupplier == 4){
        closeProgram();
        exit (1);
    }else{
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
//=======================================================================//
void dataSupplier(){
    printf("Masukkan Data Supplier!\n");
    printf("> Jenis Supplier\t: ");
    scanf("%s", &supplier);
    printf("> Nama\t\t\t: ");
    scanf("%s", &nama);
    printf("> No Telepon\t\t: ");
    scanf("%s", &telepon);
    printf("> Alamat\t\t: ");
    scanf("%s", &alamat);
    fileSupplier();
    printf("Sukses menambah data!\n\n");

    printf("\n+=======================================+\n");
    printf("|       Kembali ke Menu Program?        |\n");
    printf("+=======================================+\n");
    printf("| 1. | Kembali Ke Menu Supplier         |\n");
    printf("| 2. | Kembali Ke Menu Home             |\n");
    printf("| 3. | Selesai\t\t\t\t|\n");
    printf("+=======================================+\n");
    printf(" pilihan anda :");
    scanf("%d", &kembali);
    system("cls");
    
    if(kembali == 1){
        menuSupplier();
    }else if (kembali == 2){
        menuProgram();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        menuSupplier();
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
//=======================================================================//
void fileSupplier(){
    FILE *fptr;
    FILE * fPointer;
    fPointer = fopen("Supplier.txt", "a");

    fprintf(fPointer,"> Jenis Supplier\t: %s\n", supplier);
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

    if((fptr = fopen("Supplier.txt", "r"))== NULL){
        printf("Error! File Tidak Ditemukan");
        exit (1);
    }

    printf("Berikut Adalah List Data Beberapa Supplier Aktif\n\n");
    while(fgets(buff, sizeof(buff), fptr)){
        printf("%s", buff);
    }
    fclose (fptr);

    printf("\n+=======================================+\n");
    printf("|       Kembali ke Menu Program?        |\n");
    printf("+=======================================+\n");
    printf("| 1. | Kembali Ke Menu Supplier         |\n");
    printf("| 2. | Kembali Ke Menu Home             |\n");
    printf("| 3. | Selesai\t\t\t\t|\n");
    printf("+=======================================+\n");
    printf(" pilihan anda :");
    scanf("%d", &kembali);
    system("cls");
    
    if(kembali == 1){
        menuSupplier();
    }else if (kembali == 2){
        menuProgram();
    }else if (kembali == 3){
        closeProgram();
        exit (1);
    }else{
        menuSupplier();
    }
}

//========================Fungsi Header Program==========================//
//=======================================================================//
// Nama Fungsi    : Header Program                                       //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Memberikan header pada setiap halaman menu program   //
//                  Kasir Milenium                                       //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 23-12-2020                               Tgl: 23-12-2020      //
// Agung Ary Surya Persada - 2005551151                                  //
// Kelas B                                                               //
//=======================================================================//
void headerProgram(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    printf("+===============================================================================+\n");
    printf("|   +++++++ +++                                                  +   + +   +    |\n");
    printf("|     +++++ +++++                SELAMAT DATANG                   +  + + + +    |\n");
    printf("|        ++ +++                 -KASIR MILENIUM-                    ++ +   +    |\n");
    printf("|        ++ ++                        2020                        +  + +   +    |\n");
    printf("|         + +                                                   +    + +   +    |\n");
    printf("+===============================================================================+\n");
    printf ("\t\t\t   %s\n", asctime (Sys_T));

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
//=======================================================================//
void closeProgram(){
    struct tm *Sys_T;
    time_t Tval;
    Tval = time (NULL);
    Sys_T = localtime (&Tval);

    printf("+===============================================================================+\n");
    printf("|   +++++++ +++                   TERIMAKASIH                    +   + +   +    |\n");
    printf("|     +++++ +++++        TELAH MENGGUNAKAN PROGRAM KAMI           +  + + + +    |\n");
    printf("|        ++ +++               --------------------                  ++ +   +    |\n");
    printf("|        ++ ++                  -KASIR MILENIUM-                  +  + +   +    |\n");
    printf("|         + +                         2020                      +    + +   +    |\n");
    printf("+===============================================================================+\n");
    printf ("\t\t\t   %s\n", asctime (Sys_T));

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
//=======================================================================//
void laporanPenjualan(){
    char buff[255];
    FILE *fptr;

    if((fptr = fopen("Report Transaksi Pembelian.txt", "r"))== NULL){
        printf("Error! File Tidak Ditemukan");
        exit (1);
    }

    printf("Berikut Adalah List Data Laporan Penjualan\n\n");
    while(fgets(buff, sizeof(buff), fptr)){
        printf("%s", buff);
    }
    fclose (fptr);
}
