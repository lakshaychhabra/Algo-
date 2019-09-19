Node *flatten(Node *root)
{
   // Your code here
   if(root == NULL){
       return root;
   }
   vector<int> v;
   Node *temp = root;
   Node *nexxt = root->next;
   
   while(temp->next != NULL){
       nexxt = temp->next;
       
       while(temp->bottom!=NULL){
           v.push_back(temp->data);
           temp = temp->bottom;
       }
       
       v.push_back(temp->data);
       temp->bottom = nexxt;
       temp = temp->bottom;
   }
   while(temp->bottom != NULL)
   {
        v.push_back(temp->data);
        temp = temp->bottom;
   }
   v.push_back(temp->data);
   sort(v.begin(), v.end());
   Node *g = root;
   Node *test = new Node(v.size());
   for(int i = 0; i<v.size(); i++)
   {
       g->data = v[i];
       g = g->bottom;
   }
   return root;
   
}