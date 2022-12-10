# **0x17. C - Doubly linked lists**

## **Description**

In this project I've learned what doubly linked lists are, and how to use them.

## **Header**

[lists.h: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/lists.h) contains structure of the linked list and prototype declarations.

## **Test ✔️**

[test: ](https://github.com/Bantamlak12/alx-low_level_programming/tree/master/0x17-doubly_linked_lists/test)A test folder provided by alx_africa in partnership with Holberton school.


## **Tasks 📃**

- **0. Print list**

  - [0-print_dlistint.c: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/0-print_dlistint.c)is a function that prints all the elements of a `dlistint_t` list.

  * **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
  * Return: the number of nodes.

* **1. List length**

  - [1-dlistint_len.c: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/1-dlistint_len.c)is a function that returns the number of elements in a linked `dlistint_t` list.

  * **Prototype:** `size_t dlistint_len(const dlistint_t *h);`

* **2. Add node**

  - [2-print.py: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/2-add_dnodeint.c) is a function that adds a new node at the beginning of a `dlistint_t` list.

  * **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
  * Return: the address of the new element, or `NULL` if it failed.

* **3. Add node at the end**

  - [3-add_dnodeint_end.c: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/3-add_dnodeint_end.c)is a function that adds a new node at the end of a `dlistint_t` list.

  * Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
  * Return: the address of the new element, or `NULL` if it failed

* **4. Free list**

  - [4-free_dlistint.c: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/4-free_dlistint.c)is a function that frees a `dlistint_t` list.

  * **Prototype:** `void free_dlistint(dlistint_t *head);`

* **5. Get node at index**

  - [5-get_dnodeint.c: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/5-get_dnodeint.c)is a function that returns the nth node of a `dlistint_t` linked list.

  * **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
  * if the node does not exist, return `NULL`

* **6. Sum list**

  - [6-sum_dlistint.c: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/6-sum_dlistint.c)is a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

  * **Prototype:** `int sum_dlistint(dlistint_t *head);`
  * if the list is empty, return `0`

* **7. Insert at index**

  - [7-insert_dnodeint.c: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/7-insert_dnodeint.c) is a function that inserts a new node at a given position.

  * **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
  * Returns: the address of the new node, or `NULL` if it failed.
  * if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

* **8. Delete at index**

  - [8-delete_dnodeint.c: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/8-delete_dnodeint.c)is a function that deletes the node at index `index` of a `dlistint_t` linked list.

  * **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
  * Returns: `1` if it succeeded, `-1` if it failed

* **9. Crackme4**

  - [100-password: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/100-password)the password for [crackme4](https://github.com/holbertonschool/0x17.c)

* **10. Palindromes**

  - [102-result: ](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/102-result)is the largest palindrome made from the product of two 3-digit numbers.
