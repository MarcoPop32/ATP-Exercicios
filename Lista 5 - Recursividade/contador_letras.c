#include <stdio.h>

int conta(const char s[], char c, int i){
    if(s[i] == '\0'){
        return 0;
    }
    return (s[i] == c) + conta(s, c, i + 1);
}

int main(){
    printf("conta(\"banana\", 'a', 0) = %d\n", conta("banana", 'a', 0));
    printf("conta(\"recursao\", 'z', 0) = %d\n", conta("recursao", 'z', 0));
}