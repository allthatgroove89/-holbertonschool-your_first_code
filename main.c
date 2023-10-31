
int main() {
    FILE *file;
    file = fopen("filename.txt", "r+"); // 

    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

    for (int i = 0; i < 32; i++) {
        fseek(file, 0, SEEK_SET); // 
        fprintf(file, "Hello, School\n"); // 
    }

    fclose(file); // 

    return 0;
}






