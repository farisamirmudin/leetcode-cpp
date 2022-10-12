#include <iostream>
#include <vector>

using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
int main(){
   int a[] = {1,2,3,4,5,6};
    vector<int> b = {1,2,3,4,5,6};
   cout << size(a) << endl;
   cout << b.size() << endl;
}
