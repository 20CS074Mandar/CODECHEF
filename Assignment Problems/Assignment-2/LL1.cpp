#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
int getNthNodeFromEnd(struct Node* head, int n){
        int length=0;
        struct Node* ptr=head;
        while (ptr!=NULL)
        {
                ptr=ptr->next;
                length++;
        }
        ptr=head;
        for (int i = 0; i < length-n; i++)
        {
                ptr=ptr->next;
        }
        return ptr->data;
                       
}
int main()
{
        //This file is for git hum demo.
        
        return 0;
}