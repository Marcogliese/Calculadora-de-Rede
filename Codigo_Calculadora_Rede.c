#include <stdio.h>
int main () {
    int CIDR;
    printf("Digite o valor do CIDR de 1 a 32: ");
    scanf("%d", &CIDR);
    switch (CIDR) {
        case 32:
            printf("Mascara da rede: 255.255.255.255\nHosts: 0");
            break;
        case 31:
            printf("Mascara da rede: 255.255.255.254\nHosts: 1");
            break;
        case 30:
            printf("Mascara da rede: 255.255.255.252\nHosts: 2");
            break;
        case 29:
            printf("Mascara da rede: 255.255.255.248\nHosts: 6");
            break;
        case 28:
            printf("Mascara da rede: 255.255.255.240\nHosts: 14");
            break;
        case 27:
            printf("Mascara da rede: 255.255.255.224\nHosts: 30");
            break;
        case 26:
            printf("Mascara da rede: 255.255.255.192\nHosts: 62");
            break;
        case 25:
            printf("Mascara da rede: 255.255.255.128\nHosts: 126");
            break;
        case 24:
            printf("Mascara da rede: 255.255.255.0\nHosts: 254");
            break;
        case 23:
            printf("Mascara da rede: 255.255.254.0\nHosts: 510");
            break;
        case 22:
            printf("Mascara da rede: 255.255.252.0\nHosts: 1022");
            break;
        case 21:
            printf("Mascara da rede: 255.255.248.0\nHosts: 2046");
            break;
        case 20:
            printf("Mascara da rede: 255.255.240.0\nHosts: 4094");
            break;
        case 19:
            printf("Mascara da rede: 255.255.224.0\nHosts: 8190");
            break;
        case 18:
            printf("Mascara da rede: 255.255.192.0\nHosts: 16382");
            break;
        case 17:
            printf("Mascara da rede: 255.255.128.0\nHosts: 32766");
            break;
        case 16:
            printf("Mascara da rede: 255.255.0.0\nHosts: 65534");
            break;
        case 15:
            printf("Mascara da rede: 255.254.0.0\nHosts: 131070");
            break;
        case 14:
            printf("Mascara da rede: 255.252.0.0\nHosts: 262142");
            break;
        case 13:
            printf("Mascara da rede: 255.248.0.0\nHosts: 524286");
            break;
        case 12:
            printf("Mascara da rede: 255.240.0.0\nHosts: 1048574");
            break;
        case 11:
            printf("Mascara da rede: 255.224.0.0\nHosts: 2097152");
            break;
        case 10:
            printf("Mascara da rede: 255.192.0.0\nHosts: 4194302");
            break;
        case 9:
            printf("Mascara da rede: 255.128.0.0\nHosts: 8388606");
            break;
        case 8:
            printf("Mascara da rede: 255.0.0.0\nHosts: 16777214");
            break;
        case 7:
            printf("Mascara da rede: 254.0.0.0\nHosts: 33554430");
            break;
        case 6:
            printf("Mascara da rede: 252.0.0.0\nHosts: 67108862");
            break;
        case 5:
            printf("Mascara da rede: 248.0.0.0\nHosts: 134217726");
            break;
        case 4:
            printf("Mascara da rede: 240.0.0.0\nHosts: 268435454");
            break;
        case 3:
            printf("Mascara da rede: 224.0.0.0\nHosts: 536870910");
            break;
        case 2:
            printf("Mascara da rede: 192.0.0.0\nHosts: 1073741822");
            break;
        case 1:
            printf("Mascara da rede: 128.0.0.0\nHosts: 2147483646");
            break;
        case 0:
            printf("Mascara da rede: 0.0.0.0\nHosts: 4294967294");
            break;
        default:
        printf("Digite um valor de 1 a 32!");
    }
    return 0;
}
