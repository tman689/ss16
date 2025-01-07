#include <stdio.h>

void updateElement(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        *(arr + position) = newValue; 
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
    int newValue = 72;
    int position = 2;
    updateElement(array, size, newValue, position);
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}

