#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const double J_PER_eV  = 1.602176634e-19;
const double J_PER_kWh = 3.6e6;
const double J_PER_cal = 4.184;
const double J_PER_BTU = 1055.05585262;

double to_joules(double value, char unit)
{
    if (unit == 'e') return value * J_PER_eV;
    if (unit == 'k') return value * J_PER_kWh;
    if (unit == 'c') return value * J_PER_cal;
    if (unit == 'b') return value * J_PER_BTU;
    return value;
}

double from_joules(double joules, char unit)
{
    if (unit == 'e') return joules / J_PER_eV;
    if (unit == 'k') return joules / J_PER_kWh;
    if (unit == 'c') return joules / J_PER_cal;
    if (unit == 'b') return joules / J_PER_BTU;
    return joules;
}

int main(void)
{
    double value, result, joules;
    char from, to;

    printf("=== Engineering Unit Converter ===\n");
    printf("Unit legend:\n");
    printf(" J - Joule\n");
    printf(" e - electronvolt (eV)\n");
    printf(" k - kilowatt-hour (kWh)\n");
    printf(" c - calorie (cal)\n");
    printf(" b - British Thermal Unit (BTU)\n\n");

    printf("Enter value: ");
    scanf("%lf", &value);

    printf("From unit (J/e/k/c/b): ");
    scanf(" %c", &from);

    printf("To unit (J/e/k/c/b): ");
    scanf(" %c", &to);

    joules = to_joules(value, from);
    result = from_joules(joules, to);

    printf("\nResult: %.10e\n", result);

    return 0;
}
