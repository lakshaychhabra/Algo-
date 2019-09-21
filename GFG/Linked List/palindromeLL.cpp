bool isPalindrome(Node *head)
{
    //Your code here
    stack<int> s;
    Node* temp = head;
    while(temp!=NULL){
        s.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(!s.empty()){
        if(temp->data == s.top()){
            s.pop();
            temp = temp->next;
        }
        else return false;
    }
    return true;
}