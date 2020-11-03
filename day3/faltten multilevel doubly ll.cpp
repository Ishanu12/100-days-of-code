class Solution {
public:
    Node* flatten(Node* head)
    {
        if(head==NULL)
        {
            return NULL;
        }
        
        Node* headAns = NULL;
        Node* tailAns = NULL;
        
        Node* ptr=head;
        stack<Node*> s;
        while(ptr!=NULL || !s.empty())
        {
            // Insertion   
            Node* node=new Node(ptr->val, NULL, NULL, NULL);
            if(headAns == NULL){
                headAns = node;
                tailAns = node;
            }
            else{
                tailAns->next = node;
                node->prev = tailAns;
                tailAns = node;
            }
          
            if(ptr->child != NULL)
            {
                if(ptr->next != NULL){
                    s.push(ptr->next);
                }
                ptr=ptr->child;
            }
            
            else if(ptr->next != NULL)
            {
                ptr=ptr->next;
            }
            else if(!s.empty())
            {
                ptr=s.top();
                s.pop();
            }
            else
            {
                break;
            }
        }
        return headAns;
    }
};