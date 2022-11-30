#include "../libft/libft.h"
#include <stdio.h>

typedef struct my_struct
{
	int			n;
	char		*m;
	char		p;
	char		w;
	char		u;
	char		i;
	int			b;
	char		q;

}				t_my_struct;

int main (void)
{
	t_my_struct		*instance;

	instance = (t_my_struct *)malloc(1 * sizeof(t_my_struct));

	printf("sizeof(t_my_struct) = %ld\n", sizeof(t_my_struct));

	instance->n = 69;
	printf("address of instance:\t%p\n", instance);
	printf("address of n:\t\t%p\n", &(instance->n));
	printf("address of u:\t\t%p\n", &(instance->u));
	printf("u is %ld spaces away from n.\n", (unsigned long)&(instance->u) - (unsigned long)&(instance->n));
	printf("value of n:\t\t%d\n", instance->n);


	return (0);
}
