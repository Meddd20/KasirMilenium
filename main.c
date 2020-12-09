#include <stdio.h> //Header Standar Input/Output dalam C
#include <time.h> // Header dalam C untuk memanipulasi waktu

//Deklarasi fungsi yang digunakan dalam program ini
void headerMenu();
void loginAdmin();
void menuPemesanan();
void deskripsiMenu();

//Merupakan fungsi utama dalam program yang akan dieksekusi pertama kali saat program dijalankan
int main()
{
    loginAdmin();
    headerMenu();
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

    printf ("================================================================================");
    printf ("\t\t\t\tLAWLESS BURGER BAR\n");
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
        gets (usrnm);
        printf ("Password : ");
        gets (pass);

        if (strcmp (usrnm, "admin")==0 && strcmp (pass, "12345")==0){
            system ("cls");
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
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan menu menu makanan, minuman, serta        //
//                  camilan yang terdapat dalam Lawless Burger Bar       //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-12-2020                               Tgl: 09-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void daftarMenu()
{
    printf ("\n\n\t\t\t\tEYEHATEBURGS\n\n");
    printf ("01.THE LEMMY_________135K 02.PHILLY ANSELMO______75K 03.ENTER SANDWICH_______85K\n\n");
    printf ("04.DOG NASTY_________135K 05.MADBALLS____________75K 06.JOEY BELLODONA_______85K\n\n");
    printf ("07.SABBATH BURGER         08.THE GREAT SOUTHERN      09.MOTLEY BURG");
    printf ("\nSINGLE_52K / DOUBLE_69K   THREADKILL___________47K   SINGLE_57K / DOUBLE_69K\n\n");

    printf ("\n\n\t\t\t   SIDE BY SIDE, DO OR DIE\n\n");
    printf ("10.JUDAS FRIES________23K 11.JALAPENOSTIK FRONT__34K 12.MOZPIT_______________45K\n\n");
    printf ("13.MUNICIPAL WINGS____38K 14.STRYPER_____________36K 15.SPLATTERTHRASH_______71K\n\n");

    printf ("\n\n\t\t\t DRINK THE BLOOD OF THY ENEMY\n\n");
    printf (" BINTANG | RADLER | HEINEKEN | ERDINCER DUNKEL | COCA COLA | SPRITE | LEMON TEA\n");
    printf ("   39K   |   35K  |    45K   |      136K       |    21K    |  21K   |    15K   \n\n");
    printf ("\t\t     ORANGE JUICE | ICE-T | MINERAL WATER\n");
    printf ("\t\t          21K     |  12K  |      12K   \n\n");
}
//==========================Fungsi Daftar Menu===========================//
//=======================================================================//
// Nama Fungsi    : Daftar Menu                                          //
// Input Argumen  : -                                                    //
// Output Argumen : -                                                    //
// Deskripsi      : Menampilkan Deskripsi dari menu menu                 //
//                  makanan, minuman, serta camilan yang terdapat        //
//                  dalam Lawless Burger Bar                             //
//                                                                       //
// Versi : 1.0                                      Rev. 0               //
// Tgl   : 09-12-2020                               Tgl: 09-12-2020      //
// Medhiko Biraja - 2005551044                                           //
// Kelas B                                                               //
//=======================================================================//
void deskripsiMenu()
{
    int kodeMenu;

    daftarMenu();
    deskripsi:
    printf ("Deskripsi Menu : ");
    scanf ("%d", &kodeMenu);

    switch (kodeMenu)
    {
        case 1:
        printf ("\n\t\t\t  01.THE LEMMY_________135K\n");
        printf ("    Deluxe all meal burger: double juicy patty with beef bacon and brisket\n");
        printf ("\t\t    plus sunny side up. The Lemmy is God.\n");
        goto deskripsi;
        break;

        case 2:
        printf ("\n\t\t\t  02.PHILLY ANSELMO______75K\n");
        printf ("    Our Cowboy from hell. Philly cheese steak sandwitch with cajun spice, \n");
        printf ("\t\t    sauteed onion, capsicum, and mushrooms. \n");
        goto deskripsi;
        break;

        case 3:
        printf ("\n\t\t\t  03.ENTER SANDWICH_______85K\n");
        printf ("    Exit light, enter night, grain of sand.. wich. Take my hand, Texas \n");
        printf ("\t\t    style BBQ brisket with coleslaw it is! \n");
        goto deskripsi;
        break;

        case 4:
        printf ("\n\t\t\t  04.DOG NASTY_________135K\n");
        printf ("    Can i say all beef bacon wrapped bratweret with teriyaki sauce,\n");
        printf ("\t\t    wasabi mao, katsuboshi, garlic chips? \n");
        goto deskripsi;
        break;

        case 5:
        printf ("\n\t\t\t  05.MADBALLS____________75K\n");
        printf ("     Moshed up beef meatball sandwich, marinara sauce, melted cheddar \n");
        printf ("\t\t    and mozarella form the slamdancing pit! \n");
        goto deskripsi;
        break;

        case 6:
        printf ("\n\t\t\t  06.JOEY BELLODONA_______85K\n");
        printf ("    Grilled portobello mushroom caramelized onion, lettuce \n");
        goto deskripsi;
        break;

        case 7:
        printf ("\n\t\t\t  07.SABBATH BURGER\n");
        printf ("\n\t\t\t  SINGLE_52K / DOUBLE_69K\n");
        printf ("    Classic cheese burger and tritone inversion! Do you even riff? \n");
        goto deskripsi;
        break;

        case 8:
        printf ("\n\t\t\t  08.THE GREAT SOUTHERN \n");
        printf ("\n\t\t\t  THREADKILL___________47K\n");
        printf ("    A vulgar display of fried chicken sandwich with BBQ sauce \n");
        goto deskripsi;
        break;

        case 9:
        printf ("\n\t\t\t  09.MOTLEY BURG\n");
        printf ("\n\t\t\t  SINGLE_57K / DOUBLE_69K\n");
        printf ("    This beef patty, beef bacon, lettuce, tomato (BLT) burger \n");
        printf ("\t\t    will kickstart your heart \n");
        goto deskripsi;
        break;

        case 10:
        printf ("\n\t\t\t  10.JUDAS FRIES________23K\n");
        printf ("    We broke the law just to make these friggin' fries.\n");
        goto deskripsi;
        break;

        case 11:
        printf ("\n\t\t\t  11.JALAPENOSTIK FRONT__34K\n");
        printf ("    You probably gotta gotta go, but don't forget to order this \n");
        printf ("\t\t    jalapeno cheese fries.\n");
        goto deskripsi;
        break;

        case 12:
        printf ("\n\t\t\t  12.MOZPIT_______________45K\n");
        printf ("    Deep fried mozzarella stricks with honey mustard dressing.\n");
        printf ("\t\t     Get caught in a moz!\n");
        goto deskripsi;
        break;

        case 13:
        printf ("\n\t\t\t  13.MUNICIPAL WINGS____38K\n");
        printf ("    A fatal feast of classic chicken wings, are you born to party?\n");
        goto deskripsi;
        break;

        case 14:
        printf ("\n\t\t\t  14.STRYPER_____________36K\n");
        printf ("    Rock the people with this fried chicken strips, to hell with the devil!\n");
        goto deskripsi;
        break;

        case 15:
        printf ("\n\t\t\t  15.SPLATTERTHRASH_______71K\n");
        printf ("    Stryper and judes fries are slam-dancing together on a platter.\n");
        printf ("\t\t     Let the frenzy begin!\n");
        goto deskripsi;
        break;
    }
}

/*void menuPemesanan()
{
    int kodeMenu;
    int hargaPesanan = 0;
    int jumlahPesanan = 0;
    daftarMenu();
    printf ("Masukkan Kode Menu : ");
    scanf ("%d", &kodeMenu );

    printf ("Pesanan : \n");
    switch (kodeMenu)
    {
        case 1:
        hargaPesanan = 135000;
        printf ("Jumlah Pesanan : ");
        scanf ("%d", jumlahPesanan);
        printf ("01.THE LEMMY \t = %d", hargaPesanan * jumlahPesanan);
        break;

    }

}*/

