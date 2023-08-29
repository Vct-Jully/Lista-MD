//6. Escrever um programa para encontrar os coeficientes s e t da combinação linear mdc(a,b) = s * a + t * b.

#include <stdio.h>
#include <stdbool.h>

int extended_euclides(int A, int D, int *s, int *t)
{
    // Inicializamos os coeficientes de Bézout
    int s0 = 1, s1 = 0, t0 = 0, t1 = 1;
    // Inicializamos as variáveis
    int q, r, m, n;

    while (A > 0)
    {
        // A cada loop, calculamos o quociente (q) e o resto (r) da divisão de D por A
        q = D / A;
        r = D % A;

        // Armazenamos temporariamente os coeficientes calculados nessa iteração
        m = s0 - q * s1;
        n = t0 - q * t1;

        // Atualizamos as variáveis para a próxima iteração
        D = A;
        A = r;
        s0 = s1;
        t0 = t1;
        s1 = m;
        t1 = n;
    }

    // Após o loop, os coeficientes finais são armazenados em *s e *t
    *s = t0;
    *t = s0;

    return D; // Retornamos o MDC
}

int main()
{
    int A, D;

    printf("🔢 >> Insira dois números inteiros para encontrar os coeficientes s e t da combinação linear de seu MDC: ");
    int scan_return = scanf("%d %d", &A, &D);

    if (scan_return != 2)
    {
        printf("❌ Os caracteres digitados formam uma entrada inválida!\n");
        return 0;
    }

    int s_value = 0, t_value = 0;
    int mdc = extended_euclides(A, D, &s_value, &t_value);

    printf("✅ Os coeficientes da combinação linear mdc(%d, %d) = %d são: %d e %d\n", A, D, mdc, s_value, t_value);

    return 0;
}