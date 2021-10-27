#ifndef my_list
#define my_list

    typedef struct linked_list_t
    {
        int value;
        struct linked_list_t *next;
    } linked_list_t;

#endif