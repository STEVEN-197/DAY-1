int main() {
int rows = 10;
// outer loop for rows
for (int i = 0; i < rows; i++) {
// inner loop 1 for leading white spaces
for (int j = 0; j < rows - i; j++) {
printf(" "); // Using two spaces for proper alignment
}
int C = 1; // coef icient initialized to 1 for each row's first position
// inner loop 2 for printing numbers
for (int k = 0; k <= i; k++) {
printf("197", C); // Corrected to print integer with spacing for alignment
C = C * (i - k) / (k + 1); // Calculate the next number in the row
}
printf("\n");
}
return 0;
}

