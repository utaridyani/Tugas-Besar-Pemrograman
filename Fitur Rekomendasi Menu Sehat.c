#include<stdio.h>
#include<conio.h>
#include<windows.h>

int bmi;

void koor(int x , int y);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void Loading();

int main(){
  Loading();
  utama();
}

void utama(){
bersih();

    printf("\t\t||=================================||\n");
    printf("\t\t||         Rekomendasi Menu        ||\n");
    printf("\t\t||          Makanan Sehat          ||\n");
    printf("\t\t||=================================||\n");

    printf("+-----------------------------------------------------------------------+\n");
    printf("|                                                                       |\n");
    printf("+-----------------------------------------------------------------------+\n");
    printf("|Tentukan range BMI anda :                                              |\n");
    printf("|                                                                       |\n");
    printf("|       1. BMI < 17.0  (Sangat Kurus)                                   |\n");
    printf("|       2. 17.0 - 18.4 (Kurus)                                          |\n");
    printf("|       3. 18.5 - 25.0 (Normal)                                         |\n");
    printf("|       4. 25.1 - 27.0 (Gemuk)                                          |\n");
    printf("|       5. 27.0 < BMI  (Sangat Gemuk)                                   |\n");
    printf("|                                                                       |\n");
    printf("| Input nomor sesuai dengan BMI anda                                    |\n");
    printf("+-----------------------------------------------------------------------+\n");
    printf("Jawaban anda : ");
    scanf ("%d",&bmi);
    printf("\n");
    printf("\n");
    printf("\n");

    if(bmi == 1){
        printf("+-----------------------------------------------------------------------+\n");
        printf("|                                                                       |\n");
        printf("+-----------------------------------------------------------------------+\n");
        printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        printf("|                                                                       |\n");
        printf("|       1. Kentang                                                      |\n");
        printf("|       2. Nasi                                                         |\n");
        printf("|       3. Susu                                                         |\n");
        printf("|       4. Kacang                                                       |\n");
        printf("|       5. Alpukat                                                      |\n");
        printf("|       6. Daging Merah                                                 |\n");
        printf("|                                                                       |\n");
        printf("| Dapat disimpulkan bahwa,                                              |\n");
        printf("| Anda harus mengonsumsi makanan dengan kadar protein dan               |\n");
        printf("| karbohidrat yang tinggi.                                              |\n");
        printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 2){
        printf("+-----------------------------------------------------------------------+\n");
        printf("|                                                                       |\n");
        printf("+-----------------------------------------------------------------------+\n");
        printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        printf("|                                                                       |\n");
        printf("|       1. Roti                                                         |\n");
        printf("|       2. Nasi                                                         |\n");
        printf("|       3. Tempe                                                        |\n");
        printf("|       4. Tahu                                                         |\n");
        printf("|       5. Keju                                                         |\n");
        printf("|       6. Daging                                                       |\n");
        printf("|                                                                       |\n");
        printf("| Dapat disimpulkan bahwa,                                              |\n");
        printf("| Anda harus mengonsumsi makanan dengan kadar protein dan               |\n");
        printf("| karbohidrat yang seimbang.                                            |\n");
        printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 3){
        printf("+-----------------------------------------------------------------------+\n");
        printf("|                                                                       |\n");
        printf("+-----------------------------------------------------------------------+\n");
        printf("| Anda bebas mengonsumsi makanan apa saja.                              |\n");
        printf("| Dengan catatan, gizi dalam setiap makanan yang anda                   |\n");
        printf("| konsumsi seimbang dan tidak berlebihan.                               |\n");
        printf("|                                                                       |\n");
        printf("| Anda harus tetap memerhatikan 4 Sehat 5 Sempurna setiap kali          |\n");
        printf("| anda mengonsumsi makanan agar tidak kekurangan maupun kelebihan gizi  |\n");
        printf("+-----------------------------------------------------------------------+\n");
        }
     else if(bmi == 4){
        printf("+-----------------------------------------------------------------------+\n");
        printf("|                                                                       |\n");
        printf("+-----------------------------------------------------------------------+\n");
        printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        printf("|                                                                       |\n");
        printf("|       1. Oatmeal                                                      |\n");
        printf("|       2. Apel                                                         |\n");
        printf("|       3. Putih Telur                                                  |\n");
        printf("|       4. Brokoli                                                      |\n");
        printf("|       5. Daging Ikan                                                  |\n");
        printf("|       6. Camilan Rendah Kalori                                        |\n");
        printf("|                                                                       |\n");
        printf("| Dapat disimpulkan bahwa,                                              |\n");
        printf("| Anda harus menghindari makanan berlemak dan berkadar gula tinggi      |\n");
        printf("| Anda juga harus mengurangi konsumsi garam berlebih, selain itu        |\n");
        printf("| anda perlu mengatur porsi makan anda dan rajin berolahraga            |\n");
        printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 5){
        printf("+-----------------------------------------------------------------------+\n");
        printf("|                                                                       |\n");
        printf("+-----------------------------------------------------------------------+\n");
        printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        printf("|  Makanan dengan kadar kalori yang rendah                              |\n");
        printf("|     Contohnya:                                                        |\n");
        printf("|       1. Tomat Ceri                                                   |\n");
        printf("|       2. Semangka                                                     |\n");
        printf("|       3. Mentimun                                                     |\n");
        printf("|       4. Bayam                                                        |\n");
        printf("|       5. Daun Bawang                                                  |\n");
        printf("|       6. Kembang Kol                                                  |\n");
        printf("|                                                                       |\n");
        printf("| Dapat disimpulkan bahwa,                                              |\n");
        printf("| Anda harus mengonsumsi makanan dengan kadar kalori yang rendah        |\n");
        printf("| Anda juga harus mengurangi konsumsi                                   |\n");
        printf("| makanan yang berminyak dan berlemak                                   |\n");
        printf("| Anda perlu mengetahui kadar gizi tiap makanan yang anda santap        |\n");
        printf("+-----------------------------------------------------------------------+\n");
        }

    printf("+-----------------------------------------------------------------------+\n");
    printf("|                                                                       |\n");
    printf("+-----------------------------------------------------------------------+\n");
    printf("|                              Terima kasih                             |\n");
    printf("|                        Semoga anda sehat selalu                       |\n");
    printf("+-----------------------------------------------------------------------+\n");

return 0;
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
