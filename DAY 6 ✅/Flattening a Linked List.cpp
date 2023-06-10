Node * Merge ( Node* r1, Node* r2)
{ r1->next=NULL;
 Node* temp =new Node(0);
 Node* res=temp;
 
 while(r1 && r2)
 {
 if(r1->data<=r2->data)
 { 
 temp->bottom=new Node(0);
 temp->bottom->data=r1->data;
 r1=r1->bottom;
 
 }
 else{
 temp->bottom=new Node(0);
 temp->bottom->data=r2->data;
 r2=r2->bottom;
 }
 temp=temp->bottom;
 }
 
 while(r1)
 { temp->bottom=new Node(0);
 temp->bottom->data=r1->data;
 r1=r1->bottom;
 temp=temp->bottom;
 
 }
 
 while(r2)
 { temp->bottom=new Node(0);
 temp->bottom->data=r2->data;
 r2=r2->bottom;
 temp=temp->bottom;
 
 
 }
 return res->bottom;
}
Node *flatten(Node *root)
{ if(root==NULL || root->next==NULL) return root;
 if(root->next->next==NULL)
 { 
 root=Merge(root,root->next);
 root->next=NULL;
 return root;
 } 
 return Merge(root,flatten(root->next));
 }
