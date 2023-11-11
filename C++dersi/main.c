#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*int main() {
    int sayi;
    int toplamTek = 0; // Tek sayıların toplamı
    int toplamCift = 0; // Çift sayıların toplamı
    int tekSayilar = 0; // Tek sayıların adedi
    int ciftSayilar = 0; // Çift sayıların adedi
    // Kullanıcıdan 10 tane sayı alın ve toplamı hesaplayın
    for (int i = 1; i <= 10; i++) {
        printf("Sayı %d'i girin: ", i);
        scanf("%d", &sayi);

        if (sayi % 2 == 0) {
            toplamCift += sayi; // Çift sayıların toplamını güncelle
            ciftSayilar++;
        } else {
            toplamTek += sayi; // Tek sayıların toplamını güncelle
            tekSayilar++;
        }
    }
    // Ortalamaları hesaplayın
    double ortalamaTek = (double)toplamTek / tekSayilar;
    double ortalamaCift = (double)toplamCift / ciftSayilar;
    // Sonuçları ekrana yazdırın
    printf("Tek sayıların ortalaması: %.2lf\n", ortalamaTek);
    printf("Çift sayıların ortalaması: %.2lf\n", ortalamaCift);
    return 0;
}*/






/*Klavyeden girilen 4 haneli tamsayıyı çözümleyen C programını yazın
int main() {
    int sayi, binlik, yuzluk, onluk, birlik;

    // Kullanıcıdan 4 haneli bir tamsayı alın
    printf("4 haneli bir tamsayı girin: ");
    scanf("%d", &sayi);

    // Binlik, yüzlük, onluk ve birlik basamakları çözümleyin
    binlik = sayi / 1000;
    yuzluk = (sayi / 100) %10;
    onluk = (sayi / 10) %10;
    birlik = sayi % 10;

    // Sonucu ekrana yazdırın
    printf("%d tane binlik\n", binlik);
    printf("%d tane yüzlük\n", yuzluk);
    printf("%d tane onluk\n", onluk);
    printf("%d tane birlik\n", birlik);

    return 0;
}*/


/*Klavyeden girilen sayı kadar, klavyeden girilen sayıların ortalaması bulup ekrana yazdıran C programını yazın
int main() {
    int sayi;
    double ortalama;
    int toplam = 0;
    int sayıAdeti;
    printf("kaç sayı girceksin: ");
    scanf("%d", &sayıAdeti);
    for(int i = 1; i <= sayıAdeti; i++) {
        printf( "sayı %d i girin: ", i);
        scanf("%d", &sayi);
        toplam = toplam + sayi;
    }
    if (sayıAdeti > 0 )
    {
        double ortalama = (double)toplam / sayıAdeti;
        printf("ortalaması: %lf\n", ortalama);
    }
        else
        {
            printf("hiç sayı girilmedi. \n");
        }
}*/


/*Klavyeden girilen 2 değer arasındaki 5’e bölünebilen sayıların toplamını bulan Cprogramını yazın
int main() {
    int sayi1,sayi2;
    int toplam = 0;
    printf("bir sayı gir: ");
    scanf("%d", &sayi1);
    printf("bir sayı gir: ");
    scanf("%d", &sayi2);
    for (int i = sayi1; i <= sayi2; i++)
    {
        if (i %5 == 0)
        {
            toplam = toplam + i;
        }
        
    }
    printf("Klavyeden girilen 2 değer arasındaki 5’e bölünebilen sayıların toplamı= %d\n", toplam);
}*/

/*Girilen sayının asal olup olmaması durumu
int main() {
    int sayi;
    int asal = 1; // Varsayılan olarak sayıyı asal olarak kabul ediyoruz

    // Kullanıcıdan bir sayı girişi alın
    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    // Sayının 2'den küçük veya negatif olması durumunda asal değil
    if (sayi <= 1) {
        asal = 0;
    } else {
        for (int i = 2; i * i <= sayi; i++) {
            if (sayi % i == 0) {
                asal = 0; // Sayı i'ye bölünebiliyorsa asal değil
                break;
            }
        }
    }
    // Sonucu ekrana yazdırın
    if (asal) {
        printf("%d bir asal sayıdır.\n", sayi);
    } else {
        printf("%d bir asal sayı değildir.\n", sayi);
    }
    return 0;
}*/


/*Klavyeden girilen 2 değer arasındaki çift sayıların toplamını hesaplayan C programını for döngüsü kullanarak yaz
int main() {
    int sayi1, sayi2, toplam;
    printf("başlangıcı gir: ");
    scanf("%d", &sayi1);
    printf("bitişi gir: ");
    scanf("%d", &sayi2);
    for (int i = sayi1; i <= sayi2; i++)
    {
        if (i %2 == 0)
        {
            toplam = toplam + i;
        }
        
    }
    printf("Klavyeden girilen 2 değer arasındaki çift sayıların toplamı= %d\n", toplam);
}*/


/*klavyeden girilen isim değerini klavyeden girilen sayı kadar ekrana yazdıran C nprogramını yaz
int main() {
    char isim[5]; // İsim için yeterince büyük bir dizi tanımlayın.
    int sayi;

    Kullanıcıdan ismi ve sayıyı giriş olarak alın.
    printf("İsim giriniz: ");
    scanf("%s", isim);
    printf("Sayı giriniz: ");
    scanf("%d", &sayi);
    İsmi girilen sayı kadar ekrana yazdırın.
    for (int i = 0; i < sayi; i++) {
        printf("%s\n", isim);
    }
    return 0;
}*/


/*1-20 arasındaki sayılardan 3 ile bölünebilenleri ve bölünemeyenleri ekrana yazdıran program: 
int main() {
    int i;
    for (i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            printf("%d: ok\n", i);
        } else {
            printf("%d: x\n", i);
        }
    }
    return 0;
}*/

// int main() {
//     int i;
//     for (i = 1; i <= 20; i++) {
//         if (i % 3 == 0) {
//             printf("ok ");
//         } else {
//             printf("x ");
//         }
//     }
//     printf("\n");
//     return 0;
// }


//Klavyeden aldığı işarete göre 4 işlem yapan kodu switch case ile yaz. 
// int main() {
//     char islem;
//     double sayi1, sayi2, sonuc;

//     printf("Bir işaret (+, -, *, /) girin: ");
//     scanf(" %c", &islem);

//     printf("İki sayı girin: ");
//     scanf("%lf %lf", &sayi1, &sayi2);

//     switch (islem) {
//         case '+':
//             sonuc = sayi1 + sayi2;
//             printf("Toplama sonucu: %lf\n", sonuc);
//             break;
//         case '-':
//             sonuc = sayi1 - sayi2;
//             printf("Çıkarma sonucu: %lf\n", sonuc);
//             break;
//         case '*':
//             sonuc = sayi1 * sayi2;
//             printf("Çarpma sonucu: %lf\n", sonuc);
//             break;
//         case '/':
//             if (sayi2 != 0) {
//                 sonuc = sayi1 / sayi2;
//                 printf("Bölme sonucu: %lf\n", sonuc);
//             } else {
//                 printf("Bir sayı sıfıra bölünemez.\n");
//             }
//             break;
//         default:
//             printf("Hatalı işaret, lütfen +, -, *, / kullanın.\n");
//             break;
//     }
//     return 0;
// }




// int main() 
// {
// int sayi1,sayi2;
//     if (sayi1 > sayi2)
//     {
//         printf("%d > %d", sayi1, sayi2);
//     }
//     else if (sayi2 > sayi1)
//     {
//         printf("%d > %d", sayi2, sayi1);
//     }
//     else
//     {
//         printf("%d = %d", sayi1, sayi2);
//     }
// }


// int main() {
//     int number, binlik, yuzluk, onluk, birlik;

//     printf("Lutfen 4 haneli bir tamsayi giriniz: ");
//     scanf("%d", &number);

//     // Binlik, yüzlük, onluk ve birlik basamaklarını ayırma
//     binlik = (number / 1000) % 10;
//     yuzluk = (number / 100) % 10;
//     onluk = (number / 10) % 10;
//     birlik = number % 10;

//     // Sonuçları ekrana yazdırma
//     printf("Binlik basamak: %d\n", binlik);
//     printf("Yüzlük basamak: %d\n", yuzluk);
//     printf("Onluk basamak: %d\n", onluk);
//     printf("Birlik basamak: %d\n", birlik);

//     return 0;
// }


// int main()
// {
//     double a,b,c,alan,cevre,U;
//     printf("Birinci kenarı giriniz: ");
//     scanf("%lf",&a);
//     printf("İkinci kenarı giriniz: ");
//     scanf("%lf",&b);
//     printf("Üçüncü kenarı giriniz: ");
//     scanf("%lf",&c);
    
//     if(((a+b>c) && (abs(a-b<c))) && ((a+c>b) && (abs(a-b<c))) && ((b+c>b) && (abs(b-c<a))))
//     {
//         printf("Üçgen çizilebilir.");
        
//         if ((a==b) && (b==c) && (a==c))
//         {
//             printf("Bu bir eşkenar üçgendir.");
//         }
//         else if ((a!=b) && (a!=c) && (b!=c))
//         {
//             printf("Bu bir çeşitkenar üçgendir.");
//         }
//         else
//         {
//             printf("Bu bir ikizkenar üçgendir.");
//         }
//     }

//     else 
//     {
//         printf("Üçgen çizilemez.");
//         return 0;
//     }
//     cevre=a+b+c;
//     U=cevre/2;
//     alan=pow(U*(U-a)*(U-b)*(U-c),(0.5));
    //ya da 
    //alan=sqrt(U*((U-a)*(U-b)*(U-c)));
//     printf("Çevre:%lf\n",cevre);
//     printf("Alan:%lf\n",alan);
// }


//faktoriyel
// int main()
// {
//     int i,n,sonuc=1;
//     printf("Faktoriyeli alınacak sayıyı giriniz: ");
//     scanf("%d",&n);
//     for (i = 1; i <= n; i++)
//     {
//         sonuc=sonuc*i;
//     }
//     printf("Sonuc=%d",sonuc);
//     return 0;
// }
    
// int main()
// {
//     double i,n,sonuc=1;
//     printf("Faktoriyeli alınacak sayıyı giriniz: ");
//     scanf("%lf",&n);
//     for (i = 1; i <= n; i++)
//     {
//         sonuc=sonuc*i;
//     }
//     printf("Sonuc=%lf",sonuc);
//     return 0;
// }


//dışarıdan girilen iki sayının toplamı
// int main()
// {
//     int sayi1,sayi2,sayi3,toplam=0;
//     printf("Birinci sayıyı giriniz:");
//     scanf("%d",&sayi1);
//     printf("İkinci sayıyı giriniz:");
//     scanf("%d",&sayi2);
//     printf("Üçincü sayıyı giriniz:");
//     scanf("%d",&sayi3);
//     toplam=sayi1+sayi2+sayi3;
//     printf("Toplam=%d",toplam);
//     return 0;
// }



// int main()
// {
//     int i;
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d. Samsun Üniversitesi\n",i+1);
//     }
//     return 0;
// }

// int main() 
// {
// int sayi1 = 5;
// float sayi2 = 5.5f;
// char  char1 = 'a';
// printf("sayi1: %d\n", sayi1);
// printf("sayi2: %f\n", sayi2);
// printf("char1: %c\n", char1);
// }

//  int main() 
// {
// int sayi1 = 5;
// float sayi2 = 5.5f;
// char  char1 = 'a';
// printf("Değişken 1: %d\n", sayi1);
// printf("Değişken 2: %d\n", sayi2);
// printf("Değişken 3: %d\n", char1);
// }

// int sayi1;
// float sayi2;
// char char1; 
// scanf("%d/%f/%c", &sayi1, &sayi2, &char1);
// printf("%d\t\t%f\t\t%c", sayi1, sayi2, char1);
// return 0;


// int main() {
// const float pi = 3.14;
// float cevre;
// float alan; 
// double yarıcap;
// printf("Dairenin yarıçapını giriniz: ");
// scanf("%lf", &yarıcap);
// alan = pi * yarıcap * yarıcap;
// printf("\n, Dairenin alanı: %f", alan);
// cevre = 2 * pi * yarıcap;
// printf("\n, Dairenin çevresi: %f", cevre);
// return 1;
// }


// scanf(" , , .... ,)


// int sayi1 = 3;
// float sayi2 = 5.5f;
// char char1 ='a'; 

// int sayi1;
// float sayi2;
// char char1; 
// printf("\n, Bir karakter gir: ");
// scanf("%c",&char1);
// printf("%c", char1);
// printf("\n, Birinci sayıyı gir: ");
// scanf("%d\n",&sayi1);
// printf("%d", sayi1);
// printf("\n, İkinci sayıyı gir: ");
// scanf("%f",&sayi2);
//}





// main() 
// { 
// int a;
// scanf("%d",&a);
// printf(" Okunan:%c", a);
//}

// int sayi;
// printf("Bir sayi giriniz: ");
// scanf("%d",&sayi);
// printf("Girdiğiniz sayi %d dir.", sayi);


//printf("Hello Neslihan");

// a = getchar();
// putchar(a);


// int main() {
//     int s1, s2;
//     printf("Birinci sayıyı gir: ");
//     scanf("%d", &s1);
//     printf("İkinci sayıyı gir: ");
//     scanf("%d", &s2);
//     int toplam = s1 + s2;
//     printf("Toplamları= %d\n", toplam);
// }

// int main() {
//     int sayiAdeti;
//     char isim[5];

//     printf("İsim giriniz: ");
//     scanf("%s", isim);
//     printf("Kaç tane yazdırcaksın: ");
//     scanf("%d", &sayiAdeti);
    
//     for (int i = 0; i <= sayiAdeti; i++)
//     {
//         printf("Adını gir: %s\n", isim);
//     }
// }


// int main() {
//     int x = 10, n=1;
//     while (n <= 12)
//     {
//         if (x <= 4)
//         {
//             printf("x=%d\t n=%d\n", x, n);
//         }
//         n = n + 2;
//         x = x - 3;
//     }
// }

int main() {
    char harf;
    printf("harf giriniz: ");
    scanf("%c", &harf);
    printf("%d\n", harf);
    
    if(65 <= harf && harf <= 90) 
    {
        printf("büyük harftir.\n");
    }
    else if (97 <= harf && harf <= 122)
    {
        printf("küçük harftir.\n");
    }
    else
    {
        printf("yanlış karakter.\n");
    }
    printf("%d\n",'a');
    printf("%d\n",'z');
    printf("%d\n",'A');
    printf("%d\n",'Z');
}

