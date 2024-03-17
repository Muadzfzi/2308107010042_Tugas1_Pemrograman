#include <stdio.h>

int main() {
    int pilihan;
    long decimalNumber;
    int binaryNumber, octalNumber, base = 1;
    
    printf("Pilih jenis konversi:\n");
    printf("1 (Bilangan Desimal ke Biner)\n");
    printf("2 (Bilangan Biner ke Desimal)\n");
    printf("3 (Bilangan Desimal ke Octal)\n");
    printf("4 (Bilangan Octal ke Desimal)\n");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%ld", &decimalNumber);            
            printf("Biner: ");
            binaryNumber = 0;
            while (decimalNumber > 0) {
                 binaryNumber += (decimalNumber % 2) * base;
                 decimalNumber /= 2;
                 base *= 10;                
            } 
                 printf("%d", binaryNumber);
            break;
            
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &binaryNumber);
            decimalNumber = 0;          
            while (binaryNumber > 0) {
                int remainder = binaryNumber % 10;
                decimalNumber += remainder * base;
                binaryNumber /= 10;
                base *= 2;
            }
            printf("Desimal: %ld", decimalNumber);
            break;
            
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%ld", &decimalNumber);
            octalNumber = 0;           
            while (decimalNumber > 0) {
                octalNumber += (decimalNumber % 8) * base;
                decimalNumber /= 8;
                base *= 10;
            }
            printf("Octal: %d", octalNumber);
            break;
            
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%d", &octalNumber);
            decimalNumber = 0;            
            while (octalNumber > 0) {
                decimalNumber += (octalNumber % 10) * base;
                octalNumber /= 10;
                base *= 8;
            }
            printf("Desimal: %ld", decimalNumber);
            break;
            
            default:
        printf("Pilihan tidak valid");
    }

    return 0;
}      
