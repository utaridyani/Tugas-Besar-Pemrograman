#include <stdio.h>

int pDOKTER (int hari, int dokter);
int menuPengguna (int pengguna, int userID, int password);

//Main Function
int main(){
int hari, dokter, pengguna, userID, password;

    menuPengguna(pengguna,userID,password);
    pDOKTER(hari, dokter);

}
//Fungsi Jenis Pengguna
int menuPengguna(int pengguna, int userID, int password){
	printf("\t\t\tSelamat Datang di Weight Tracker!");
	printf("\n\nMasuk sebagai : ");
	printf("\n1. Pengguna Premium");
	printf("\n2. Pengguna Reguler");

	printf("\n\nMasukkan nomor pilihan Anda : ");
	scanf("%d",&pengguna);

	if (pengguna==1){
		printf("User ID : ");
		scanf("%d",&userID);
		printf("Password : ");
		scanf("%d",&password);

		if (password=userID*11){
            printf("Anda adalah pengguna premium\n");
            //masukkan menu pengguna premium
		}
		else{
            printf("Input Anda salah!");
            return(0);
		}
    }
    else if(pengguna==2){
        printf("Anda adalah pengguna reguler\n");
        //Tampilkan menu pengguna reguler
    }
    else{
        printf("Input yang anda masukkan salah!");
        return(0);
    }
}

//Fungsi Tanya Dokter
int pDOKTER (int hari, int dokter){
	printf("\t\t\t+-----------------------+\n");
	printf("\t\t\t|      Tanya Dokter     |\n");
	printf("\t\t\t+-----------------------+\n");
	printf("\nPilih hari untuk sesi tanya jawab : \n");
	printf("1.Senin\n");
	printf("2.Selasa\n");
	printf("3.Rabu\n");
	printf("4.Kamis\n");
	printf("5.Jumat\n");
	printf("\nMasukkan nomor hari pilihan Anda : ");
	scanf("%d",&hari);

	if (hari==1){
		printf("\nAnda akan melakukan sesi tanya jawab pada hari Senin\n");
		printf("Pilihan dokter yang bertugas pada hari Senin");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
            default :
                printf("Input Anda salah!");
		}
	}

	else if (hari==2){
		printf("\nAnda akan melakukan sesi tanya jawab pada hari Selasa\n");
		printf("\nPilihan dokter yang bertugas pada hari Selasa");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
		}
	}

	else if (hari==3){
		printf("\nAnda akan melakukan sesi tanya jawab pada hari Rabu\n");
		printf("\nPilihan dokter yang bertugas pada hari Rabu");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
		}
	}

		else if (hari==4){
		printf("\nAnda akan melakukan sesi tanya jawab pada hari Kamis\n");
		printf("\nPilihan dokter yang bertugas pada hari Kamis");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
		}
	}

		else if (hari==5){
		printf("\nAnda akan melakukan sesi tanya jawab pada hari Jumat\n");
		printf("\nPilihan dokter yang bertugas pada hari Jumat");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
		}
	}}


