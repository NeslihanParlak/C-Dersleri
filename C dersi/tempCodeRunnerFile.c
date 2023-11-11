//int main() {
//     int sayi;
//     int asal = 1; // Varsayılan olarak sayıyı asal olarak kabul ediyoruz

//     // Kullanıcıdan bir sayı girişi alın
//     printf("Bir sayı girin: ");
//     scanf("%d", &sayi);

//     // Sayının 2'den küçük veya negatif olması durumunda asal değil
//     if (sayi <= 1) {
//         asal = 0;
//     } else {
//         for (int i = 2; i * i <= sayi; i++) {
//             if (sayi % i == 0) {
//                 asal = 0; // Sayı i'ye bölünebiliyorsa asal değil
//                 break;
//             }
//         }
//     }

//     // Sonucu ekrana yazdırın
//     if (asal) {
//         printf("%d bir asal sayıdır.\n", sayi);
//     } else {
//         printf("%d bir asal sayı değildir.\n", sayi);
//     }

//     return 0;
// }