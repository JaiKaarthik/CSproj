#include <stdio.h>

int main() {
    char filename[100];

    printf("Enter the filename to delete: ");
    scanf("%s", filename);

    if (remove(filename) == 0)
        printf("File deleted successfully.\n");
    else
        printf("Error deleting the file.\n");

    return 0;
}
