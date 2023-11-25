#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int count_numb(char s[10000], long size){
    long int count = 0;
    for(long int i = 0; i < size; i++){
        if(i == 0){
            if (s[i] != ' '){
                count += 1;
            }
        }
        else if(s[i-1] == ' ' && s[i] != ' '){
            count += 1;
        }
        else{

        }
    }
    return count;
}

int main() {
    char buffer[10000];
    long int n = 0, m = 0;
    while(1) {
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
            size_t len = strlen(buffer);
            if (len > 1 && buffer[len - 1] == '\n') {
                buffer[len - 1] = '\0';
                n++;
                m = count_numb(buffer, len - 1);
            }
            else if(len > 1){
                n++;
                break;
            }
            else{
                break;
            }

        } else {
            return -1;
        }
    }
    printf("%d %d\n ", n, m);
    return 0;
}