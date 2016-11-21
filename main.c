/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <clegoube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:45:39 by clegoube          #+#    #+#             */
/*   Updated: 2016/11/09 16:55:36 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	// /*
	// ** PUTCHAR
	// */
	// printf("\n--------PUTCHAR----------\n");
	// printf("ft_putchar 'b': \n");
	// ft_putchar('b');
	// /*
	// ** PUTCHAR_FD
	// */
	// printf("\n--------PUTCHAR_FD----------\n");
	// printf("ft_putchar_fd 'z', 2: \n");
	// ft_putchar_fd('z',2);
	// /*
	// ** PUTSTR
	// */
	// printf("\n\n--------PUTSTR------------");
	// printf("\nft_putstr 'hello': \n");
	// ft_putstr("hello");
	// /*
	// ** PUTSTR_FD
	// */
	// printf("\n\n--------PUTSTR_FD------------");
	// printf("\n ft_putstr_fd 'hello', 2: \n");
	// ft_putstr_fd("hello", 2);
	// /*
	// ** PUTENDL
	// */
	// printf("\n\n--------PUTENDL------------");
	// printf("\nft_putendl 'hello': \n");
	// ft_putendl("hello");
	// /*
	// ** PUTENDL_FD
	// */
	// printf("\n\n--------PUTENDL_FD------------");
	// printf("\nft_putendl_fd 'hello', 2: \n");
	// ft_putendl_fd("hello", 2);
	// /*
	// ** PUTNBR
	// */
	// printf("\n\n--------PUTNBR------------");
	// printf("\nft_putnbr : -2147483647\n");
	// ft_putnbr(-2147483647);
	// printf("\nft_putnbr : -2147483648\n");
	// ft_putnbr(-2147483648);
	// printf("\nft_putnbr : 2147483647\n");
	// ft_putnbr(2147483647);
	// /*
	// ** PUTNBR_FD
	// */
	// printf("\n\n--------PUTNBR_FD------------");
	// printf("\nft_putnbr_fd : -2147483647, 2\n");
	// ft_putnbr_fd(-2147483647, 2);
	// printf("\nft_putnbr_fd : -2147483648, 2\n");
	// ft_putnbr_fd(-2147483648, 2);
	// printf("\nft_putnbr_fd : 2147483647, 2\n");
	// ft_putnbr_fd(2147483647, 2);
	/*
	** ITOA
	*/
	printf("\n\n---------ITOA---------");
	printf("\nft_itoa : -342\n");
	printf("%s", ft_itoa(-342));
	printf("\nft_itoa : 26578\n");
	printf("%s", ft_itoa(26578));
	printf("\nft_itoa : 2147483647\n");
	printf("%s", ft_itoa(2147483647));
	printf("\nft_itoa : -2147483648\n");
	printf("%s", ft_itoa(-2147483648));
	printf("\nft_itoa : 2147483648\n");
	printf("%s", ft_itoa(2147483648));
	printf("\nft_itoa : -2147483647\n");
	printf("%s", ft_itoa(-2147483647));
	// /*
	// ** ATOI
	// */
	// printf("\n\n--------ATOI------------");
	// printf("\n ft_atoi : 42\n");
	// printf("%d\n", ft_atoi("42"));
	// printf("%d", atoi("42"));
	//
	// printf("\n ft_atoi : ---342\n");
	// printf("%d\n", ft_atoi("---342"));
	// printf("%d", atoi("---342"));
	//
	// printf("\n ft_atoi : -645\n");
	// printf("%d\n", ft_atoi("-645"));
	// printf("%d", atoi("-645"));
	//
	// printf("\n ft_atoi : A-645\n");
	// printf("%d\n", ft_atoi("A-645"));
	// printf("%d", atoi("A-645"));
	//
	// printf("\n ft_atoi : +*=/L    LK26578\n");
	// printf("%d\n", ft_atoi("+*=/L    LK26578"));
	// printf("%d", atoi("+*=/L    LK26578"));
	//
	// printf("\n ft_atoi : +*=/L26578\n");
	// printf("%d\n", ft_atoi("+*=/L26578"));
	// printf("%d", atoi("+*=/L26578"));
	//
	// printf("\n ft_atoi : 		  2147483647\n");
	// printf("%d\n", ft_atoi("		  2147483647"));
	// printf("%d", atoi("		  2147483647"));
	//
	// printf("\n ft_atoi : -2147483648\n");
	// printf("%d\n", ft_atoi("-2147483648"));
	// printf("%d", atoi("-2147483648"));
	//
	// printf("\n ft_atoi : 21474  gegev83648\n");
	// printf("%d\n", ft_atoi("21474  gegev83648"));
	// printf("%d", atoi("21474  gegev83648"));
	//
	// printf("\n ft_atoi : hoyoyh-3562\n");
	// printf("%d\n", ft_atoi("hoyoyh-3562"));
	// printf("%d", atoi("hoyoyh-3562"));
	//
	// /*
	// ** STRSTR
	// */
	// printf("\n\n--------STRSTR------------");
	// printf("\n ft_strstr : 'Hello World', 'World'\n");
	// printf("%s\n", ft_strstr("Hello World", "World"));
	// printf("%s", strstr("Hello World", "World"));
	//
	// printf("\n ft_strstr : 'HelWo World', 'World'\n");
	// printf("%s\n", ft_strstr("HelWo World", "World"));
	// printf("%s", strstr("HelWo World", "World"));
	//
	// printf("\n ft_strstr : 'Hello World', ''\n");
	// printf("%s\n", ft_strstr("Hello World", ""));
	// printf("%s", strstr("Hello World", ""));
	//
	// printf("\n ft_strstr : 'World', 'Hello World'\n");
	// printf("%s\n", ft_strstr("World", "Hello World"));
	// printf("%s", strstr("World", "Hello World"));
	//
	// /*
	// ** STRNSTR
	// */
	// printf("\n\n--------STRNSTR------------");
	// printf("\n ft_strnstr : 'Hello World', 'World', 3\n");
	// printf("%s\n", ft_strnstr("Hello World", "World", 3));
	// printf("%s", strnstr("Hello World", "World", 3));
	//
	// printf("\n ft_strnstr : 'Hello World', 'Wo', 11\n");
	// printf("%s\n", ft_strnstr("Hello World", "Wo", 11));
	// printf("%s", strnstr("Hello World", "Wo", 11));
	//
	// printf("\n ft_strnstr : 'Hello World', '', 1\n");
	// printf("%s\n", ft_strnstr("Hello World", "", 1));
	// printf("%s", strnstr("Hello World", "", 1));
	//
	// printf("\n ft_strnstr : 'World', 'Hello World', 6\n");
	// printf("%s\n", ft_strnstr("World", "Hello World", 6));
	// printf("%s", strnstr("World", "Hello World", 6));
	//
	// printf("\n ft_strnstr : 'MZIRIBMZIRIBMZE123', 'MZIRIBMZE', strlen('MZIRIBMZE')\n");
	// printf("taille : %lu \n", strlen("MZIRIBMZE"));
	// printf("%s\n", ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", strlen("MZIRIBMZE")));
	// printf("%s", strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", strlen("MZIRIBMZE")));
	// /*
	// ** STRCMP
	// */
	// printf("\n\n--------STRCMP------------");
	// printf("\n ft_strcmp : 'Hello World', 'Hello You'\n");
	// printf("%d\n", ft_strcmp("Hello World", "Hello You"));
	// printf("%d", strcmp("Hello World", "Hello You"));
	//
	// printf("\n ft_strcmp : 'Salut ca va', 'Salut et toi'\n");
	// printf("%d\n", ft_strcmp("Salut ca va", "Salut et toi"));
	// printf("%d", strcmp("Salut ca va", "Salut et toi"));
	//
	// printf("\n ft_strcmp : 'Hello World', ' '\n");
	// printf("%d\n", ft_strcmp("Hello World", ""));
	// printf("%d", strcmp("Hello World", ""));
	//
	// printf("\n ft_strcmp : 'Hel', 'Hello'\n");
	// printf("%d\n", ft_strcmp("Hel", "Hello"));
	// printf("%d", strcmp("Hel", "Hello"));
	//
	// printf("\n ft_strcmp : '', 'Hello'\n");
	// printf("%d\n", ft_strcmp("", "Hello"));
	// printf("%d", strcmp("", "Hello"));
	// /*
	// ** STRNCMP
	// */
	// printf("\n\n--------STRNCMP------------");
	// printf("\n ft_strncmp : 'Hello World', 'Hello You', 3\n");
	// printf("%d\n", ft_strncmp("Hello World", "Hello You", 3));
	// printf("%d", strncmp("Hello World", "Hello You", 3));
	//
	// printf("\n ft_strncmp : 'Salut ca va', 'Salut et toi', 8\n");
	// printf("%d\n", ft_strncmp("Salut ca va", "Salut et toi", 8));
	// printf("%d", strncmp("Salut ca va", "Salut et toi", 8));
	//
	// printf("\n ft_strncmp : 'Hello World', ' ', 3\n");
	// printf("%d\n", ft_strncmp("Hello World", "", 3));
	// printf("%d", strncmp("Hello World", "", 3));
	//
	// printf("\n ft_strncmp : 'Hel', 'Hello', 3\n");
	// printf("%d\n", ft_strncmp("Hel", "Hello", 3));
	// printf("%d", strncmp("Hel", "Hello", 3));
	//
	// printf("\n ft_strncmp : '', 'Hello', 3\n");
	// printf("%d\n", ft_strncmp("", "Hello", 3));
	// printf("%d", strncmp("", "Hello", 3));
	// /*
	// ** STRDUP
	// */
	// printf("\n\n--------STRDUP------------");
	// printf("\n ft_strdup : 'Hello World'\n");
	// printf("%s\n", ft_strdup("Hello World"));
	// printf("%s", strdup("Hello World"));
	//
	// printf("\n ft_strdup : ''\n");
	// printf("%s\n", ft_strdup(""));
	// printf("%s", strdup(""));
	//
	// printf("\n ft_strdup : 'Bonjour'\n");
	// printf("%s\n", ft_strdup("Bonjour"));
	// printf("%s", strdup("Bonjour"));
	// /*
	// ** STRCPY
	// */
	// printf("\n\n--------STRCPY------------");
	// printf("\n ft_strcpy : 'Hello Fred', 'Hola '\n");
	// char dest[50] = "Hello Fred";
	// char *src = "Hola ";
	// printf("%s\n", ft_strcpy(dest, src));
	// printf("%s", strcpy(dest, src));
	// /*
	// ** STRNCPY
	// */
	// printf("\n\n--------STRNCPY------------");
	// char dest2[50] = "Hello Fred";
	// char *src2 = "Hola ";
	// printf("\n ft_strncpy : 'Hello Fred', 'Hola ', 3\n");
	// printf("%s\n", ft_strncpy(dest2, src2, 3));
	// printf("%s", strncpy(dest2, src2, 3));
	//
	// printf("\n ft_strncpy : 'Hello Fred', 'Hola ', 6\n");
	// printf("%s\n", ft_strncpy(dest2, src2, 6));
	// printf("%s", strncpy(dest2, src2, 6));
	//
	// char dest3[5] = "Hi";
	// char *src3 = "Hello Fred ";
	// printf("\n ft_strncpy : 'Hi', 'Hello Fred', 5\n");
	// printf("%s\n", ft_strncpy(dest3, src3, 5));
	// printf("%s", strncpy(dest3, src3, 5));
	// /*
	// ** STRCAT
	// */
	// printf("\n\n--------STRCAT------------");
	// printf("\n ft_strcat : 'Hello Fred ', 'How are you '\n");
	// char dest4[50] = "Hello Fred ";
	// char *src4 = "How are you ";
	// printf("%s\n", ft_strcat(dest4, src4));
	// printf("%s", strcat(dest4, src4));
	//
	// printf("\n ft_strcat : 'Hello Fred ', ''\n");
	// char dest5[50] = "Hello Fred ";
	// char *src5 = "";
	// printf("%s\n", ft_strcat(dest5, src5));
	// printf("%s", strcat(dest5, src5));
	// /*
	// ** STRNCAT
	// */
	// printf("\n\n--------STRNCAT------------");
	// printf("\n ft_strncat : 'Hello Fred ', 'How are you ', 3\n");
	// char dest6[50] = "Hello Fred ";
	// char *src6 = "How are you ";
	// printf("%s\n", ft_strncat(dest6, src6, 3));
	// printf("%s", strncat(dest6, src6, 3));
	//
	// printf("\n ft_strncat : 'Hello Fred ', '', 3\n");
	// char dest7[50] = "Hello Fred ";
	// char *src7 = "";
	// printf("%s\n", ft_strncat(dest7, src7, 3));
	// printf("%s", strncat(dest7, src7, 3));
	// /*
	// ** STRLCAT
	// */
	// printf("\n\n--------STRLCAT------------");
	// printf("\n ft_strlcat : 'Hello Fred ', 'How are you ', 3\n");
	// char dest8[50] = "Hello Fred ";
	// char *src8 = "How are you ";
	// printf("%zu\n", ft_strlcat(dest8, src8, 3));
	// printf("%lu", strlcat(dest8, src8, 3));
	//
	// printf("\n ft_strlcat : 'Hello Fred ', '', 6\n");
	// char dest9[50] = "Hello Fred ";
	// char *src9 = "";
	// printf("%zu\n", ft_strlcat(dest9, src9, 6));
	// printf("%lu", strlcat(dest9, src9, 6));
	//
	// printf("\n ft_strlcat : 'Hello', 'How are you ', 4\n");
	// char dest10[50] = "Hello";
	// char *src10 = "How are you ";
	// printf("%zu\n", ft_strlcat(dest10, src10, 4));
	// printf("%lu", strlcat(dest10, src10, 4));
	// /*
	// ** STRCHR
	// */
	// printf("\n\n--------STRCHR------------");
	// printf("\n ft_strchr : 'Hello Fred ', 101 -> 'e'\n");
	// printf("%s\n", ft_strchr("Hello Fred ", 101));
	// printf("%s", strchr("Hello Fred ", 101));
	//
	// printf("\n ft_strchr : 'Hello Fred ', 70 -> 'F'\n");
	// printf("%s\n", ft_strchr("Hello Fred ", 70));
	// printf("%s", strchr("Hello Fred ", 70));
	//
	// printf("\n ft_strchr : 'Hello Fred ', 122 -> 'z'\n");
	// printf("%s\n", ft_strchr("Hello Fred ", 122));
	// printf("%s", strchr("Hello Fred ", 122));
	//
	// printf("\n ft_strchr : 'Hello Fred ', 0 -> '0'\n");
	// printf("%s\n", ft_strchr("Hello Fred ", 0));
	// printf("%s", strchr("Hello Fred ", 0));
	// /*
	// ** STRRCHR
	// */
	// printf("\n\n--------STRRCHR------------");
	// printf("\n ft_strrchr : 'Hello Fred ', 101 -> 'e'\n");
	// printf("%s\n", ft_strrchr("Hello Fred ", 101));
	// printf("%s", strrchr("Hello Fred ", 101));
	//
	// printf("\n ft_strrchr : 'Hello Fred ', 70 -> 'F'\n");
	// printf("%s\n", ft_strrchr("Hello Fred ", 70));
	// printf("%s", strrchr("Hello Fred ", 70));
	//
	// printf("\n ft_strrchr : 'Hello Fred ', 122 -> 'z'\n");
	// printf("%s\n", ft_strrchr("Hello Fred ", 122));
	// printf("%s", strrchr("Hello Fred ", 122));
	//
	// printf("\n ft_strrchr : 'Hello Fred ', 0 -> '0'\n");
	// printf("%s\n", ft_strrchr("Hello Fred ", 0));
	// printf("%s", strrchr("Hello Fred ", 0));
	//
	// /*
	// ** ISALPHA
	// */
	// printf("\n\n--------ISALPHA------------");
	// printf("\n ft_isalpha : 101 -> 'e'\n");
	// printf("%d\n", ft_isalpha(101));
	// printf("%d", isalpha(101));
	//
	// printf("\n ft_isalpha : 122 -> 'z'\n");
	// printf("%d\n", ft_isalpha(122));
	// printf("%d", isalpha(122));
	//
	// printf("\n ft_isalpha : 70 -> 'F'\n");
	// printf("%d\n", ft_isalpha(70));
	// printf("%d", isalpha(70));
	//
	// printf("\n ft_isalpha : 59 -> ';'\n");
	// printf("%d\n", ft_isalpha(59));
	// printf("%d", isalpha(59));
	//
	// printf("\n ft_isalpha : 125 -> '}'\n");
	// printf("%d\n", ft_isalpha(125));
	// printf("%d", isalpha(125));
	// /*
	// ** ISDIGIT
	// */
	// printf("\n\n--------ISDIGIT------------");
	// printf("\n ft_isdigit : 101 -> 'e'\n");
	// printf("%d\n", ft_isdigit(101));
	// printf("%d", isdigit(101));
	//
	// printf("\n ft_isdigit : 52 -> '4'\n");
	// printf("%d\n", ft_isdigit(52));
	// printf("%d", isdigit(52));
	//
	// printf("\n ft_isdigit : 70 -> 'F'\n");
	// printf("%d\n", ft_isdigit(70));
	// printf("%d", isdigit(70));
	//
	// printf("\n ft_isdigit : 57 -> '9'\n");
	// printf("%d\n", ft_isdigit(57));
	// printf("%d", isdigit(57));
	//
	// printf("\n ft_isdigit : 125 -> '}'\n");
	// printf("%d\n", ft_isdigit(125));
	// printf("%d", isdigit(125));
	// /*
	// ** ISALNUM
	// */
	// printf("\n\n--------ISALNUM------------");
	// printf("\n ft_isalnum : 101 -> 'e'\n");
	// printf("%d\n", ft_isalnum(101));
	// printf("%d", isalnum(101));
	//
	// printf("\n ft_isalnum : 52 -> '4'\n");
	// printf("%d\n", ft_isalnum(52));
	// printf("%d", isalnum(52));
	//
	// printf("\n ft_isalnum : 70 -> 'F'\n");
	// printf("%d\n", ft_isalnum(70));
	// printf("%d", isalnum(70));
	//
	// printf("\n ft_isalnum : 57 -> '9'\n");
	// printf("%d\n", ft_isalnum(57));
	// printf("%d", isalnum(57));
	//
	// printf("\n ft_isalnum : 125 -> '}'\n");
	// printf("%d\n", ft_isalnum(125));
	// printf("%d", isalnum(125));
	// /*
	// ** ISASCII
	// */
	// printf("\n\n--------ISASCII------------");
	// printf("\n ft_isascii : 101 -> 'e'\n");
	// printf("%d\n", ft_isascii(101));
	// printf("%d", isascii(101));
	//
	// printf("\n ft_isascii : 52 -> '4'\n");
	// printf("%d\n", ft_isascii(52));
	// printf("%d", isascii(52));
	//
	// printf("\n ft_isascii : 70 -> 'F'\n");
	// printf("%d\n", ft_isascii(70));
	// printf("%d", isascii(70));
	//
	// printf("\n ft_isascii : 57 -> '9'\n");
	// printf("%d\n", ft_isascii(57));
	// printf("%d", isascii(57));
	//
	// printf("\n ft_isascii : 125 -> '}'\n");
	// printf("%d\n", ft_isascii(125));
	// printf("%d", isascii(125));
	// /*
	// ** ISPRINT
	// */
	// printf("\n\n--------ISPRINT-----------");
	// printf("\n ft_isprint : 25 -> 'em'\n");
	// printf("%d\n", ft_isprint(25));
	// printf("%d", isprint(25));
	//
	// printf("\n ft_isprint : 52 -> '4'\n");
	// printf("%d\n", ft_isprint(52));
	// printf("%d", isprint(52));
	// return (0);
	// /*
	// ** TOUPPER
	// */
	// printf("\n\n--------TOUPPER-----------");
	// printf("\n ft_toupper : 98 -> 'b'\n");
	// printf("%d\n", ft_toupper(98));
	// printf("%d", toupper(98));
	//
	// printf("\n ft_toupper : 52 -> '4'\n");
	// printf("%d\n", ft_toupper(52));
	// printf("%d", toupper(52));
	//
	// printf("\n ft_toupper : 108 -> 'l'\n");
	// printf("%d\n", ft_toupper(108));
	// printf("%d", toupper(108));
	// /*
	// ** TOLOWER
	// */
	// printf("\n\n--------TOLOWER-----------");
	// printf("\n ft_tolower : 67 -> 'C'\n");
	// printf("%d\n", ft_tolower(67));
	// printf("%d", tolower(67));
	//
	// printf("\n ft_tolower : 77 -> 'M'\n");
	// printf("%d\n", ft_tolower(77));
	// printf("%d", tolower(77));
	//
	// printf("\n ft_tolower : 108 -> 'l'\n");
	// printf("%d\n", ft_tolower(108));
	// printf("%d", tolower(108));
	// /*
	// ** MEMSET
	// */
	// printf("\n\n--------MEMSET-----------");
	// printf("\n ft_memset : 'Salut', 'o', 3\n");
	// char string[50] = "Salut";
	// printf("%s\n", ft_memset(string, 'o', 3));
	// printf("%s", memset(string, 'o', 3));
	//
	// printf("\n ft_memset : 'Salut', 'v', 5\n");
	// printf("%s\n", ft_memset(string, 'v', 5));
	// printf("%s", memset(string, 'v', 5));
	//
	// printf("\n ft_memset : 'Salut', 'k', 2\n");
	// printf("%s\n", ft_memset(string, 'k', 2));
	// printf("%s", memset(string, 'k', 2));
	// /*
	// ** BZERO
	// */
	// printf("\n\n--------BZERO-----------");
	// printf("\n ft_bzero : 'Salut', 3\n");
	// char string2[50] = "Salut";
	// ft_bzero(string2, 3);
	// printf("%s\n",string2 );
	// /*
	// ** MEMCPY
	// */
	// printf("\n\n--------MEMCPY-----------");
	// printf("\n ft_memcpy : 'Salut', 'Hi' , 2\n");
	// char dest11[50] = "Salut";
	// char *src11 = "Hi";
	// printf("%s\n",ft_memcpy(dest11, src11, 2));
	// printf("%s", memcpy(dest11, src11, 2));
	//
	// printf("\n ft_memcpy : 'Salut ca va', 'Hello!' , 5\n");
	// char dest12[50] = "Salut ca va";
	// char *src12 = "Hello!";
	// printf("%s\n",ft_memcpy(dest12, src12, 5));
	// printf("%s", memcpy(dest12, src12, 5));
	// /*
	// ** MEMCCPY
	// */
	// printf("\n\n--------MEMCCPY-----------");
	// printf("\n ft_memccpy : 'Salut', 'Hi' , 108, 2\n");
	// char dest11[50] = "Salut";
	// char *src11 = "Hi";
	// printf("%s\n",ft_memccpy(dest11, src11,108,2));
	// printf("%s", memccpy(dest11, src11, 108,2));
	//
	// printf("\n ft_memccpy : 'Salut ca va', 'Hello!', 108, 5\n");
	// char dest12[50] = "Salut ca va";
	// char *src12 = "Hello!";
	// printf("%s\n",ft_memccpy(dest12, src12, 108,5));
	// printf("%s", memccpy(dest12, src12, 108,5));
	// /*
	// ** MEMMOVE
	// */
	// printf("\n\n--------MEMMOVE-----------");
	// printf("\n ft_memmove : 'Salut', 'Hi' ,  2\n");
	// char dest11[50] = "Salut";
	// char *src11 = "Hi";
	// printf("%s\n",ft_memmove(dest11, src11,2));
	// printf("%s", memmove(dest11, src11, 2));
	//
	// printf("\n ft_memmove : 'Salut ca va', 'Hello!',  8\n");
	// char dest12[50] = "Salut ca va";
	// char *src12 = "Hello!";
	// printf("%s\n",ft_memmove(dest12, src12, 8));
	// printf("%s", memmove(dest12, src12, 8));
	// /*
	// ** MEMCHR
	// */
	// printf("\n\n--------MEMCHR-----------");
	// printf("\n ft_memchr : 'Salut', 108 -> 'l' ,  6\n");
	// char s[50] = "Salut";
	// printf("%s\n",ft_memchr(s, 108, 6));
	// printf("%s", memchr(s, 108, 6));
	//
	// printf("\n ft_memchr : 'Hello World', 87 -> 'W' ,  8\n");
	// char s2[50] = "Hello World";
	// printf("%s\n",ft_memchr(s2, 87, 8));
	// printf("%s", memchr(s2, 87, 8));
	// /*
	// ** MEMCHR
	// */
	// printf("\n\n--------MEMCHR-----------");
	// printf("\n ft_memchr : 'Salut', 108 -> 'l' ,  6\n");
	// char s[50] = "Salut";
	// printf("%s\n",ft_memchr(s, 108, 6));
	// printf("%s", memchr(s, 108, 6));
	//
	// printf("\n ft_memchr : 'Hello World', 87 -> 'W' ,  8\n");
	// char s2[50] = "Hello World";
	// printf("%s\n",ft_memchr(s2, 87, 8));
	// printf("%s", memchr(s2, 87, 8));
	// /*
	// ** MEMCMP
	// */
	// printf("\n\n--------MEMCMP------------");
	// printf("\n ft_memcmp : 'Hello World', 'Hello You', 8\n");
	// printf("%d\n", ft_memcmp("Hello World", "Hello You", 8));
	// printf("%d", memcmp("Hello World", "Hello You", 8));
	//
	// printf("\n ft_memcmp : 'Salut ca va', 'Salut et toi', 10\n");
	// printf("%d\n", ft_memcmp("Salut ca va", "Salut et toi", 10));
	// printf("%d", memcmp("Salut ca va", "Salut et toi",  10));
	//
	// printf("\n ft_memcmp : 'Hello World', ' ', 7\n");
	// printf("%d\n", ft_memcmp("Hello World", "", 7));
	// printf("%d", memcmp("Hello World", "", 7));
	//
	// printf("\n ft_memcmp : 'Hel', 'Hello', 2\n");
	// printf("%d\n", ft_memcmp("Hel", "Hello", 2));
	// printf("%d", memcmp("Hel", "Hello", 2));
	//
	// printf("\n ft_memcmp : '', 'Hello', 2\n");
	// printf("%d\n", ft_memcmp("", "Hello", 2));
	// printf("%d", memcmp("", "Hello", 2));
	// /*
	// ** MEMALLOC
	// */
	// printf("\n\n--------MEMALLOC------------");
	// printf("\n ft_memalloc : 8\n");
	// printf("%d\n", ft_memalloc(8));
	// printf("%d", memalloc(8));
	// /*
	// ** STRSUB
	// */
	// printf("\n\n--------STRSUB------------");
	// printf("\n ft_strsub : 'Salut ca va', 6, 2\n");
	// char search[50] = "Salut ca va";
	// printf("%s\n", ft_strsub(search, 6, 2));
	//
	// printf("\n ft_strsub : 'Hello World', 3, 5\n");
	// char search2[50] = "Hello World";
	// printf("%s\n", ft_strsub(search2, 3, 5));
	// /*
	// ** STRJOIN
	// */
	// printf("\n\n--------STRJOIN------------");
	// printf("\n ft_strjoin : 'Hello World ', 'Salut ca va'\n");
	// char string[50] = "Hello World ";
	// char concat[50] = "Salut ca va";
	// printf("%s\n", ft_strjoin(string, concat));
	//
	// printf("\n ft_strjoin : 'Hello', ' World, ca va?'\n");
	// char string2[50] = "Hello";
	// char concat2[50] = " World, ca va?";
	// printf("%s\n", ft_strjoin(string2, concat2));
	// /*
	// ** STRTRIM
	// */
	// printf("\n\n--------STRTRIM------------");
	// printf("\n ft_strtrim : '    Hello World '\n");
	// char strim[50] = "    Hello World ";
	// printf("%s\n", ft_strtrim(strim));
	//
	// printf("\n ft_strtrim : '   \\t Hello World '\n");
	// char strim2[50] = "   \t Hello World ";
	// printf("%s\n", ft_strtrim(strim2));
	//
	// printf("\n ft_strtrim : '    Hello   World \\v '\n");
	// char strim3[50] = "    Hello   World \v ";
	// printf("%s\n", ft_strtrim(strim3));
	// /*
	// ** STRSPLIT
	// */
	// printf("\n\n--------STRSPLIT------------");
	// printf("\n ft_strsplit : '*salut*les***etudiants*', '*'\n");
	// char split[50] = "*salut*les***etudiants*";
	// ft_print_words_tables(ft_strsplit(split, '*'));

	// printf("\n ft_strsplit : 'Bonjour++++tout+le+monde++bye', '+'\n");
	// char split2[50] = "Bonjour++++tout+le+monde++bye";
	// ft_print_words_tables(ft_strsplit(split2, '+'));

	return (0);
}
