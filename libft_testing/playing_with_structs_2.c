#include "../libft/libft.h"
#include <stdio.h>

struct	s_list_1
{
	void			*content;
	struct s_list_1	*next;
};

int main (void)
{
	struct s_list_1		s_list_1_init;
	struct s_list_1		*p_s_list_1_init;
	char string_1[] = "This is a happy little string.";
	char string_2[] = "This is string is sad af.";
	
// need to use malloc to initialize p_s_list_1_init since we only created a pointer so far.
	p_s_list_1_init = (struct s_list_1 *)malloc(1 * sizeof(struct s_list_1));

	s_list_1_init.content = string_1;
	p_s_list_1_init->content = string_2;

	printf("Content pointed to by s_list_1_init.content:\t%s\n", (char *)s_list_1_init.content);
	printf("Content pointed to by p_s_list_1_init->content:\t%s\n", (char *)p_s_list_1_init->content);

// What's nice about using pointer to structs instead of just structs, is we can use the pointer to link structs together.
	p_s_list_1_init->next = &s_list_1_init;

// Now we can access s_list_1_init's content from p_s_list_1_init.
	printf("Content pointed to by s_list_1_init from p_s_list_1_init:\t%s\n", (char *)(*(*p_s_list_1_init).next).content);

// the pstruct->member operator is the same as *pstruct.member
// p_s_list_1_init->content
// (*p_s_list_1_init).content

	printf("Result of p_s_list_1_init->content:\t%s\n", (char *)p_s_list_1_init->content);
	printf("Result of *p_s_list_1_init.content:\t%s\n", (char *)(*p_s_list_1_init).content);

// However if you wanted to access the content of another struct in a list, the syntax is super annoying if you dont use the -> syntax.

	free(p_s_list_1_init);
	return (0);
}
