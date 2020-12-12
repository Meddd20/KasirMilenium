#include <stdio.h> //Header Standar Input/Output dalam C
#include <time.h> // Header dalam C untuk memanipulasi waktu

//Deklarasi fungsi yang digunakan dalam program ini
float daftarMenu(int total);
float mendapatkanDiskon(int total, int discount);
float potonganHarga(int discount, int harga, int total);
float hargaAkhir(int harga, int total, int harga_akhir);


//Merupakan fungsi utama dalam program yang akan dieksekusi pertama kali saat program dijalankan
int main()
{
    int a;
    float total = daftarMenu(a);
    int c;
    float dis = mendapatkanDiskon(total, c);
    int e;
    float potHar = potonganHarga(dis, e, total);
    int i;
    float harAkh = hargaAkhir(potHar, total, i);

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
//=======================================================================//
float daftarMenu(int total)
{
    int pilihan;
    int makanan;
    int minuman;
    int cemilan;
    int h1, h2, h3, h4, h5;
    int j1=0, j2=0, j3=0, j4=0, j5=0;
    int t1=0, t2=0, t3=0, t4=0, t5=0;
    int m1, m2, m3, m4, m5;
    int j6=0, j7=0, j8=0, j9=0, j10=0;
    int t6=0, t7=0, t8=0, t9=0, t10=0;
    int c1, c2, c3, c4, c5;
    int j11=0, j12=0, j13=0, j14=0, j15=0;
    int t11=0, t12=0, t13=0, t14=0, t15=0;
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


            case 2 :
                    c2=5000;
                    printf (" ==> Tahu Goreng Isi \t\t: @ Rp.%d\n", c2);
                    printf (" Jumlah pesanan \t: "); scanf("%d", &j12);
                    t12=j12*c2;
                    break;

            case 3 :
                    c3=5000;
                    printf (" ==> Cumi Goreng Tepung \t\t: @ Rp.%d\n", c3);
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

        printf("\n==================\n");
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
float mendapatkanDiskon(int total, int discount){

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
    return discount;
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
float potonganHarga(int discount, int harga, int total){
    harga = discount*total/100;
    printf("Diskon Terakumulasikan Sebesar : Rp.%d\n\n", harga);

return harga;
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
float hargaAkhir(int harga, int total, int harga_akhir){
    harga_akhir = total-harga;

    printf("=======================================================\n");
    printf("Total Harga yang Harus Dibayar Sebesar : Rp.%d         \n", harga_akhir);
    printf("=======================================================\n\n");
    printf("+============================+\n");
    printf("+Terimakasih Telah Berbelanja+\n");
    printf("+============================+\n");
return harga_akhir;
}
