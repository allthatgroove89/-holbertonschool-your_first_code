
int main() {
    FILE *file;
    file = fopen("filename.txt", "r+"); // Open the file for reading and writing

    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

    for (int i = 0; i < 32; i++) {
        fseek(file, 0, SEEK_SET); // Move the file pointer to the beginning
        fprintf(file, "Hello, School\n"); // Write "Hello, School" to the file 32 times
    }

    fclose(file); // Close the file

    return 0;
}






