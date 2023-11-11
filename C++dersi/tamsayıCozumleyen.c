//Klavyeden girilen 4 haneli tamsayıyı çözümleyen C programını yazın
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
}