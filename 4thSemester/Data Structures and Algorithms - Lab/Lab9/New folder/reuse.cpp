/*** Queue Functions ***/

WINDOW_TYPE Head(LIST_TYPE *queue) {
    return first(queue);
}

void Enqueue(ELEMENT_TYPE e, LIST_TYPE *queue) {
    insert(e, end(queue), queue);
}

void Dequeue(LIST_TYPE *queue) {
    if (!is_empty(queue))
        Delete(first(queue), queue);
}

/*** Stack Functions ***/

WINDOW_TYPE Top(LIST_TYPE *stack) {
    return last(stack);
}

void Push(ELEMENT_TYPE e, LIST_TYPE *stack) {
    insert(e, end(stack), stack);
}

void Pop(LIST_TYPE *stack) {
    if (!is_empty(stack))
        Delete(last(stack), stack);
}

int main() {
    WINDOW_TYPE w;
    ELEMENT_TYPE e;
    LIST_TYPE list;
    
    empty(&list);
    
    // Queue Operations
    printf("Queue Operations:\n");
    assign_element_values(&e, 1, "String A");
    Enqueue(e, &list);
    print(&list);
    
    assign_element_values(&e, 2, "String B");
    Enqueue(e, &list);
    print(&list);
    
    w = Head(&list);
    e = retrieve(w, &list);
    printf("Head: %d %s\n", e.number, e.string);
    
    Dequeue(&list);
    print(&list);
    
    w = Head(&list);
    e = retrieve(w, &list);
    printf("Head: %d %s\n", e.number, e.string);
    
    Dequeue(&list);
    print(&list);
    
    // Stack Operations
    printf("Stack Operations:\n");
    assign_element_values(&e, 3, "String C");
    Push(e, &list);
    print(&list);
    
    assign_element_values(&e, 4, "String D");
    Push(e, &list);
    print(&list);
    
    w = Top(&list);
    e = retrieve(w, &list);
    printf("Top: %d %s\n", e.number, e.string);
    
    Pop(&list);
    print(&list);
    
    w = Top(&list);
    e = retrieve(w, &list);
    printf("Top: %d %s\n", e.number, e.string);
    
    Pop(&list);
    print(&list);
    
    return 0;
}