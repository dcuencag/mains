/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   individual_mains.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:24:56 by dancuenc          #+#    #+#             */
/*   Updated: 2025/02/04 14:10:53 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//This is a main document with an individual main for every function

//isalpha
int	main(void)
{
	char	c;

	c = 'a';
	printf("The character is: %c\n", c);
	printf("Is the character alphabetic? %d\n", ft_isalpha(c));
	return (0);
}

//isdigit
int	main(void)
{
	char	c;

	c = '5';
	printf("The character is: %c\n", c);
	printf("Is the character a digit? %d\n", ft_isdigit(c));
	return (0);
}

//isalnum
int	main(void)
{
	char	c;
	char	d;

	c = '5';
	d = 'a';
	printf("The character is: %c\n", c);
	printf("Is the character alphanumeric? %d\n", ft_isalnum(c));
	printf("The character is: %c\n", d);
	printf("Is the character alphanumeric? %d\n", ft_isalnum(d));
	return (0);
}

//isascii
int	main(void)
{
	char	c;

	c = 'a';
	printf("The character is: %c\n", c);
	printf("Is the character an ascii character? %d\n", ft_isascii(c));
	return (0);
}

//isprint
int	main(void)
{
	char	c;

	c = 32;
	printf("The character is: %c\n", c);
	printf("Is the character printable? %d\n", ft_isprint(c));
	return (0);
}

//strlen
int	main(void)
{
	char	*str;

	str = "Hello World!";
	printf("The string is: %s\n", str);
	printf("The length of the string is: %zu\n", ft_strlen(str));
	return (0);
}

//memset
int	main(void)
{
	char	str[50];

	ft_memset(str, 'a', 5);
	printf("The string is: %s\n", str);
	return (0);
}

//bzero
int	main(void)
{
	char	str[50];

	ft_bzero(str, 5);
	printf("The string is: %s\n", str);
	return (0);
}

//memcpy
int	main(void)
{
	char	str1[50];
	char	str2[50];

	ft_memset(str1, 'a', 5);
	ft_memcpy(str2, str1, 5);
	printf("The string is: %s\n", str2);
	return (0);
}

//memmove
int	main(void)
{
	char	str1[50];
	char	str2[50];

	ft_memset(str1, 'a', 5);
	ft_memmove(str2, str1, 5);
	printf("The string is: %s\n", str2);
	return (0);
}

//strlcpy
int	main(void)
{
	char	src[50];
	char	dst[50];

	ft_memset(src, 'a', 5);
	ft_memset(dst, 'b', 5);
	printf("The source string is: %s\n", src);
	printf("The destination string is: %s\n", dst);
	printf("The length of the source string is: %zu\n", ft_strlcpy(dst, src, 5));
	printf("The destination string is: %s\n", dst);
	return (0);
}

//strlcat
int	main(void)
{
	char	src[50];
	char	dst[50];

	ft_strlcpy(src, "Hello World!", 50);
	ft_strlcpy(dst, "Goodbye!", 50);
	printf("The source is: %s\n", src);
	printf("The destination is: %s\n", dst);
	printf("The length of the destination is: %zu\n", ft_strlcat(dst, src, 50));
	printf("The destination is now: %s\n", dst);
	return (0);
}

//touppper
int	main(void)
{
	char	c;

	c = 'a';
	printf("The character is: %c\n", c);
	printf("The character after ft_toupper is: %c\n", ft_toupper(c));
	return (0);
}

//tolower
int	main(void)
{
	char	c;

	c = 'A';
	printf("The character is: %c\n", c);
	printf("The character after ft_tolower is: %c\n", ft_tolower(c));
	return (0);
}

//strchr
int	main(void)
{
	char	*str;
	char	*ptr;

	str = "Hello World!";
	ptr = ft_strchr(str, 'o');
	printf("The string is: %s\n", str);
	printf("The first occurence of 'o' is at: %s\n", ptr);
	return (0);
}

//strrchr
int	main(void)
{
	char	*str;
	char	*ptr;

	str = "Hello World!";
	ptr = ft_strrchr(str, 'o');
	printf("The string is: %s\n", str);
	printf("The pointer is: %s\n", ptr);
	return (0);
}

//strncmp
int	main(void)
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = "Hello";
	str2 = "Hello";
	n = 5;
	printf("The first string is: %s\n", str1);
	printf("The second string is: %s\n", str2);
	printf("The number of characters to compare is: %d\n", n);
	printf("The difference between the strings is: %d\n", ft_strncmp(str1, str2, n));
	return (0);
}

//memchr
int	main(void)
{
	char	*str;
	char	*ptr;
	char	c;

	str = "Hello World!";
	c = 'o';
	ptr = ft_memchr(str, c, 12);
	printf("The string is: %s\n", str);
	printf("The character is: %c\n", c);
	printf("The first occurence of the character is: %s\n", ptr);
	return (0);
}

//memcmp
int	main(void)
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = "Hello, World!";
	str2 = "Hello, World!";
	n = 5;
	printf("The first string is: %s\n", str1);
	printf("The second string is: %s\n", str2);
	printf("The number of bytes to compare is: %d\n", n);
	printf("The difference is: %d\n", ft_memcmp(str1, str2, n));
	return (0);
}

//strnstr
int	main(void)
{
	char	*big;
	char	*small;

	big = "Hello World";
	small = "World";
	printf("The big string is: %s\n", big);
	printf("The small string is: %s\n", small);
	printf("The string is: %s\n", ft_strnstr(big, small, 11));
	return (0);
}

//atoi
int	main(void)
{
	char	*str;

	str = "  -1234";
	printf("The string is: %s\n", str);
	printf("The number is: %d\n", ft_atoi(str));
	return (0);
}

//calloc
int	main(void)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)ft_calloc(10, sizeof(char));
	while (i < 10)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	free(str);
	return (0);
}

//strdup
int	main(void)
{
	char	*str = "Hello World!";
	char	*str2;

	str2 = ft_strdup(str);
	printf("Original: %s\n", str);
	printf("Copied: %s\n", str2);
	free(str2);
	return (0);
}

//ft_substr
int	main(void)
{
	char	*str = "Hello, World!";
	char	*substr = ft_substr(str, 7, 5);
	printf("%s\n", substr);
	free(substr);
	return (0);
}

//ft_strjoin
int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = " World!";
	char	*str3 = ft_strjoin(str1, str2);
	char	*str4 = ft_strjoin(NULL, str2);
	char	*str5 = ft_strjoin(str1, NULL);
	char	*str6 = ft_strjoin(NULL, NULL);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);
	printf("str5: %s\n", str5);
	printf("str6: %s\n", str6);
	free(str3);
	free(str4);
	free(str5);
	free(str6);
	return (0);
}

//ft_strtrim
int	main()
{
	char *s1 = "   Hello, World!   ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);
	printf("Original string: \"%s\"\n", s1);
	printf("Trimmed string: \"%s\"\n", trimmed);
	return 0;
}

//ft_split
int	main(void)
{
	char	**str;
	int		i;

	str = ft_split("Hello World, i'm     here!", ' ');
	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	free_all(str, i);
	return (0);
}

//ft_itoa
int	main(void)
{
	int	n;

	n = 123456;
	printf("The number is: %d\n", n);
	printf("The number as a string is: %s\n", ft_itoa(n));
	return (0);
}

//ft_strmapi
int	main(void)
{
	char	*str = "Hello World!";
	char	*newstr;

	newstr = ft_strmapi(str, ft_toupper);
	printf("%s\n", newstr);
	free(newstr);
	return (0);
}

//ft_striteri
int	main(void)
{
	char	str[] = "hola";
	void	(*f)(unsigned int, char*);

	f = &ft_try;
	ft_striteri(str, f);
	printf("%s\n", str);
	return (0);
}

//ft_putchar_fd
int	main(void)
{
	ft_putchar_fd('a', 1);
	return (0);
}

//ft_putstr_fd
int	main(void)
{
	char	*str = "Hello, World!";
	int		fd = 1;

	ft_putstr_fd(str, fd);
	return (0);
}

//ft_putendl_fd
int	main(void)
{
	char	*str;

	str = "Hello, World!";
	ft_putendl_fd(str, 1);
	return (0);
}

//ft_putnbr_fd
int	main(void)
{
	int	nb;

	nb = 123456;
	ft_putnbr_fd(nb, 1);
	return (0);
}

//ft_lstnew
int	main(void)
{
	t_list	*root;
	t_list	*new;

	root = ft_lstnew("Hello");
	new = ft_lstnew("World");
	printf("Root: %s\n", root->content);
	printf("New: %s\n", new->content);
	return (0);
}

//ft_lstadd_front
int	main(void)
{
	t_list	*root;
	t_list	*new;

	root = ft_lstnew("First element");
	new = ft_lstnew("Second element");
	ft_lstadd_front(&root, new);
	printf("The first element is: %s\n", (char *)root->content);
	printf("The second element is: %s\n", (char *)root->next->content);
	return (0);
}

//ft_lstsize
int main(void)
{
	// Create a test list
	t_list *list = malloc(sizeof(t_list));
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	// Initialize the list
	list->content = "Hello";
	list->next = node1;
	node1->content = "World";
	node1->next = node2;
	node2->content = "!";
	node2->next = node3;
	node3->content = NULL;
	node3->next = NULL;

	// Call ft_lstsize and print the result
	int size = ft_lstsize(list);
	printf("Size of the list: %d\n", size);

	// Free the memory
	free(node1);
	free(node2);
	free(node3);

	return 0;
}

//ft_lstlast
int	main(void)
{
	t_list	*root;
	t_list	*new;
	t_list	*new2;
	t_list	*new3;
	t_list	*last;

	root = ft_lstnew("First element");
	new = ft_lstnew("Second element");
	new2 = ft_lstnew("Third element");
	new3 = ft_lstnew("Fourth element");
	root->next = new;
	new->next = new2;
	new2->next = new3;
	new3->next = NULL;
	last = ft_lstlast(root);
	printf("The last element is: %s\n", (char *)last->content);
	return (0);
}

//ft_lstadd_back
int	main(void)
{
	t_list	*root;
	t_list	*new;

	root = ft_lstnew("First element");
	new = ft_lstnew("Second element");
	ft_lstadd_front(&root, new);
	printf("The first element is: %s\n", (char *)root->content);
	printf("The second element is: %s\n", (char *)root->next->content);
	return (0);
}

//ft_lstdelone
int main(void)
{
	// Create test elements
	int *data1 = malloc(sizeof(int));
	*data1 = 42;
	t_list *element1 = ft_lstnew(data1);

	int *data2 = malloc(sizeof(int));
	*data2 = 24;
	t_list *element2 = ft_lstnew(data2);

	int *data3 = malloc(sizeof(int));
	*data3 = 10;
	t_list *element3 = ft_lstnew(data3);

	// Print the content of the elements before deletion
	printf("Before deletion:\n");
	printf("Element 1: %d\n", *(int *)element1->content);
	printf("Element 2: %d\n", *(int *)element2->content);
	printf("Element 3: %d\n", *(int *)element3->content);

	// Delete element2
	ft_lstdelone(element2, custom_delete);

	// Print the content of the elements after deletion
	printf("After deletion:\n");
	printf("Element 1: %d\n", *(int *)element1->content);
	printf("Element 2: %d\n", *(int *)element2->content);
	printf("Element 3: %d\n", *(int *)element3->content);

	return 0;
}

//ft_lstclear
int main() {
	// Create a linked list of integers
	t_list *list = NULL;
	t_list *node1 = ft_lstnew(malloc(sizeof(int)));
	t_list *node2 = ft_lstnew(malloc(sizeof(int)));
	t_list *node3 = ft_lstnew(malloc(sizeof(int)));

	*(int *)(node1->content) = 1;
	*(int *)(node2->content) = 2;
	*(int *)(node3->content) = 3;

	node1->next = node2;
	node2->next = node3;

	list = node1;

	// Print the original list
	printf("Original List: ");
	t_list *current = list;
	while (current) {
		printf("%d ", *(int *)(current->content));
		current = current->next;
	}
	printf("\n");

	// Clear the list
	ft_lstclear(&list, deleteInt);

	// Print the cleared list
	printf("Cleared List: ");
	current = list;
	while (current) {
		printf("%d ", *(int *)(current->content));
		current = current->next;
	}
	printf("\n");

	return 0;
}

//ft_lstiter
int main(void)
{
	char str[] = "Hello, World!";
	
	ft_striteri(str, ft_try);
	
	printf("Modified string: %s\n", str);
	
	return 0;
}

//ft_lstmap
int main(void)
{
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");

	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);

	t_list *new_lst = ft_lstmap(node1, ft_strdup_wrapper, free);
	if (!new_lst)
	{
		// Handle allocation failure
		ft_lstclear(&node1, free);
		return (1);
	}

	printf("New list contents:\n");
	ft_lstiter(new_lst, ft_putstr_wrapper);

	printf("\nClearing original list\n");
	ft_lstclear(&node1, NULL); // Original list contents not dynamically allocated

	printf("Clearing new list\n");
	ft_lstclear(&new_lst, free); // New list contents dynamically allocated

	printf("Finished\n");
	return (0);
}