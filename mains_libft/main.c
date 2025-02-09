#include "libft.h"
#include <stdio.h>
#include <string.h>

void print_result(const char* test_name, int result) {
    printf("%s: %d\n", test_name, result);
}

void del(void *content) {
    free(content);
}

void iter(void *content) {
    char *str = (char*)content;
    while (*str) {
        *str = ft_toupper(*str);
        str++;
    }
}

void *map(void *content) {
    char *str = strdup((char*)content);
    char *ptr = str;
    while (*ptr) {
        *ptr = ft_toupper(*ptr);
        ptr++;
    }
    return str;
}

void	ft_try(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
}

int main(void)
{
    int tests_count = 0;  // Add counter at the start
    printf("\n\033[1;36m=== LIBFT FUNCTION TESTS ===\033[0m\n\n");

    // Part 1 - Character tests
    printf("\033[1;33m=== Character Functions ===\033[0m\n");
    printf("• ft_isalpha:\n");
    tests_count++;
    printf("  'A' → %s\n  'z' → %s\n  '1' → %s\n", 
        ft_isalpha('A') ? "true" : "false",
        ft_isalpha('z') ? "true" : "false",
        ft_isalpha('1') ? "true" : "false");
    
    printf("\n• ft_isdigit:\n");
    tests_count++;
    printf("  '1' → %s\n  'a' → %s\n", 
        ft_isdigit('1') ? "true" : "false",
        ft_isdigit('a') ? "true" : "false");
    
    printf("\n• ft_isalnum:\n");
    tests_count++;
    printf("  'a' → %s\n  '1' → %s\n  '$' → %s\n", 
        ft_isalnum('a') ? "true" : "false",
        ft_isalnum('1') ? "true" : "false",
        ft_isalnum('$') ? "true" : "false");
    
    printf("\n• ft_isascii:\n");
    tests_count++;
    printf("  127 → %s\n  0 → %s\n  128 → %s\n", 
        ft_isascii(127) ? "true" : "false",
        ft_isascii(0) ? "true" : "false",
        ft_isascii(128) ? "true" : "false");
    
    printf("\n• ft_isprint:\n");
    tests_count++;
    printf("  ' ' → %s\n  '\\n' → %s\n", 
        ft_isprint(' ') ? "true" : "false",
        ft_isprint('\n') ? "true" : "false");
    
    printf("\n• ft_toupper:\n");
    tests_count++;
    printf("  'a' → '%c'\n  'A' → '%c'\n", 
        ft_toupper('a'), ft_toupper('A'));
    
    printf("\n• ft_tolower:\n");
    tests_count++;
    printf("  'A' → '%c'\n  'a' → '%c'\n", 
        ft_tolower('A'), ft_tolower('a'));

    // String length
    printf("\n\033[1;33m=== String Length ===\033[0m\n");
    printf("• ft_strlen:\n");
    tests_count++;
    printf("  \"hello\" → %zu\n", ft_strlen("hello"));

    // Memory functions
    printf("\n\033[1;33m=== Memory Functions ===\033[0m\n");
    char mem1[10] = "hello";
    char mem2[10];
    
    printf("• ft_memset:\n");
    tests_count++;
    ft_memset(mem1, 'x', 5);
    printf("  \"hello\" with 'x' for 5 bytes → \"%s\"\n", mem1);
    
    printf("\n• ft_bzero:\n");
    tests_count++;
    ft_bzero(mem1, 5);
    printf("  First 5 bytes → [%d,%d,%d,%d,%d]\n", 
        mem1[0], mem1[1], mem1[2], mem1[3], mem1[4]);
    
    printf("\n• ft_memcpy:\n");
    tests_count++;
    ft_memcpy(mem2, "hello", 5);
    printf("  Copy \"hello\" → \"%s\"\n", mem2);
    
    printf("\n• ft_memmove:\n");
    tests_count++;
    ft_memmove(mem2 + 1, mem2, 4);
    printf("  Move 4 bytes → \"%s\"\n", mem2);

    // String operations
    printf("\n\033[1;33m=== String Operations ===\033[0m\n");
    char str1[20] = "hello";
    
    printf("• ft_strlcpy:\n");
    tests_count++;
    size_t cp_len = ft_strlcpy(str1, "test", 5);
    printf("  Copy \"test\" → \"%s\" (returned %zu)\n", str1, cp_len);
    
    printf("\n• ft_strlcat:\n");
    tests_count++;
    size_t cat_len = ft_strlcat(str1, "ing", 20);
    printf("  Concatenate \"ing\" → \"%s\" (returned %zu)\n", str1, cat_len);
    
    printf("\n• ft_strchr:\n");
    tests_count++;
    printf("  Find 'l' in \"hello\" → \"%s\"\n", ft_strchr("hello", 'l'));
    
    printf("\n• ft_strrchr:\n");
    tests_count++;
    printf("  Find last 'l' in \"hello\" → \"%s\"\n", ft_strrchr("hello", 'l'));
    
    printf("\n• ft_strncmp:\n");
    tests_count++;
    printf("  Compare \"hello\" and \"hell\" → %d (expect 0)\n", ft_strncmp("hello", "hell", 4));
    
    printf("\n• ft_memchr:\n");
    tests_count++;
    printf("  Find 'l' in \"hello\" → %s\n", (char*)ft_memchr("hello", 'l', 5));
    
    printf("\n• ft_memcmp:\n");
    tests_count++;
    printf("  Compare \"hello\" and \"hell\" → %d (expect 0)\n", ft_memcmp("hello", "hell", 4));
    
    printf("\n• ft_strnstr:\n");
    tests_count++;
    printf("  Find \"world\" in \"hello world\" → %s\n", ft_strnstr("hello world", "world", 11));
    
    // Conversion
    printf("\n\033[1;33m=== Conversion Functions ===\033[0m\n");
    printf("• ft_atoi:\n");
    tests_count++;
    printf("  \"-123\" → %d\n", ft_atoi("-123"));

    char *num = ft_itoa(-123);
    tests_count++;
    printf("\n• ft_itoa:\n");
    printf("  -123 → \"%s\"\n", num);
    free(num);

    // Memory allocation
    printf("\n\033[1;33m=== Memory Allocation ===\033[0m\n");
    tests_count++;
    void *ptr = ft_calloc(5, sizeof(char));
    printf("• ft_calloc:\n");
    printf("  Allocated 5 bytes → [%d,%d,%d,%d,%d]\n", 
        ((char*)ptr)[0], ((char*)ptr)[1], ((char*)ptr)[2], 
        ((char*)ptr)[3], ((char*)ptr)[4]);
    free(ptr);
    
    char *dup = ft_strdup("test");
    tests_count++;
    printf("• ft_strdup:\n");
    printf("  \"test\" → \"%s\"\n", dup);
    free(dup);

    // Part 2
    printf("\n\033[1;33m=== Part 2 Functions ===\033[0m\n");
    tests_count++;
    char *sub = ft_substr("hello world", 6, 5);
    printf("• ft_substr:\n");
    printf("  \"hello world\", 6, 5 → \"%s\"\n", sub);
    free(sub);
    
    char *join = ft_strjoin("hello ", "world");
    tests_count++;
    printf("• ft_strjoin:\n");
    printf("  \"hello \" and \"world\" → \"%s\"\n", join);
    free(join);
    
    char *trim = ft_strtrim("xxxhelloxxx", "x");
    tests_count++;
    printf("• ft_strtrim:\n");
    printf("  \"  hello  \", \" \" → \"%s\"\n", trim);
    free(trim);
    
    char **split = ft_split("hello,world,test", ',');
    tests_count++;
    printf("• ft_split:\n");
    printf("  \"hello,world,test\", ',' → [\"%s\", \"%s\", \"%s\"]\n", 
        split[0], split[1], split[2]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    
    char *mapped = ft_strmapi("hello", (char (*)(unsigned int, char))ft_toupper);
    tests_count++;
    printf("• ft_strmapi:\n");
    printf("  \"hello\", ft_toupper → \"%s\"\n", mapped);
    free(mapped);


    // String iteration
    printf("\n\033[1;33m=== String Iteration ===\033[0m\n");
    printf("• ft_striteri:\n");
    tests_count++;
   	char	str[10] = "hello";

	ft_striteri(str, ft_try);
	printf("  Iterating over \"hello\" → \"%s\"\n", str);
	printf("  Actual output:\n");
	ft_putchar_fd('X', 1);
	printf("\n");

    // Output functions
    printf("\n\033[1;33m=== Output Functions ===\033[0m\n");
    printf("• ft_putchar_fd:\n");
    tests_count++;
    printf("  Expected output: \nX\n");
    printf("  Actual output:\n");
    ft_putchar_fd('X', 1);
    printf("\n");
    
    printf("\n• ft_putstr_fd:\n");
    tests_count++;
    printf("  Expected output: \ntest string\n");
    printf("  Actual output:\n");
    ft_putstr_fd("test string", 1);
    printf("\n");
    
    printf("\n• ft_putendl_fd:\n");
    tests_count++;
    printf("  Expected output:\ntest string with newline\n");
    printf("  Actual output:\n");
    ft_putendl_fd("test string with newline", 1);
    
    printf("\n• ft_putnbr_fd:\n");
    tests_count++;
    printf("  Expected output:\n-123\n");
    printf("  Actual output:\n");
    ft_putnbr_fd(-123, 1);
    printf("\n");

    // Bonus part - List functions
    printf("\n\033[1;33m=== Bonus List Functions ===\033[0m\n");
    tests_count++;
    t_list *lst = ft_lstnew(strdup("test1"));
    printf("• ft_lstnew:\n");
    printf("  Creating first node...\n");
    printf("  → Node content: \"%s\"\n", (char*)lst->content);
    
    ft_lstadd_front(&lst, ft_lstnew(strdup("test2")));
    tests_count++;
    printf("\n• ft_lstadd_front:\n");
    printf("  Adding \"test2\" to front of list...\n");
    printf("  → List now starts with: \"%s\"\n", (char*)lst->content);
    
    printf("\n• ft_lstsize:\n");
    tests_count++;
    printf("  Counting nodes in list...\n");
    printf("  → Total nodes: %d\n", ft_lstsize(lst));
    
    t_list *last = ft_lstlast(lst);
    tests_count++;
    printf("\n• ft_lstlast:\n");
    printf("  Finding last node in list...\n");
    printf("  → Current list: \"test2\" → \"test1\"\n");
    printf("  → Last node contains: \"%s\"\n", (char*)last->content);
    
    ft_lstadd_back(&lst, ft_lstnew(strdup("test3")));
    tests_count++;
    printf("\n• ft_lstadd_back:\n");
    printf("  Adding \"test3\" to end of list...\n");
    printf("  → New last node contains: \"%s\"\n", (char*)ft_lstlast(lst)->content);
    
    printf("\n• ft_lstiter:\n");
    tests_count++;
    printf("  Converting all nodes to uppercase...\n");
    printf("  → Current list: ");
    ft_lstiter(lst, iter);
    t_list *current = lst;
    while (current) {
        printf("\"%s\"", (char*)current->content);
        if (current->next)
            printf(" → ");
        current = current->next;
    }
    printf("\n");
    
    t_list *mapped_lst = ft_lstmap(lst, map, del);
    tests_count++;
    printf("\n• ft_lstmap:\n");
    printf("  Creating new list with uppercase conversion...\n");
    printf("  → First node of new list: \"%s\"\n", (char*)mapped_lst->content);
    
    ft_lstclear(&mapped_lst, del);
    printf("\n  Clearing mapped list from memory...\n");
    printf("  → Mapped list pointer after clear: %p\n", (void*)mapped_lst);
    
    printf("\n• ft_lstdelone:\n");
    tests_count++;
    printf("  Testing single node deletion...\n");
    printf("  → Creating and immediately freeing a test node\n");
    ft_lstdelone(ft_lstnew(strdup("test")), del);
    
    printf("\n• ft_lstclear:\n");
    tests_count++;
    printf("  Clearing entire original list...\n");
    ft_lstclear(&lst, del);
    printf("  → List has been freed from memory\n");

    printf("\n\033[1;36m=== TESTING COMPLETE ===\033[0m\n");
    printf("\033[1;32mTested %d functions in total\033[0m\n\n", tests_count);
    return (0);
}