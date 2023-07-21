/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 12:25:43 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/22 15:48:06 by mqueguin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_do_op(int nbr1, char **av, int nbr2);
int		ft_addition(int nbr1, int nbr2);
int		ft_soustraction(int nbr1, int nbr2);
int		ft_multiplication(int nbr1, int nbr2);
int		ft_division(int nbr1, int nbr2);
int		ft_modulo(int nbr1, int nbr2);

#endif
