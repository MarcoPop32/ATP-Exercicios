#include <stdio.h>

void permuta(char s[], int i, int n){
    if(n == 0 || i == n - 1){
        printf("%s\n", s);
        return;
    }
    for(int j = i; j < n; j++){
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        permuta(s, i + 1, n);
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

int main(){
    char s[] = "ABC";
    printf("permuta(\"ABC\"): \n"); 
    permuta(s, 0, 3);
}