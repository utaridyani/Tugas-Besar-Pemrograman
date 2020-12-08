#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

/* Program Perhitungan Berat Badan Ideal oleh*/

/* Deklarasi variabel global pada program perhitungan berat badan*/

double height, mess; /* Variabel untuk memasukkan nilai
                        height = untuk memasukkan nilai tinggi badan
                        mess   = untuk memasukkan nilai berat badan*/
double BBL;          /* Variabel untuk memasukkan nilai
                        BBL    = untuk memasukkan nilai BBL (Berat Bayi Lahir)*/
double age1;         /* Variabel untuk memasukkan nilai
                        age1   = untuk memasukkan nilai usia*/
double hasil;        /* Variabel untuk memasukkan nilai
                        hasil  = untuk memasukkan nilai pada perhitungan berat badan ideal*/
int qna1,qna2,gender;/* Variabel untuk memasukkan nilai
                        qna1   = untuk memasukkan dan menyimpan nilai golongan pada fungsi Main_Menu_BMI()
                        qna2   = untuk memasukkan dan menyimpan nilai penentuan pada pencetakan file pada fungsi up_or_down()
                        gender = untuk memasukkan dan menyimpan nilai penentuan jenis kelamin pada fungsi ask1()*/

double bulan;        /* Variabel untuk memasukkan nilai
                        bulan  = untuk memasukkan dan menyimpan nilai bulan pada fungsi ask1()*/


void Main_Menu_BMI();   /* Fungsi tampilan awal program perhitungan berat badan ideal*/
void ask1();            /* Fungsi yang digunakan untuk menampilkan opsi golongan usia dan memasukkan nilai bulan, BBL, height, mess, age1*/
double Calculate_BMI(); /* Fungsi yang digunakan untuk melakukan proses aritmatika setelah fungsi ask1() berhasil dieksekusi*/
double saran();         /* Fungsi yang digunakan untuk melakukan proses aritmatika dan penentuan seberapa
                           besar pengurangan atau penambahan dari berat badan yang telah berhasil diinputkan pada fungsi ask1()
                           dan juga setelah melalui proses aritmatika pada fungsi Calculate_BMI()*/
void up_or_down();      /* Fungsi yang digunakan untuk memasukkan dan menyimpan apakah user mengalami
                           kekurangan, kelebihan atau kondisi normal setelah fungsi ask1() berhasil tercetak dilayar*/
void Final_BMI();       /* Fungsi yang digunakan dalam memeriksa hasil aritmatika pada fungsi Calculate_BMI(),
                           kemudian mencocokkannya dari berbagai kondisi yang telah ditentukan*/
void result_BMI();      /* Fungsi yang digunakan untuk mencetak file berupa .txt, yang berisi hasil perhitungan, serta keterangan*/

/* Fungsi yang di gunakan dalam pembuatan animasi
preloader (proses loading) pada program ini oleh Utari*/
void koor(int x , int y);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void Loading();


int main(){

    Loading();
    Main_Menu_BMI();
    up_or_down();
    result_BMI();
}

void Main_Menu_BMI(){

   bersih();
   printf("+------------------------------------------------+\n");
   printf("|     ||=================================||      |\n");
   printf("|     || Program Perhitungan Badan Ideal ||      |\n");
   printf("|     ||          DEMO Version           ||      |\n");
   printf("|     ||=================================||      |\n");
   printf("+--------------------------------+---------------+\n");
   printf("|                                |               |\n");
   printf("|        Selamat datang          |               |\n");
   printf("|                                |               |\n");
   printf("|  Program ini dapat  membantu   |               |\n");
   printf("|  anda dalam menentukan tubuh   |               |\n");
   printf("|  yang ideal pada bayi,balita   |               |\n");
   printf("|  ,remaja,hingga dewasa.        |               |\n");
   printf("|                                |               |\n");
   printf("+--------------------------------+               |\n");
   printf("|   Tentukan opsi di bawah ini   |               |\n");
   printf("+---+-----------+----------------+               |\n");
   printf("| No|  Kategori |   Rentan Usia  |               |\n");
   printf("+---+-----------+----------------+               |\n");
   printf("| 1 |   Bayi    |   0-6   bulan  |               |\n");
   printf("+---+-----------+----------------+               |\n");
   printf("| 2 |   Bayi    |   7-12  bulan  |               |\n");
   printf("+---+-----------+----------------+               |\n");
   printf("| 3 | Anak-anak |   1-10  tahun  |               |\n");
   printf("+---+-----------+----------------+               |\n");
   printf("| 4 |  Remaja   |   10-18 tahun  |               |\n");
   printf("+---+-----------+----------------+               |\n");
   printf("| 5 |  Dewasa   |   19-60 tahun  |               |\n");
   printf("+---+-----------+----------------+---------------+\n");
   printf("\nJawaban anda : ");
   scanf("%d", &qna1);
   ask1();

}
void ask1(){


   switch(qna1){
        case 1:
        printf("+-+-----------------------+-+\n");
        printf("| |Tentukan jenis kelamin | |\n");
        printf("+-+---------+-------------+-+\n");
        printf("|1|Laki-laki|             | |\n");
        printf("+-+---------+             | |\n");
        printf("|2|Perempuan|             | |\n");
        printf("+-+---------+-------------+-+\n");
        printf("| |Tekan                  | |\n");
        printf("| |(1) untuk laki-laki    | |\n");
        printf("| |(2) untuk perempuan    | |\n");
        printf("+-+-----------------------+-+\n");
        printf("\nJawaban anda : ");
        scanf("%d",&gender);
        printf("\nMasukkan usia dalam bulan       : ");
        scanf("%lf", &age1);
        printf("\nMasukkan BBL bayi anda dalam kg : ");
        scanf("%lf", &BBL);
        hasil = Calculate_BMI();
        printf("\nBBL anda adalah %.2lf g\n", hasil);
        Final_BMI();
        break;
        case 2:
        printf("+-+-----------------------+-+\n");
        printf("| |Tentukan jenis kelamin | |\n");
        printf("+-+---------+-------------+-+\n");
        printf("|1|Laki-laki|             | |\n");
        printf("+-+---------+             | |\n");
        printf("|2|Perempuan|             | |\n");
        printf("+-+---------+-------------+-+\n");
        printf("| |Tekan                  | |\n");
        printf("| |(1) untuk laki-laki    | |\n");
        printf("| |(2) untuk perempuan    | |\n");
        printf("+-+-----------------------+-+\n");
        printf("\nJawaban anda : ");
        scanf("%d",&gender);
        printf("\nMasukkan usia dalam bulan       : ");
        scanf("%lf", &age1);
        printf("\nMasukkan berat badan dalam  kg  : ");
        scanf("%lf", &BBL);
        hasil = Calculate_BMI();
        printf("\nBBL anda adalah %.2lf g\n", hasil);
        Final_BMI();
        break;
        case 3:
        printf("+-+-----------------------+-+\n");
        printf("| |Tentukan jenis kelamin | |\n");
        printf("+-+---------+-------------+-+\n");
        printf("|1|Laki-laki|             | |\n");
        printf("+-+---------+             | |\n");
        printf("|2|Perempuan|             | |\n");
        printf("+-+---------+-------------+-+\n");
        printf("| |Tekan                  | |\n");
        printf("| |(1) untuk laki-laki    | |\n");
        printf("| |(2) untuk perempuan    | |\n");
        printf("+-+-----------------------+-+\n");
        printf("\nJawaban anda : ");
        scanf("%d",&gender);
        printf("\nMasukkan berat badan dalam kg : ");
        scanf("%lf", &mess);
        printf("\nMasukkan usia dalam tahun     : ");
        scanf("%lf", &age1);
        printf("\nLebih berapa bulan ?\n");
        printf("Jika bulan ini tepat dengan hari ulang tahun anda maka ketikanlah 0\n");
        printf("\nJawaban anda : ");
        scanf("%lf",&bulan);
        hasil = Calculate_BMI();
        printf("\nBBL anda adalah %.2lf kg\n", hasil);
        Final_BMI();
        break;
        case 4:
        printf("\nMasukkan berat badan dalam kg   : ");
        scanf("%lf", &mess);
        printf("\nMasukkan usia dalam tahun       : ");
        scanf("%lf", &age1);
        printf("\nMasukkan tinggi badan dalam cm  : ");
        scanf("%lf", &height);
        hasil = Calculate_BMI();
        printf("\nBBI anda adalah %.2lf kg\n", hasil);
        Final_BMI();
        break;
        case 5:
        printf("\nMasukkan usia dalam tahun       : ");
        scanf("%lf", &age1);
        printf("\nMasukkan berat badan dalam kg   : ");
        scanf("%lf", &mess);
        printf("\nMasukkan tinggi badan dalam cm  : ");
        scanf("%lf", &height);
        hasil = Calculate_BMI();
        printf("\nBMI anda adalah %.2lf kg/m^2\n", hasil);
        Final_BMI();
        break;
        default:
        printf("Data yang anda masukkan salah");
        break;
    }

}
double Calculate_BMI(){

    if(qna1 == 1){
    if((age1 >= 0 && age1 <= 6) && (BBL > 0)){
        return ((age1*600) + (BBL*1000));
    }
    }
    else if(qna1 == 2){
        if((age1 >= 7 && age1 <= 12) && (age1 >= 0)){
            return (BBL*1000) + (age1*500);
        }
    }
    else if(qna1 == 3){
        if((age1 >= 1 && age1 <=10) && (bulan >= 0 && bulan <= 12)){
            if(bulan == 12){
                return (2*(age1+1)+8);
            }
            else if(bulan >= 3 || bulan <= 4){
                return (((2*(age1 + 1))+8));
            }else{
                return ((2*age1)+8);
         }
       }
    }

    else if(qna1 == 4){
        if(age1 > 10 && age1 <= 18){
            return(height - 100)-((height-100)*0.1);
        }
    }
    else if(qna1 == 5){
        if(age1 >= 19 && age1 <= 60){
            return (mess/((height/100)*(height/100)));
    }
  }

}
double saran(){

    hasil = Calculate_BMI();

    if(qna1== 1){
        if(gender == 1){
           if(age1 == 0.0){
              if(hasil < 2500){
                return 2500 - hasil;
            }
              else if(hasil > 4400){
                return hasil - 4400;
            }
        }
        else if(age1 == 1.0){
            if(hasil < 3400){
                return 3400 - hasil;
            }
            else if(hasil > 5800){
                return 5800 - hasil;
            }
        }
        else if(age1 == 2.0){
            if(hasil < 4300){
                return 4300 - hasil;
            }
            else if(hasil > 7100){
                return 7100 - hasil;
            }
        }
        else if(age1 == 3.0){
            if(hasil < 5000){
                return 5000 - hasil;
            }
            else if(hasil > 8000){
                return hasil - 8000;
            }
        }
        else if(age1 == 4.0){
            if(hasil < 5600){
                return 5600 - hasil;
            }
            else if(hasil > 8700){
                return hasil - 8700;
            }
        }
        else if(age1 == 5.0){
            if(hasil < 6000){
                return 6000 - hasil;
            }
            else if(hasil > 9300){
                return hasil - 9300;
            }
        }
        else if(age1 == 6.0){
            if(hasil < 6400){
                return 6400 - hasil;
            }
            else if(hasil > 9800){
                return hasil - 9800;
            }
        }
    }
    if(gender == 2){
        if(age1 == 0.0){
              if(hasil < 2400){
                return 2400 - hasil;
            }
              else if(hasil > 4200){
                return hasil - 4200;
            }
        }
        else if(age1 == 1.0){
            if(hasil < 3200){
                return 3200 - hasil;
            }
            else if(hasil > 5500){
                return 5500 - hasil;
            }
        }
        else if(age1 == 2.0){
            if(hasil < 3900){
                return 3900 - hasil;
            }
            else if(hasil > 6600){
                return 6600 - hasil;
            }
        }
        else if(age1 == 3.0){
            if(hasil < 4500){
                return 4500 - hasil;
            }
            else if(hasil > 7500){
                return hasil - 7500;
            }
        }
        else if(age1 == 4.0){
            if(hasil < 5000){
                return 5000 - hasil;
            }
            else if(hasil > 8200){
                return hasil - 8200;
            }
        }
        else if(age1 == 5.0){
            if(hasil < 5400){
                return 5400 - hasil;
            }
            else if(hasil > 8800){
                return hasil - 8800;
            }
        }
        else if(age1 == 6.0){
            if(hasil < 5700){
                return 5700 - hasil;
            }
            else if(hasil > 9300){
                return hasil - 9300;
            }
        }
    }
   }
   else if(qna1 == 2){
        if(gender == 1){
           if(age1 == 7.0){
              if(hasil < 6700){
                return 6700 - hasil;
            }
              else if(hasil > 10300){
                return hasil - 10300;
            }
        }
        else if(age1 == 8.0){
            if(hasil < 6900){
                return 6900 - hasil;
            }
            else if(hasil > 10700){
                return 10700 - hasil;
            }
        }
        else if(age1 == 9.0){
            if(hasil < 7100){
                return 7100 - hasil;
            }
            else if(hasil > 11000){
                return 11000 - hasil;
            }
        }
        else if(age1 == 10.0){
            if(hasil < 7400){
                return 7400 - hasil;
            }
            else if(hasil > 11400){
                return hasil - 11400;
            }
        }
        else if(age1 == 11.0){
            if(hasil < 7600){
                return 5600 - hasil;
            }
            else if(hasil > 11700){
                return hasil - 11700;
            }
        }
        else if(age1 == 12.0){
            if(hasil < 7700){
                return 77000 - hasil;
            }
            else if(hasil > 12000){
                return hasil - 12000;
            }
         }

      }
      else if(gender == 2){
        if(age1 == 7.0){
              if(hasil < 6000){
                return 6000 - hasil;
            }
              else if(hasil > 9800){
                return hasil - 9800;
            }
        }
        else if(age1 == 8.0){
            if(hasil < 6300){
                return 6300 - hasil;
            }
            else if(hasil > 10200){
                return 10200 - hasil;
            }
        }
        else if(age1 == 9.0){
            if(hasil < 6500){
                return 6500 - hasil;
            }
            else if(hasil > 10500){
                return 10500 - hasil;
            }
        }
        else if(age1 == 10.0){
            if(hasil < 6700){
                return 6700 - hasil;
            }
            else if(hasil > 10900){
                return hasil - 10900;
            }
        }
        else if(age1 == 11.0){
            if(hasil < 6900){
                return 6900 - hasil;
            }
            else if(hasil > 11200){
                return hasil - 11200;
            }
        }
        else if(age1 == 12.0){
            if(hasil < 7000){
                return 7000 - hasil;
            }
            else if(hasil > 10500){
                return hasil - 10500;
            }
         }
      }
   }
   else if(qna1 == 3 || qna1 == 4){

        if(hasil > mess){
            return hasil - mess;
        }
        else if(hasil < mess){
            return mess - hasil;
        }
   }
   else if(qna1 == 5){
        if(hasil < 18.5){
            return 18.5 - hasil;
        }
        else if(hasil > 24.9){
            return hasil - 24.9;
        }

   }

}

void up_or_down(){

    printf("\n\n+-----------------------------------------+\n");
    printf("|  Cetak pada file dengan menekan angka   |\n");
    printf("+-------+---------------------------------+\n");
    printf("| Angka |          Keterangan             |\n");
    printf("+-------+---------------------------------+\n");
    printf("|   1   | untuk kategori kekurangan gizi  |\n");
    printf("|       | atau kekurangan berat badan     |\n");
    printf("+-------+---------------------------------+\n");
    printf("|   0   | untuk kategori gizi normal      |\n");
    printf("|       | atau berat badan ideal          |\n");
    printf("+-------+---------------------------------+\n");
    printf("|   2   | untuk kategori kelebihan gizi   |\n");
    printf("|       | kekurangan berat badan          |\n");
    printf("+-------+---------------------------------+\n");
    printf("\nJawaban anda : ");
    scanf ("%d",&qna2);
}


void Final_BMI(){

    hasil = Calculate_BMI();

    if(qna1 == 1){
    if((gender == 1 && age1 == 0.0) && (hasil < 2100)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 0.0) && (hasil >= 2100 && hasil < 2500)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 0.0) && (hasil >= 2500 && hasil < 4400)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 0.0) && (hasil >= 4400)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 1.0) && (hasil < 2900)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 1.0) && (hasil >= 2900 && hasil < 3400)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 1.0) && (hasil >= 3400 && hasil < 5800)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 1.0) && (hasil >= 5800)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 2.0) && (hasil < 3800)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 2.0) && (hasil >= 3800 && hasil < 4300)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 2.0) && (hasil >= 4300 && hasil < 7100)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 2.0) && (hasil >= 7100)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 3.0) && (hasil < 4400)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 3.0) && (hasil >= 4400 && hasil < 5000)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 3.0) && (hasil >= 5000 && hasil < 8000)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 3.0) && (hasil >= 8000)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 4.0) && (hasil < 4900)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 4.0) && (hasil >= 4900 && hasil < 5600)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 4.0) && (hasil >= 5600 && hasil < 8700)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 4.0) && (hasil >= 8700)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 5.0) && (hasil < 5300)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 5.0) && (hasil >= 5300 && hasil < 6000)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 5.0) && (hasil >= 6000 && hasil < 9300)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 5.0) && (hasil >= 9300)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 6.0) && (hasil < 5700)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 6.0) && (hasil >= 5700 && hasil < 6400)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 6.0) && (hasil >= 6400 && hasil < 9800)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 6.0) && (hasil >= 9800)){
        printf("\nKategori gizi lebih");
    }
    if((gender == 2 && age1 == 0.0) && (hasil < 2000)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 0.0) && (hasil >= 2000 && hasil < 2400)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 0.0) && (hasil >= 2400 && hasil < 4200)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 0.0) && (hasil >= 4200)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 1.0) && (hasil < 2700)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 1.0) && (hasil >= 2700 && hasil < 3200)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 1.0) && (hasil >= 3200 && hasil < 5500)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 1.0) && (hasil >= 5500)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 2.0) && (hasil < 3400)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 2.0) && (hasil >= 3400 && hasil < 3900)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 2.0) && (hasil >= 3900 && hasil < 6600)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 2.0) && (hasil >= 6600)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 3.0) && (hasil < 4000)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 3.0) && (hasil >= 4000 && hasil < 4500)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 3.0) && (hasil >= 4500 && hasil < 7500)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 3.0) && (hasil >= 7500)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 4.0) && (hasil < 4400)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 4.0) && (hasil >= 4400 && hasil < 5000)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 4.0) && (hasil >= 5000 && hasil < 8200)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 4.0) && (hasil >= 8200)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 5.0) && (hasil < 4800)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 5.0) && (hasil >= 4800 && hasil < 5400)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 5.0) && (hasil >= 5400 && hasil < 8800)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 5.0) && (hasil >= 8800)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 6.0) && (hasil < 5100)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 6.0) && (hasil >= 5100 && hasil < 5700)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 6.0) && (hasil >= 5700 && hasil < 9300)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 6.0) && (hasil >= 9300)){
        printf("\nKategori gizi lebih");
    }
  }
    else if(qna1 == 2){
    if((gender == 1 && age1 == 7.0) && (hasil < 5900)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 7.0) && (hasil >= 5900 && hasil < 6700)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 7.0) && (hasil >= 6700 && hasil < 10300)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 7.0) && (hasil >= 10300)){
        printf("\nKategori gizi lebih");
    }
    else if((gender == 1 && age1 == 8.0) && (hasil < 6200)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 8.0) && (hasil >= 6200 && hasil < 6900)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 8.0) && (hasil >= 6900 && hasil < 10700)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 8.0) && (hasil >= 10700)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 9.0) && (hasil < 6400)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 9.0) && (hasil >= 6400 && hasil < 7100)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 9.0) && (hasil >= 7100 && hasil < 11000)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 9.0) && (hasil >= 11000)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 10.0) && (hasil < 6600)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 10.0) && (hasil >= 6600 && hasil < 7400)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 10.0) && (hasil >= 7400 && hasil < 11400)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 10.0) && (hasil >= 11400)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 11.0) && (hasil < 6800)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 11.0) && (hasil >= 6800 && hasil < 7600)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 11.0) && (hasil >= 7600 && hasil < 11700)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 11.0) && (hasil >= 11700)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 12.0) && (hasil < 6900)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 6900 && hasil < 7700)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 7700 && hasil < 12000)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 12000)){
        printf("\nKategori gizi lebih");
    }
    else if((gender == 2 && age1 == 7.0) && (hasil < 5300)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 7.0) && (hasil >= 5300 && hasil < 6000)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 7.0) && (hasil >= 6000 && hasil < 9800)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 7.0) && (hasil >= 9800)){
        printf("\nKategori gizi lebih");
    }
    else if((gender == 2 && age1 == 8.0) && (hasil < 5600)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 8.0) && (hasil >= 5600 && hasil < 6300)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 8.0) && (hasil >= 6300 && hasil < 10200)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 8.0) && (hasil >= 10200)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 9.0) && (hasil < 5800)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 9.0) && (hasil >= 5800 && hasil < 6500)){
        printf("n\Kategori gizi kurang");
    }else if((gender == 2 && age1 == 9.0) && (hasil >= 6500 && hasil < 10500)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 9.0) && (hasil >= 10500)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 10.0) && (hasil < 5900)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 10.0) && (hasil >= 5900 && hasil < 6700)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 10.0) && (hasil >= 6700 && hasil < 10900)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 10.0) && (hasil >= 10900)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 2 && age1 == 11.0) && (hasil < 6100)){
        printf("\nKategori gizi buruk");
    }else if((gender == 2 && age1 == 11.0) && (hasil >= 6100 && hasil < 6900)){
        printf("\nKategori gizi kurang");
    }else if((gender == 2 && age1 == 11.0) && (hasil >= 6900 && hasil < 11200)){
        printf("\nKategori gizi normal");
    }else if((gender == 2 && age1 == 11.0) && (hasil >= 11200)){
        printf("\nKategori gizi lebih");
    }
     else if((gender == 1 && age1 == 12.0) && (hasil < 6300)){
        printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 6300 && hasil < 7000)){
        printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 7000 && hasil < 11500)){
        printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 11500)){
        printf("\nKategori gizi lebih");
    }
  }
    else if(qna1== 3 || qna1 == 4){
    if(mess < hasil){
        printf("\nKategori berat badan kurang");
    }else if(mess > hasil){
        printf("\nKategori berat badan berlebih");
    }else if(mess == hasil){
        printf("\nKategori berat badan ideal");
    }
   }
    else if(qna1 == 5){
    if(hasil < 18.5){
        printf("\nBerat badan kurang");
    }else if(hasil >= 18.5 && hasil <= 24.9){
        printf("\nBerat badan normal");
    }else if(hasil >= 25.0 && hasil <= 29.9){
        printf("\nBerat badan berlebih");
    }else if(hasil >= 30.0 && hasil <= 34.9){
        printf("\nDiabetes tingkat I");
    }else if(hasil >= 35.0 && hasil <= 39.9){
        printf("\nDiabetes tingkat II");
    }else if(hasil >= 40.0){
        printf("\nDiabetes tingkat III");
    }
  }

}


void result_BMI(){

    hasil  = Calculate_BMI();
    double hasil_saran = saran();

    if(qna1 == 1 || qna1 == 2){
    if (qna2 == 1){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf g                           |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya peningkatan berat  |\n");
    fprintf(fpoin,"|             | badan sekitar %.2lf g            |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
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
    else if(qna2 == 2){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf g                           |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya penurunan berat    |\n");
    fprintf(fpoin,"|             | badan sekitar %.2lf g            |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
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
    else if(qna2 == 0){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf g                           |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Berat badan dinyatakan normal    |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
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
  }

    else if (qna1 == 3 || qna1 == 4){
    if (qna2 == 1){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf kg                          |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya peningkatan berat  |\n");
    fprintf(fpoin,"|             | badan sekitar %.2lf kg           |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
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
    else if(qna2 == 2){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf kg                          |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya penurunan berat    |\n");
    fprintf(fpoin,"|             | badan sekitar %.2lf kg           |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
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
    else if(qna2 == 0){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf kg                          |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Berat badan dinyatakan normal    |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
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
 }
    else if(qna1 == 5){
    if (qna2 == 1){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf kg/m^2                      |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya peningkatan berat  |\n");
    fprintf(fpoin,"|             | badan sekitar %.2lf kg/m^2       |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
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
    else if(qna2 == 2){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf kg/m^2                      |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya penurunan berat    |\n");
    fprintf(fpoin,"|             | badan sekitar %.2lf kg/m^2       |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
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
    else if(qna2 == 0){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.2lf kg/m^2                      |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Berat badan dinyatakan normal    |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
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
    printf("||    Perhitungan Badan Ideal    ||\n");
    koor(40,11);
    printf("||===============================||\n");
    koor(40,14);
    for(int i=1 ; i<=34 ; i++){
        setcolor(7);
        printf("%c",219);
        Sleep(60); } }

