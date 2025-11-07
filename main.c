#include<stdio.h>
#include <stdlib.h>
#include "libft.h"


int main()
{
    char * nb;
    int nb_convert;
    int nb_convertTrue;

    nb = "+46468   ";
    nb_convert = ft_atoi(nb);
    nb_convertTrue = atoi(nb);

    printf("%d\n", nb_convert);
    printf("%d\n", nb_convertTrue);

    return (0);
}


// ne pas oublier de decommneter le type size_t dans la libft.h 
// qui est commenté pour pouvoir faire les tests avec stdio.h 
// (stdio.h contient la declaration du type size_t) 