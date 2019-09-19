// I/P : 4
// 1 2 3 4 5 6 7 8
// O/P : 4 3 2 1 8 7 6 5

struct node *reverse (struct node *head, int k)
{ 
    stack<int> s;
    while(head != NULL){
        for(int i = 0; i<k;i++){
            if(head == NULL){
                break;
            }
            s.push(head->data);
            head = head->next;
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
     return NULL;
    
}