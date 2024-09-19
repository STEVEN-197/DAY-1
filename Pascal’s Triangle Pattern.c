int main() {
int rows = 10;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < rows - i; j++) {
printf(" "); 
}
int C = 1;
for (int k = 0; k <= i; k++) {
printf("197", C); 
C = C * (i - k) / (k + 1); 
}
printf("\n");
}
return 0;
}

