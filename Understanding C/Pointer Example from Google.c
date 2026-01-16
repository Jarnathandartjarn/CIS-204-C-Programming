void swap(int *a, int *b) {
    int temp = *a; // temp stores the value at the address of a
    *a = *b;       // the value at the address of a becomes the value at the address of b
    *b = temp;     // the value at the address of b becomes the original value of a
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y); // Pass the memory addresses of x and y
    printf("%d %d\n", x, y); // Output: 20 10
    return 0;
}