#include <stdio.h>

int main(){
    char string[100];  
    printf("Nhap chuoi muon ghi: ");
    fgets(string, sizeof(string), stdin);  
    FILE *file = fopen("bt01.txt", "w");  

    if (file == NULL) {  
        printf("Khong mo duoc file\n");
        return 1;  
    }
    fprintf(file, "%s", string);
    fclose(file);
    printf("Chuoi da duoc ghi vao file bt01.txt.\n");

    return 0;
}
