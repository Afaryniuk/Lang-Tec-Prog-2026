int main() {
    int i = 0, n, s = 0;

    while (i < 10) {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n > 0) {
            s += n;
            i++;
        } else {
            printf("Numero ignorado! Digite um positivo.\n");
        }
    }

    printf("\nSoma = %d\n", s);
    printf("Media = %.2f\n", (float)s / 10);

    return 0;
}
