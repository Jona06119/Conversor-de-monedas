#include <stdio.h>

int main()
{
    int opcion;
    float pesos, tipoCambio, resultado;

    printf("====================================\n");
    printf("       CONVERSOR DE MONEDAS\n");
    printf("====================================\n");

    printf("1. Pesos mexicanos a dolares\n");
    printf("2. Pesos mexicanos a euros\n");
    printf("3. Pesos mexicanos a otra moneda\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > 3)
    {
        printf("\nOpcion no valida.\n");
        return 1;
    }

    printf("\nIngresa la cantidad en pesos mexicanos: ");
    scanf("%f", &pesos);

    if (pesos < 0)
    {
        printf("\nLa cantidad no puede ser negativa.\n");
        return 1;
    }

    printf("Ingresa el tipo de cambio (pesos por unidad de moneda): ");
    scanf("%f", &tipoCambio);

    if (tipoCambio <= 0)
    {
        printf("\nEl tipo de cambio debe ser mayor que cero.\n");
        return 1;
    }

    resultado = pesos / tipoCambio;

    printf("\n====================================\n");
    printf("             RESULTADO\n");
    printf("====================================\n");

    switch (opcion)
    {
    case 1:
        printf("Conversion: Pesos a dolares\n");
        break;
    case 2:
        printf("Conversion: Pesos a euros\n");
        break;
    case 3:
        printf("Conversion: Pesos a otra moneda\n");
        break;
    }

    printf("Cantidad original: %.2f MXN\n", pesos);
    printf("Tipo de cambio: %.4f MXN\n", tipoCambio);
    printf("Resultado: %.2f unidades de moneda extranjera\n",
           resultado);

    printf("====================================\n");

    return 0;
}