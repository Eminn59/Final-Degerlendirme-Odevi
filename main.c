#include <stdio.h>
#include <math.h>

int main() {
    float uruntutar, odenen, paraustu;
    int toplam_k;
    int k200, k100, k50, k20, k10, k5, k1;
    int m50, m25, m10, m5, m1;
    int parcasayisi;

    printf("Urun tutarini giriniz: ");
    scanf("%f", &uruntutar);

    printf("Odenen parayi giriniz: ");
    scanf("%f", &odenen);

    paraustu = odenen - uruntutar;
    printf("\nPara Ustu: %.2f TL\n\n", paraustu);

    toplam_k = (int)round(paraustu * 100.0f);

    k200 = toplam_k / 20000;
    toplam_k = toplam_k % 20000;

    k100 = toplam_k / 10000;
    toplam_k = toplam_k % 10000;

    k50 = toplam_k / 5000;
    toplam_k = toplam_k % 5000;

    k20 = toplam_k / 2000;
    toplam_k = toplam_k % 2000;

    k10 = toplam_k / 1000;
    toplam_k = toplam_k % 1000;

    k5 = toplam_k / 500;
    toplam_k = toplam_k % 500;

    k1 = toplam_k / 100;
    toplam_k = toplam_k % 100;

    m50 = toplam_k / 50;
    toplam_k = toplam_k % 50;

    m25 = toplam_k / 25;
    toplam_k = toplam_k % 25;

    m10 = toplam_k / 10;
    toplam_k = toplam_k % 10;

    m5 = toplam_k / 5;
    toplam_k = toplam_k % 5;

    m1 = toplam_k / 1;
    toplam_k = toplam_k % 1;

    parcasayisi = k200 + k100 + k50 + k20 + k10 + k5 + k1 + m50 + m25 + m10 + m5 + m1;

    printf("--VERILECEK PARA USTLERI--\n");
    printf("200 TL : %d adet\n", k200);
    printf("100 TL : %d adet\n", k100);
    printf("50 TL  : %d adet\n", k50);
    printf("20 TL  : %d adet\n", k20);
    printf("10 TL  : %d adet\n", k10);
    printf("5 TL   : %d adet\n", k5);
    printf("1 TL   : %d adet\n", k1);
    printf("50 Kr  : %d adet\n", m50);
    printf("25 Kr  : %d adet\n", m25);
    printf("10 Kr  : %d adet\n", m10);
    printf("5 Kr   : %d adet\n", m5);
    printf("1 Kr   : %d adet\n", m1);
    printf("---------------------\n");
    printf("Musteriye verilen toplam kupur/parca sayisi: %d\n", parcasayisi);

    return 0;
}
