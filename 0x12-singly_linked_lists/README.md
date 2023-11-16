# C - singly linked lists

In this project, i practice building and using singly linked lists in c while learning when and why to use linked lists versus arrays

## Header File :file_folder:

* [lists.h](./lists.h): Header file containing definitions and prototypes for all
types and functions written for the project.

| Type/File          | Definition/Prototype                                                                   |
| ------------------ | -------------------------------------------------------------------------------------- |
| `struct list_s`    | <ul><li>`char *str`</li><li>`unsigned int len`</li><li>`struct list_s *next`</li></ul> |
| `typedef list_t`   | `struct list_s`                                                                        |
| `0-print_list.c`   | `size_t print_list(const list_t *h);`                                                  |
| `1-list_len.c`     | `size_t list_len(const list_t *h);`                                                    |
| `2-add_node.c`     | `list_t *add_node(list_t **head, const char *str);`                                    |
| `3-add_node_end.c` | `list_t *add_node_end(list_t **head, const char *str);`                                |
| `4-free_list.c`    | `void free_list(list_t *head)`                                                         |

## Tasks

* **0. Print list**

* **1. List length**

* **2. Add node**

* **3. Add node at the end**

* **4. Free list**

* **5. The hare and the tortoise**

* **6. Real programmers can write assembly code in any language**