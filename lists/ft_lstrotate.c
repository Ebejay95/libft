/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:00:33 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/13 15:01:01 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_lstrotate(t_list **lst, int n, int direction)
{
    t_list  *tail, *new_head;
    int     len;

    if (!lst || !*lst || n == 0) // Keine Aktion nötig, wenn Liste leer oder keine Rotation
        return;

    len = ft_lstsize(*lst); // Verwende vorhandene Funktion, um die Länge zu berechnen
    n = n % len; // Reduziere n auf sinnvolle Werte
    if (n == 0)
        return;

    if (i == 1)  // Richtung der Rotation: 0 = vorwärts, 1 = rückwärts
        n = len - n;

    if (n == 0)
        return;

    tail = ft_lstlast(*lst); // Hole das letzte Element der Liste
    for (int j = 0; j < len - n - 1; j++) // Gehe zur Trennstelle
        *lst = (*lst)->next;

    new_head = (*lst)->next; // Neuer Kopf der Liste
    (*lst)->next = NULL; // Altes Ende der Liste
    tail->next = *lst; // Verbinde das alte Ende mit dem alten Kopf
    *lst = new_head; // Aktualisiere den Listenkopf
}