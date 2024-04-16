/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:01:29 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/04/13 15:01:50 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    rotate_dlist(t_dlist **dlst, int n, int direction)
{
    t_dlist *tail, *new_head;
    int     len;

    if (!dlst || !*dlst || n == 0) // Keine Aktion nötig, wenn Liste leer oder keine Rotation
        return;

    len = ft_dlstsize(*dlst); // Verwende vorhandene Funktion, um die Länge zu berechnen
    n = n % len; // Reduziere n auf sinnvolle Werte
    if (n == 0)
        return;

    if (i == 1)  // Richtung der Rotation: 0 = vorwärts, 1 = rückwärts
        n = len - n;

    if (n == 0)
        return;

    // Gehe zur Trennstelle
    t_dlist *current = *dlst;
    for (int j = 0; j < len - n - 1; j++)
        current = current->next;

    new_head = current->next; // Neuer Kopf der Liste
    current->next = NULL; // Altes Ende der Liste
    new_head->prev = NULL;

    tail = (*dlst)->prev; // Alter Kopf der Liste
    tail->next = *dlst; // Verbinde das alte Ende mit dem alten Kopf
    (*dlst)->prev = tail;
    *dlst = new_head; // Aktualisiere den Listenkopf
}