#include <iostream>
using namespace std;

struct Node{
    int dato;

    Node *next;

};

void newDish(Node *&stack,int n);
void eliminate_node(Node *&stack,int &n);
void showNodes(Node *&stack);

int main(){

    Node *stac = NULL;
    int n,elemts,nElements;
    cout<<"\n*How elements do you want?*\n";
    cin>>nElements;
    for(int i = 0; i < nElements ;i++){
        cout<<"\n introduce the element\n";
        cin>>elemts;
        newDish(stac,elemts);
    }
    showNodes(stac);
    cout<<"\n Eliminating pile"; 
    while (stac != NULL){
        eliminate_node(stac,n);
        if(stac != NULL){
            cout<<endl<<n<<","<<endl;

        }else{
            cout<<endl<<n<<"."<<endl;
        }
    }
    

    return 0;
}
void eliminate_node(Node *&stack,int &n){
    Node *aux = stack;
    n = aux -> dato;
    aux -> next;
    stack = aux -> next;
    delete aux;
}
void newDish(Node *&stack, int n){

    Node *newNode = new Node();

    newNode -> dato = n;
    newNode->next = stack;
    stack = newNode;

    cout<<n;
    cout<<newNode;

}
void showNodes(Node *&stack){
    while(stack!=NULL){
        cout<<endl<<"some Stacks"<<endl;
        cout<<stack->dato<<endl;
        stack = stack -> next; 
        cout<<"\n===========================================\n";
    }
}