#include <iostream>
#include <string>
using namespace std;
struct Node{
    int val;
    Node *next;
};
void addElementAtTheEnd(Node *n, Node *e){
    Node *iter = n; 
    while(iter->next != nullptr){
        iter = iter->next;
    }
    iter->next = e;
}
void printElement(Node *n){
    Node *iter = n;
    bool flag = true;
    while(flag){
        cout << iter->val << " and " << iter->next << endl;
        if (iter->next != nullptr){
            iter = iter->next;
        }else{
            flag=false;
        }
    }
}
int main(){
    Node *start = nullptr;
    Node *temp = new Node();
    temp->val = 5;
    temp->next = nullptr;
    start = temp;
    temp = new Node();
    temp->val = 6;
    temp->next = nullptr;
    addElementAtTheEnd(start, temp);
    printElement(start);
    return 0;
}