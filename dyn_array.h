#ifndef DYN_ARRAY
#define DYN_ARRAY

typedef struct DynamicArray {
    char** ItemTitles; // this will always be a string
    void** ItemDetails; // we don't know what we're storing
    size_t current_size; // this will be the allocated size for the current ItemDetail
    size_t amount_of_items;
} DynamicArray_;

#endif
