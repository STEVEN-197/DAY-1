#include <stdio.h>
int main() {
int rows = 7;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < rows - i - 1; j++) {
printf(" ");
}
for (int k = 0; k < 2 * i + 1; k++) {
if (k == 0 || k == 2 * i) {
printf("*");
} else if (i == rows - 1) {
printf("*");
} else {
printf(" ");
}
}
printf("\n");
}
return 0;
}

