'''
typedef struct {
    int data[MAX];
    int priority[MAX];
    int size;
} PriorityQueue pq;

void enqueue(PriorityQueue *pq, int value, int prio) {
    if (pq->size == MAX) {
        printf("Priority Queue is full!\n");
        return;
    }
    int i = pq->size - 1;
    while (i >= 0 && pq->priority[i] > prio) {
        pq->data[i + 1] = pq->data[i];
        pq->priority[i + 1] = pq->priority[i];
        i--;
    }
    pq->data[i + 1] = value;
    pq->priority[i + 1] = prio;
    pq->size++;
    printf("Element inserted successfully.\n");
}

void dequeue(PriorityQueue *pq) {
    if (pq->size == 0) {
        printf("Priority Queue is empty!\n");
        return;
    }
    int value = pq->data[0];
    for (int i = 0; i < pq->size - 1; i++) {
        pq->data[i] = pq->data[i + 1];
        pq->priority[i] = pq->priority[i + 1];
    }
    pq->size--;
    printf("Element with highest priority (%d) dequeued.\n", value);
}
'''
