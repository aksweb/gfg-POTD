Node* deleteNode(Node *head,int x)
{
    //Your code here
    int i=1;
    Node* prev=head;
    Node* curr= head->next;
    if(x==1) return curr;
        
    while(curr!=NULL && i<x-1){
        i++;
        prev=curr;
        curr=curr->next;
    }
    prev->next= curr->next;
    
    delete curr;
    
    return head;

}