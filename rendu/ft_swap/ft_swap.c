/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:33:55 by codespace         #+#    #+#             */
/*   Updated: 2025/02/04 23:40:08 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
    int *tmp;

    tmp = a;
    a = b;
    b = tmp;
}


// int main(void)
// {
//     int a;
//     int b;

//     a = 0;
//     b = 0;
//     printf("%p", &a);
//     printf("%p\n", &b);
//     ft_swap(&a, &b);
//     return (0);
// }