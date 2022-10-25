
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef struct Queue
{
    Node *front;
    Node *rear;
    int count;
}Queue;

void initQueue(Queue *queue)
{
    queue->front = queue->rear=NULL;
    queue->count=0;
}

int isEmpty(Queue *queue)
{
    return queue->count==0;
}

int isWinner(Queue *queue)
{
    return queue->count==1;
}

void enqueue(Queue *queue, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if(isEmpty(queue))
    {
        queue->front = newNode;
    }
    else
    {
        queue->rear->next = newNode;
    }
    queue->rear = newNode;
    queue->count++;
}

int dequeue(Queue *queue)
{
    int data;
    Node *ptr;
    if(isEmpty(queue))
    {
        return 0;
    }
    ptr = queue->front;
    data = ptr->data;
    queue->front=ptr->next;
    free(ptr);
    queue->count--;
    
    return data;
}

int findTheWinner(int n, int k){
    
    Queue queue;
    initQueue(&queue);
    
    for(int i=0;i<n;i++)
    {
        enqueue(&queue, i+1);
    }
    
    while(!isWinner(&queue))
    {
        int turn=0;
        while(turn<k-1)
        {
            int temp = dequeue(&queue);
            enqueue(&queue, temp);
            turn+=1;
        }
        printf("%d ",dequeue(&queue));
    }
    
    return dequeue(&queue);
    
}

/*int whole=0;

int findwinner(int* loser, int start, int k, int count){
    if(count==1) return 0;
    else
    {
        int turn=0;
        while(turn<k)
        {
            if(loser[(start+1)%whole]!=-1) {
                start=(start+1)%whole;
                turn+=1;
            }
            else 
            {
                start = (start+1)%whole;
                continue;
            }
        }
        loser[start]=-1;
        count-=1;
        
        printf("%d %d\n", start, count);
        findwinner(loser, start, k, count);
    }
    return 0;
}

int findTheWinner(int n, int k){
    
    int* loser = (int*)malloc(sizeof(int)*(n));
    memset(loser, 0, sizeof(loser));
    whole=n;
    int start=0;
    
    findwinner(loser, -1, k, n);

    for(int i=0;i<n;i++)
    {
        if(loser[i]!=-1) return i+1;
    }
    
    return 0;
}*/