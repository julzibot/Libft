/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:31:31 by jibot             #+#    #+#             */
/*   Updated: 2021/10/26 20:48:22 by jibot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char	*ft_strnstr(const char *haystack,const char *needle, size_t len);
int	ft_atoi(const char *str);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

int main(int argc, char **argv)
{
	//char **ftab;
	//int i;
	(void) argc;
	//(void) argv;

	//i = 0;
	//printf("%s\n", ft_strnstr(argv[1], argv[2], 1));
	//printf("%s\n", strnstr(argv[1], argv[2], 1));
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	//printf("%s\n", ft_itoa(-58654649));
	/*ftab = ft_split(argv[1], '_');
	while (ftab[i])
	{
		printf("%s\n", ftab[i]);
		i++;
	}*/
	//ft_putnbr_fd(-98, 1);
	//printf("%s\n", ft_strjoin(argv[1], argv[2]));
	//printf("%s\n", ft_strtrim(argv[1], argv[2]));
	//printf("%s\n", ft_substr(argv[1], 3, 8));
}
