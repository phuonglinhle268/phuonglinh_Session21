#include <stdio.h>

int main() {
    char string[100];  /
    printf("Nhap chuoi ban muon ghi them: ");
    fgets(string, sizeof(string), stdin);  
    FILE *file = fopen("bt01.txt", "a"); 
    if (file == NULL) {  
        printf("Không mo duoc file bt01.txt.\n");
        return 1;  
    fprintf(file, "%s", string);
    fclose(file);
    printf("Chuuoi duoc ghi them vao file bt01.txt.\n");

    return 0;
}
