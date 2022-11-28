#include "../libft/libft.h"
#include <stdio.h>

typedef struct s_list_local
{
	void				*content;
	struct s_list_local	*next;
}						t_list_local;

typedef int				new_int;

struct	s_list_1
{
	void			*content;
	struct s_list_1	*next;
};

struct s_list_2
{
	void			*content;
	struct s_list_local	*next;
	int			n;
}					t_list_2;

int main (void)
{
	printf("size of int:\t\t\t%ld\n", sizeof(int));
	printf("size of pointer:\t\t%ld\n", sizeof(char *));
	printf("size of s_list_local:\t\t%ld\n", sizeof(t_list_local));
	printf("size of new_int:\t\t%ld\n", sizeof(new_int));

// Does not work because s_list_1 alone is not the name of the struct. The whole name is "struct s_list_1"
//	printf("size of s_list_1:\t%ld\n", sizeof(s_list_1));
	printf("size of struct s_list_1:\t%ld\n", sizeof(struct s_list_1));

// We can define new types with typedef. This is like an alias so we dont have to type so much.
	int n;	

	n = 0;
// n is an instance of an int and is initialized so it has a size.
	printf("size of n:\t\t\t%ld\n", sizeof(n));

// t_list_2 is an initialized instance of s_list_2
	printf("size of t_list_2:\t\t%ld\n", sizeof(t_list_2));

// Becuase t_list_2 is an initialized instance of struct s_list_2, we can access it's content
	//printf("value of t_list_2.content:\t%p\n", t_list_2.content);
// We cannot access the content of a type (struct s_list_1) because it is not initialized yet.
	//printf("value of struct s_list_1.content: %p\n", struct s_list_1.content);
// Despite not being initialized, we can get it's size with sizeof.
	printf("size of struct s_list_1:\t%ld\n", sizeof(struct s_list_1));

	return (0);
}
