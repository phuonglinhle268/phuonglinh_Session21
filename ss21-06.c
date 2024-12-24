#include <stdio.h>

int main() {
    char c;  
    FILE *file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {  
        printf("Khong mo duoc file bt01.txt.\n");
        return 1;
    }
    FILE *file2 = fopen("bt06.txt", "w");
    if (file2 == NULL) {  
        printf("Khong mo duoc file bt06.txt.\n");
        fclose(file1);  
        return 1;
    }
    while ((c = fgetc(file1)) != EOF) {  
        fputc(ch, file2);  
    }
    fclose(file1);
    fclose(file2);
    printf("Noi dung da duoc sao chep.\n");

    return 0;
}
