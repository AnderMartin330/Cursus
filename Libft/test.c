#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Probar ft_strlen
    char str1[] = "Hola, Libft!";
    printf("ft_strlen: %d\n", ft_strlen(str1));  // Debería imprimir 12

    // Probar ft_strcpy
    char dest[20];
    ft_strcpy(dest, str1);
    printf("ft_strcpy: %s\n", dest);  // Debería imprimir "Hola, Libft!"

    // Probar ft_strdup
    char *dup_str = ft_strdup(str1);
    if (dup_str)
    {
        printf("ft_strdup: %s\n", dup_str);  // Debería imprimir "Hola, Libft!"
        free(dup_str);  // Liberar memoria
    }

    // Probar ft_strcat
    char str2[50] = "Primera parte. ";
    ft_strcat(str2, "Segunda parte.");
    printf("ft_strcat: %s\n", str2);  // Debería imprimir "Primera parte. Segunda parte."

    // Probar ft_memset
    char str3[10] = "ABCDEFGH";
    ft_memset(str3, 'x', 3);
    printf("ft_memset: %s\n", str3);  // Debería imprimir "xxxDEFGH"

    // Probar ft_bzero
    char str4[10] = "ABCDEFGHIJ";
    ft_bzero(str4, 5);
    printf("ft_bzero: ");
    for (int i = 0; i < 10; i++)
    {
        if (str4[i] == '\0')
            printf("\\0");
        else
            printf("%c", str4[i]);
    }
    printf("\n");

    // Probar ft_atoi
    char str5[] = "  -1234abc";
    int num = ft_atoi(str5);
    printf("ft_atoi: %d\n", num);  // Debería imprimir -1234

    // Probar ft_calloc
    int *array = ft_calloc(5, sizeof(int));
    if (array)
    {
        printf("ft_calloc: ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", array[i]);  // Debería imprimir "0 0 0 0 0"
        }
        printf("\n");
        free(array);
    }

    // Probar ft_split
    char **split_result = ft_split("Hola mundo de libft", ' ');
    printf("ft_split: \n");
    for (int i = 0; split_result[i] != NULL; i++)
    {
        printf("  %s\n", split_result[i]);
        free(split_result[i]);  // Liberar cada subcadena
    }
    free(split_result);  // Liberar el array de punteros

    // Probar ft_itoa
    int num2 = -4567;
    char *str_num = ft_itoa(num2);
    if (str_num)
    {
        printf("ft_itoa: %s\n", str_num);  // Debería imprimir "-4567"
        free(str_num);  // Liberar la memoria
    }
    
    //Probar ft_memcpy
    char src1[] = "12345";
    char dest1[10];
    ft_memcpy(dest1, src1, 5);
    printf("ft_memcpy: %s\n", dest1); // Debería imprimir "12345"

    //Probar ft_memmove
    char str6[] = "OverlapExample";
    ft_memmove(str6 + 7, str6, 7); 
    printf("ft_memmove: %s\n", str6); // Debería manejar correctamente solapamientos

    //Probar ft_memchr
    char str7[] = "Buscar un carácter";
    char *result = ft_memchr(str7, 'u', ft_strlen(str7));
    if (result)
        printf("ft_memchr: %s\n", result); // Debería imprimir "ucar un carácter"
    else
        printf("ft_memchr: Not found\n");

    //Probar ft_memcmp
    char str8[] = "abc";
    char str9[] = "abd";
    int cmp_result = ft_memcmp(str8, str9, 3);
    printf("ft_memcmp: %d\n", cmp_result); // Debería imprimir un valor negativo

    //Probar ft_strlcpy
    char src2[] = "source";
    char dest2[10];
    size_t copied_len = ft_strlcpy(dest2, src2, 10);
    printf("ft_strlcpy: %s, copied length: %zu\n", dest2, copied_len); // Debería imprimir "source" y 6

    //Probar ft_strlcat
    char dest3[20] = "Hello";
    char src3[] = " World!";
    size_t total_len = ft_strlcat(dest3, src3, 20);
    printf("ft_strlcat: %s, total length: %zu\n", dest3, total_len); // Debería imprimir "Hello World!" y 12

    //Probar ft_strchr
    char str10[] = "Buscar la primera aparición";
    char *found_char = ft_strchr(str10, 'a');
    printf("ft_strchr: %s\n", found_char); // Debería imprimir "ar la primera aparición"

    //Prueba ft_strrchr
    char *found_char_r = ft_strrchr(str10, 'a');
    printf("ft_strrchr: %s\n", found_char_r); // Debería imprimir "ación"

    //Prueba ft_strncmp
    char str11[] = "abcdef";
    char str12[] = "abcdeF";
    int compare_result = ft_strncmp(str11, str12, 5);
    printf("ft_strncmp: %d\n", compare_result); // Debería imprimir 0, porque las primeras 5 letras son iguales

    //Prueba strnstr
    char haystack[] = "Aquí está la aguja en el pajar";
    char needle[] = "aguja";
    char *sub_str = ft_strnstr(haystack, needle, ft_strlen(haystack));
    if (sub_str)
        printf("ft_strnstr: %s\n", sub_str); // Debería imprimir "aguja en el pajar"
    else
        printf("ft_strnstr: Not found\n");

    //Prueba ft_tolower & ft_toupper
    char lower = ft_tolower('A');
    char upper = ft_toupper('a');
    printf("ft_tolower: %c, ft_toupper: %c\n", lower, upper); // Debería imprimir "a" y "A"

    //Prueba ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A')); // Debería imprimir 1
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5')); // Debería imprimir 1
    printf("ft_isalnum('G'): %d\n", ft_isalnum('G')); // Debería imprimir 1
    printf("ft_isascii(127): %d\n", ft_isascii(127)); // Debería imprimir 1
    printf("ft_isprint(' '): %d\n", ft_isprint(' ')); // Debería imprimir 1

    //Prueba ft_itoa
    int number = 12345;
    char *itoa_result = ft_itoa(number);
    if (itoa_result)
    {
        printf("ft_itoa: %s\n", itoa_result); // Debería imprimir "12345"
        free(itoa_result);
    }

    //Prueba ft_strmapi
    char str13[] = "hello";
    char *mapped_str = ft_strmapi(str13, [](unsigned int i, char c) { return c - 32; }); // Convierte a mayúsculas
    printf("ft_strmapi: %s\n", mapped_str); // Debería imprimir "HELLO"
    free(mapped_str);

    //Prueba ft_striteri
    char str14[] = "hello";
    ft_striteri(str14, [](unsigned int i, char *c) { *c -= 32; }); // Convierte a mayúsculas
    printf("ft_striteri: %s\n", str14); // Debería imprimir "HELLO"

    //Prueba ft_putstr_fd, ft_putchar_fd, ft_putendl_fd, ft_putnbr_fd
    ft_putstr_fd("This is a test", 1); // Imprime "This is a test" en stdout
    ft_putchar_fd('\n', 1); // Imprime una nueva línea
    ft_putendl_fd("New line text", 1); // Imprime "New line text" seguido de una nueva línea
    ft_putnbr_fd(-123, 1); // Imprime "-123"
    ft_putchar_fd('\n', 1); // Imprime una nueva línea

    //Prueba ft_substr
    char str15[] = "This is a substring test";
    char *substr = ft_substr(str15, 5, 10);
    printf("ft_substr: %s\n", substr); // Debería imprimir "is a subst"
    free(substr);

    //Prueba ft_strtrim
    char str16[] = "   Trim this text    ";
    char *trimmed = ft_strtrim(str16, " ");
    printf("ft_strtrim: '%s'\n", trimmed); // Debería imprimir "Trim this text"
    free(trimmed);

    //Prueba ft_split
    char **words = ft_split("This is a split test", ' ');
    for (int i = 0; words[i] != NULL; i++)
    {
        printf("ft_split: %s\n", words[i]);
        free(words[i]); // Liberar cada subcadena
    }
    free(words); // Liberar el array de punteros

    //Prueba ft_strjoin
    char str17[] = "Hello, ";
    char str18[] = "World!";
    char *joined_str = ft_strjoin(str17, str18);
    printf("ft_strjoin: %s\n", joined_str); // Debería imprimir "Hello, World!"
    free(joined_str);

    //Prueba ft_memset
    char buffer[10] = "abcdefgh";
    ft_memset(buffer, 'X', 3);
    printf("ft_memset: %s\n", buffer); // Debería imprimir "XXXdefgh"

    return 0;
}
