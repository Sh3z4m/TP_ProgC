#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    printf("Entrez le premier nombre entier (num1) : ");
    scanf("%d", &num1);
    printf("Entrez le second nombre entier (num2) : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    int result;

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Résultat de %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Résultat de %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Résultat de %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Résultat de %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Erreur : Division par zéro.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Résultat de %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Erreur : Modulo par zéro.\n");
            }
            break;
        case '&':
            result = num1 & num2;
            printf("Résultat de %d & %d = %d\n", num1, num2, result);
            break;
        case '|':
            result = num1 | num2;
            printf("Résultat de %d | %d = %d\n", num1, num2, result);
            break;
        case '~':
            result = ~num1;
            printf("Résultat de ~%d = %d\n", num1, result);
            break;
        default:
            printf("Opérateur non valide.\n");
            break;
    }
    return 0;
}
