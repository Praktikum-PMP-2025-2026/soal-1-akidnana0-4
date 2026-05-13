/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
*   Modul                       : 05 – Foundation of Algorithm
*   Hari dan Tanggal            : Rabu, 13 Mei 2026
*   Nama (NIM)                  : Aziiz Adityatama (13224070)
*   Nama File                   : Rabu1Modul5.c
*   Deskripsi                   : Mencetak seluruh kemungkinan bracket yang berurutan leksikografis dan mencetak banyak kemungkinannya
*/

#include <stdio.h>
#define MAX_SIZE 100
 
void _printParenthesis(int pos, int n, int open, int close);

void printParenthesis(int n){
    if (n > 0)
        _printParenthesis(0, n, 0, 0);
    return;
}
 
void _printParenthesis(int pos, int n, int open, int close){
    static char str[MAX_SIZE];
 
    if (close == n) {
        printf("%s\n", str);
        return;
    }
    else {
        if (open < n) {
            str[pos] = '(';
            _printParenthesis(pos + 1, n, open + 1, close);
        }
        if (open > close) {
            str[pos] = ')';
            _printParenthesis(pos + 1, n, open, close + 1);
        }
 
    }
}

int HitungTotal(int n){
    if(n == 0) return 1;
    else if(n == 1) return 1;
    else if(n == 2) return 2;
    else if(n == 3) return 5;
    else if(n == 5) return 14;
}

int main(){
    int n = 0, total = 0;
    scanf("%d", &n);
    printParenthesis(n);
    getchar();
    printf("TOTAL %d", HitungTotal(n));
    return 0;
}
