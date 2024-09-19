#include <stdio.h>
int main()
{
int rows = 10;
int n = 7;

int width = 0;
int lastNumber = rows * (rows + 1) / 2;
while (lastNumber) {
width++;
lastNumber /= 10;
}
for (int i = 0; i < rows; i++) {

for (int j = 0; j <= i; j++) {

printf("%-*d ", width, n++);
}
printf("\n");
}
return 0;
}

