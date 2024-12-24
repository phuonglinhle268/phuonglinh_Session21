#include <stdio.h>

int main(){
    FILE *file = fopen("bt01.txt", "r");  
    if (file == NULL) {  
        printf("Khong mo duoc file\n");
        return 1;  
    }

    char c = fgetc(file);  
    if (c == EOF) {  
        printf("File bt01.txt r?ng.\n");
    } else {
        printf("Ki tu dau tien la: %c\n", c);
    }
    fclose(file);  

    return 0;
}
