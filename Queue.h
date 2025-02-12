
typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
   NodePtr new_node=(NodePtr) malloc(sizeof(Node));
 
if(new_node){ 
  new_node->data=x;
  new_node->nextPtr=NULL;
  if(q->size==0){//nodeแรก
      q->headPtr=new_node;
      q->tailPtr=NULL;
  }
  else{
      q->tailPtr->nextPtr=new_node;
  }
  q->tailPtr=new_node;
  q->size++;
  }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   if(q->size>0){
    q->headPtr=t->nextPtr;
   int value= t->data;
    if(q->size==1)
    {
      q->tailPtr=NULL;
    }
    free(t);
       q->size--;

   return value;
    }
   }
   else
   printf("Empty queue\n");
   
   return 0;
   
}

