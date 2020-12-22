#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<dos.h>

int bmi;
int tanggal;
int bulan1;
int tahun;
int Jam;
int Menit;
int Detik;

void koor(int x , int y);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void Loading();
void Tanggal_Waktu();
void box(int a,int b,int c,int d);
void box1(int a, int b, int c, int d);

int main(){
  Loading();
  utama();
  Rekomendasi_makanan();
}

void Tanggal_Waktu(){
    time_t current;
    time(&current);

    printf("%s", ctime(&current));

    struct tm*local = localtime(&current);

    tanggal = local->tm_mday;
    bulan1  = local->tm_mon + 1;
    tahun   = local->tm_year + 1900;
    Jam     = local->tm_hour;
    Menit   = local->tm_min;
    Detik   = local->tm_sec;

    if (Jam < 12)
        printf("%02d:%02d:%02d\n", Jam,Menit,Detik);
    else
        printf("%02d:%02d:%02d\n", Jam-12,Menit,Detik);

    printf("%02d/%02d/%d\n", tanggal,bulan1,tahun);
}
void utama(){
bersih();
Tanggal_Waktu();
setcolor(10);
box(35,7,117,60);

    koor(47,10);printf("\t\t||=================================||\n");
    koor(47,11);printf("\t\t||         Rekomendasi Menu        ||\n");
    koor(47,12);printf("\t\t||          Makanan Sehat          ||\n");
    koor(47,13);printf("\t\t||=================================||\n");

    koor(40,15);printf("+-----------------------------------------------------------------------+\n");
    koor(40,16);printf("|                                                                       |\n");
    koor(40,17);printf("+-----------------------------------------------------------------------+\n");
    koor(40,18);printf("|Tentukan range BMI anda :                                              |\n");
    koor(40,19);printf("|                                                                       |\n");
    koor(40,20);printf("|       1. BMI < 17.0  (Sangat Kurus)                                   |\n");
    koor(40,21);printf("|       2. 17.0 - 18.4 (Kurus)                                          |\n");
    koor(40,22);printf("|       3. 18.5 - 25.0 (Normal)                                         |\n");
    koor(40,23);printf("|       4. 25.1 - 27.0 (Gemuk)                                          |\n");
    koor(40,24);printf("|       5. 27.0 < BMI  (Sangat Gemuk)                                   |\n");
    koor(40,25);printf("|                                                                       |\n");
    koor(40,26);printf("| Input nomor sesuai dengan BMI anda                                    |\n");
    koor(40,27);printf("+-----------------------------------------------------------------------+\n");
    koor(40,28);printf("Jawaban anda : ");
    scanf ("%d",&bmi);
    koor(40,29);printf("\n");
    koor(40,30);printf("\n");
    koor(40,31);printf("\n");

    if(bmi == 1){
        koor(40,34);printf("+-----------------------------------------------------------------------+\n");
        koor(40,35);printf("|Anda sangat kekurangan gizi                                            |\n");
        koor(40,36);printf("+-----------------------------------------------------------------------+\n");
        koor(40,37);printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        koor(40,38);printf("|                                                                       |\n");
        koor(40,39);printf("|       1. Kentang                                                      |\n");
        koor(40,40);printf("|       2. Nasi                                                         |\n");
        koor(40,41);printf("|       3. Susu                                                         |\n");
        koor(40,42);printf("|       4. Kacang                                                       |\n");
        koor(40,43);printf("|       5. Alpukat                                                      |\n");
        koor(40,44);printf("|       6. Daging Merah                                                 |\n");
        koor(40,45);printf("|                                                                       |\n");
        koor(40,46);printf("| Dapat disimpulkan bahwa,                                              |\n");
        koor(40,47);printf("| Anda harus mengonsumsi makanan dengan kadar protein dan               |\n");
        koor(40,48);printf("| karbohidrat yang tinggi.                                              |\n");
        koor(40,49);printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 2){
        koor(40,34);printf("+-----------------------------------------------------------------------+\n");
        koor(40,35);printf("|Anda kekurangan gizi                                                   |\n");
        koor(40,36);printf("+-----------------------------------------------------------------------+\n");
        koor(40,37);printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        koor(40,38);printf("|                                                                       |\n");
        koor(40,39);printf("|       1. Roti                                                         |\n");
        koor(40,40);printf("|       2. Nasi                                                         |\n");
        koor(40,41);printf("|       3. Tempe                                                        |\n");
        koor(40,42);printf("|       4. Tahu                                                         |\n");
        koor(40,43);printf("|       5. Keju                                                         |\n");
        koor(40,44);printf("|       6. Daging                                                       |\n");
        koor(40,45);printf("|                                                                       |\n");
        koor(40,46);printf("| Dapat disimpulkan bahwa,                                              |\n");
        koor(40,47);printf("| Anda harus mengonsumsi makanan dengan kadar protein dan               |\n");
        koor(40,48);printf("| karbohidrat yang seimbang.                                            |\n");
        koor(40,49);printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 3){
        koor(40,34);printf("+-----------------------------------------------------------------------+\n");
        koor(40,35);printf("| Anda sehat                                                            |\n");
        koor(40,36);printf("+-----------------------------------------------------------------------+\n");
        koor(40,37);printf("| Anda bebas mengonsumsi makanan apa saja.                              |\n");
        koor(40,38);printf("| Dengan catatan, gizi dalam setiap makanan yang anda                   |\n");
        koor(40,39);printf("| konsumsi seimbang dan tidak berlebihan.                               |\n");
        koor(40,40);printf("|                                                                       |\n");
        koor(40,41);printf("| Anda harus tetap memerhatikan 4 Sehat 5 Sempurna setiap kali          |\n");
        koor(40,42);printf("| anda mengonsumsi makanan agar tidak kekurangan maupun kelebihan gizi  |\n");
        koor(40,43);printf("+-----------------------------------------------------------------------+\n");
        }
     else if(bmi == 4){
        koor(40,34);printf("+-----------------------------------------------------------------------+\n");
        koor(40,35);printf("|Anda kelebihan gizi                                                    |\n");
        koor(40,36);printf("+-----------------------------------------------------------------------+\n");
        koor(40,37);printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        koor(40,38);printf("|                                                                       |\n");
        koor(40,39);printf("|       1. Oatmeal                                                      |\n");
        koor(40,40);printf("|       2. Apel                                                         |\n");
        koor(40,41);printf("|       3. Putih Telur                                                  |\n");
        koor(40,42);printf("|       4. Brokoli                                                      |\n");
        koor(40,43);printf("|       5. Daging Ikan                                                  |\n");
        koor(40,44);printf("|       6. Camilan Rendah Kalori                                        |\n");
        koor(40,45);printf("|                                                                       |\n");
        koor(40,46);printf("| Dapat disimpulkan bahwa,                                              |\n");
        koor(40,47);printf("| Anda harus menghindari makanan berlemak dan berkadar gula tinggi      |\n");
        koor(40,48);printf("| Anda juga harus mengurangi konsumsi garam berlebih, selain itu        |\n");
        koor(40,49);printf("| anda perlu mengatur porsi makan anda dan rajin berolahraga            |\n");
        koor(40,50);printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 5){
        koor(40,34);printf("+-----------------------------------------------------------------------+\n");
        koor(40,35);printf("|Anda sangat kelebihan gizi                                             |\n");
        koor(40,36);printf("+-----------------------------------------------------------------------+\n");
        koor(40,37);printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        koor(40,38);printf("|  Makanan dengan kadar kalori yang rendah                              |\n");
        koor(40,39);printf("|     Contohnya:                                                        |\n");
        koor(40,40);printf("|       1. Tomat Ceri                                                   |\n");
        koor(40,41);printf("|       2. Semangka                                                     |\n");
        koor(40,42);printf("|       3. Mentimun                                                     |\n");
        koor(40,43);printf("|       4. Bayam                                                        |\n");
        koor(40,44);printf("|       5. Daun Bawang                                                  |\n");
        koor(40,45);printf("|       6. Kembang Kol                                                  |\n");
        koor(40,46);printf("|                                                                       |\n");
        koor(40,47);printf("| Dapat disimpulkan bahwa,                                              |\n");
        koor(40,48);printf("| Anda harus mengonsumsi makanan dengan kadar kalori yang rendah        |\n");
        koor(40,49);printf("| Anda juga harus mengurangi konsumsi                                   |\n");
        koor(40,50);printf("| makanan yang berminyak dan berlemak                                   |\n");
        koor(40,51);printf("| Anda perlu mengetahui kadar gizi tiap makanan yang anda santap        |\n");
        koor(40,52);printf("+-----------------------------------------------------------------------+\n");
        }

    koor(40,53);printf("+-----------------------------------------------------------------------+\n");
    koor(40,54);printf("|                                                                       |\n");
    koor(40,55);printf("+-----------------------------------------------------------------------+\n");
    koor(40,56);printf("|                              Terima kasih                             |\n");
    koor(40,57);printf("|                        Semoga anda sehat selalu                       |\n");
    koor(40,58);printf("+-----------------------------------------------------------------------+\n");
    printf("\n");

return 0;
}

void Rekomendasi_makanan (){

    if(bmi==1){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||   Yang Sangat Kekurangan Gizi   ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Kentang, Nasi, Susu, Kacang     |\n");
    fprintf(fpoin,"| Makanan     |  Alpukat, Daging Merah           |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus mengonsumsi makanan   |\n");
    fprintf(fpoin,"|             | dengan kadar protein dan         |\n");
    fprintf(fpoin,"|             | karbohidrat yang tinggi.         |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    if(bmi==2){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||      Yang Kekurangan Gizi       ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Roti, Nasi, Tempe, Tahu         |\n");
    fprintf(fpoin,"| Makanan     |  Keju, Daging                    |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus mengonsumsi makanan   |\n");
    fprintf(fpoin,"|             | dengan kadar protein dan         |\n");
    fprintf(fpoin,"|             | karbohidrat yang seimbang.       |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    if(bmi==3){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||            Yang Sehat           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Anda bebas mengonsumsi makanan  |\n");
    fprintf(fpoin,"| Makanan     |  apa saja. Dengan catatan        |\n");
    fprintf(fpoin,"|             |  gizi dalam setiap makanan yang  |\n");
    fprintf(fpoin,"|             |  anda konsumsi seimbang dan      |\n");
    fprintf(fpoin,"|             |  tidak berlebihan.               |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus tetap memerhatikan    |\n");
    fprintf(fpoin,"|             | 4 sehat 5 sempurna setiap kali   |\n");
    fprintf(fpoin,"|             | anda mengonsumsi makanan agar    |\n");
    fprintf(fpoin,"|             | tidak kekurangan maupun          |\n");
    fprintf(fpoin,"|             | kelebihan gizi.                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    if(bmi==4){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||       Yang Kelebihan Gizi       ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Oatmeal, Apel, Putih Telur      |\n");
    fprintf(fpoin,"| Makanan     |  Brokoli, Daging Ikan, Cemilan   |\n");
    fprintf(fpoin,"|             |  Rendah Kalori                   |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus menghindari makanan   |\n");
    fprintf(fpoin,"|             | berlemak, berkadar gula tinggi,  |\n");
    fprintf(fpoin,"|             | dan kadar garam tinggi. Selain   |\n");
    fprintf(fpoin,"|             | itu, anda juga harus mengatur    |\n");
    fprintf(fpoin,"|             | porsi makan anda agar tidak      |\n");
    fprintf(fpoin,"|             | berlebih dan rajin olahraga.     |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    if(bmi==5){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||   Yang Sangat Kelebihan Gizi    ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Tomat Ceri, Semangka, Bayam     |\n");
    fprintf(fpoin,"| Makanan     |  Mentimun, Daun Bawang,          |\n");
    fprintf(fpoin,"|             |  Kembang Kol                     |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus mengonsumsi makanan   |\n");
    fprintf(fpoin,"|             | dengan kadar kalori yang rendah. |\n");
    fprintf(fpoin,"|             | Anda juga harus mengurangi       |\n");
    fprintf(fpoin,"|             | konsumsi makanan yang berminyak  |\n");
    fprintf(fpoin,"|             | dan berlemak. Anda perlu         |\n");
    fprintf(fpoin,"|             | mengetahui kadar gizi tiap       |\n");
    fprintf(fpoin,"|             | makanan yang anda santap         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
}

void koor(int x , int y)
{
    HANDLE h;
    COORD c;
    c.X = x;
    c.Y = y;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}
void bersih()
{
    system("cls");
}

void delay(int sec)
{
    Sleep(sec);
}

void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

void Loading(){

    bersih();
    koor(40,9);
    printf("||===============================||\n");
    koor(40,10);
    printf("||    Rekomendasi Menu Sehat     ||\n");
    koor(40,11);
    printf("||===============================||\n");
    koor(40,14);
    for(int i=1 ; i<=34 ; i++){
        setcolor(7);
        printf("%c",219);
        Sleep(60); } }
void box(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		koor(i,b);printf("\xcd");
		koor(i,d);printf("\xcd");
	}
	for(j=b;j<d;j++)
	{
		koor(a,j);printf("\xba");
		koor(c,j);printf("\xba");
	}
		koor(a,b);printf("\xc9");
		koor(c,b);printf("\xbb");
		koor(a,d);printf("\xc8");
		koor(c,d);printf("\xbc");
}

void box1(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		koor(i,b);printf("%c",16);
		koor(i,d);printf("%c",16);
	}
	for(j=b;j<d;j++)
	{
		koor(a,j);printf("%c",63);
		koor(c,j);printf("%c",63);
	}
		koor(a,b);printf("%c",218);
		koor(c,b);printf("%c",191);
		koor(a,d);printf("%c",192);
		koor(c,d);printf("%c",217);
}
