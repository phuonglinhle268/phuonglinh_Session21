#include <stdio.h>

int main() {
    int number; 
    char line[100];  
    printf("Nhap so dong muon ghi: ");
    scanf("%d", &number);
    FILE *file = fopen("bt05.txt", "w");
    if (file == NULL) {  
        printf("Khong mo duoc file bt05.txt.\n");
        return 1;
    }
    getchar(); 
    for (int i = 1; i <= number; i++) {
        printf("Nhap noi dung %d: ", i);
        fgets(line, sizeof(line), stdin);  
        fprintf(file, "%s", line); 
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) { 
        printf("Khong duoc file bt05.txt de doc.\n");
        return 1;
    }
    printf("Noi dung cua file bt05.txt la:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  
    }
    fclose(file);

    return 0;
}
