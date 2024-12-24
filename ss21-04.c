#include <stdio.h>

int main() {
    char line[100];  
    FILE *file = fopen("bt01.txt", "r"); 

    if (file == NULL) {  
        printf("Khong mo duoc file bt01.txt.\n");
        return 1; 
    }
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong file la: %s", line);
    } else {
        printf("file khong co dong dau tien.\n");
    }
    fclose(file);

    return 0;
}
