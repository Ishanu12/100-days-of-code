void deleteNode(Node *node)
{
   if(node==NULL)
   {
       return;
   }
   else
   {
        if(node->next==NULL)
        {
            return;
            
        }
        Node* ptr=node->next;
        node->data=node->next->data;
        node->next=node->next->next;
        free(ptr);
   }
}
