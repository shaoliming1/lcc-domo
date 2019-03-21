#include<iostream>
using namespace std;

struct Node{
  int v;
  Node *next;
  Node(int x){
    v=x;
  }
};

int main(){
  Node a(10);
  Node b(5);
  Node c(1);

  a.next = &b;
  b.next = &c;
  c.next = NULL;

  Node *p=&a;
  Node **pp = &p;

  while((p=*pp)!=NULL){
    if(p->v==5)
      *pp=p->next;
    else
      pp=&p->next;
  }

  Node *p2 = &a;
  while(p2){

    cout<<p2->v<<endl;
    p2 = p2->next;
  }
  return 0;
}
