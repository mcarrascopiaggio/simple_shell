#include "main.h"

/**
*print_list - prints all the elements of a list_t list.
*@h: pointer to a list_h
*Return:the number of nodes
*/

size_t print_list(const list_t *h)
{
size_t cnodes; /**counter of nodes*/

cnodes = 0;

if (h == NULL) /**if the structed pointed does not exist*/
	return (0);
else
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("%s\n",  h->str);
		}
		cnodes++;
		h = h->next; /** way to move from node to node */
	}
return (cnodes);

}

/**
* list_len - number of elements in a linked list_t list.
* @h: pointer to a list_t
*Return:the number of elements
*/

size_t list_len(const list_t *h)
{
size_t clist;

if (h == NULL)
	return (0);
clist = 0;
while (h)
{
	clist++;
	h = h->next;
}
return (clist);
}

/**
*add_node - function that adds a new node at the beginning.
*@head: new node
*@str: node to be copied
*Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node; /** create new node*/
int len_str = 0; /**var for count str*/

new_node = malloc(sizeof(list_t)); /**inicializated new_node*/
if (new_node == NULL)
	return (NULL);
for (len_str = 0; str[len_str] != 0; len_str++)
{/**count str for len*/
}
new_node->str = strdup(str);/**assign value a str of the new*/
new_node->next = *head;/**put the new node before the first*/
*head = new_node;/**redirectin the old first the new*/
return (new_node);
}

/**
*add_node_end - adds a new node at the end of a list_t list.
*@head: the first node
*@str: the string to be copy
*Return: a pointer to the new
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new; /**newnode to insert at the end*/
list_t *temp; /**temporay struct to tranfer the pointer*/
int l = 0;/**var for count*/

new = malloc(sizeof(list_t)); /**initializat  new*/
if (new == NULL)
	return (NULL);
for (l = 0; str[l] != 0; l++)
{
;
}
new->str = strdup(str);/**asignation*/
new->next = NULL;
if (*head == NULL)/**case exist only one node*/
{
	*head = new;
	return (new);
}
else
{
	temp = *head;
	while (temp->next != NULL) /**mov adresses trought nodes*/
	{
		temp = temp->next;
	}
temp->next = new;
}
return (new);
}

/**
 *free_list - is a function that free linked list
 *@head: is the header of the structure
 *Return: Nothing
 */

void free_list(list_t *head)
{
list_t *temp; /**var to save information for next address to free*/

while (head)
{
	temp = head; /**save head inf before advance*/
	head = head->next;/**move forward before free*/
	free(temp->str);/**free information saved in first step*/
	free(temp);/**free information saved in first step*/
}
}
