#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//Klavyeden girilen doğum yılı ve günümüz yılı bilgilerine göre yaşı hesaplayıp ekrana yazdıran C programını yazın.
int main() {
    int yas, dogumYili;
    int günümüzYili = 2023;
    printf("Doğum yılını girin: ");
    scanf("%d", &dogumYili);
    yas = günümüzYili - dogumYili;
    printf("yaş: %d", yas);

}