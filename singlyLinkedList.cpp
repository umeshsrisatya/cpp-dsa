#include<bits/stdc++.h>
using namespace std;
#define ll long long;

class Node{
public:
	int data;
	Node* next;
public:
	Node(int d,Node* n){
		data=d;
		next=n;
	}
public:
	// constructor overloading
	Node(int n){
		data=n;
		next=nullptr;
	}
};
// convert array to ll,search ,count ,print
// 1/array to ll
Node* arrayToLL(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* mover=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		mover->next=temp;//link 
		mover=mover->next;//traveral
	}
	return head;
}

void printLL(Node* head){
	Node* mover =head;
	while(mover){
		cout<<mover->data<<endl;
		mover=mover->next;
	}
}

int countLL(Node* head){
	Node* temp=head;
	int cnt=0;
	while(temp){
		cnt++;
		temp=temp->next;
	}
	return cnt;
}
bool searchLL(Node* head,int data1){
	Node* temp=head;
	while((temp->next)!=nullptr){
		if((temp->data)==data1) return true;
		temp=temp->next;
	}
	return false;
}

Node* deleteHEad(Node*head){
	if(head == nullptr) return head;
	Node* temp=head;
	head=head->next;
	free(temp);
	// delete temp ; in java we have garbage collector it will delte the un used variables
	return head;
}

Node* deleteTail(Node* head){
	Node* temp=head;
	if((head==nullptr)||(head->next==nullptr)) return nullptr;
	while((temp->next->next)!=nullptr){
		temp=temp->next;
	}
	Node* tail=temp->next;
	free(tail);
	temp->next=nullptr;
	return head;
}
Node* deleteK(Node* head,int k){
	if(head==nullptr){return head;} 
	if(k==1){
		Node* temp=head;
		head=head->next;
		free(temp);
		return head;
	}
		int cnt=0;
		Node* temp=head;
		Node* prev=nullptr;
		while(temp!=nullptr){
			cnt+=1;
			if(cnt==k){
				prev->next=prev->next->next;
				free(temp);
				break;
			}
			prev=temp;
			temp=temp->next;
		}
	return head;
}
Node* deletevalue(Node* head,int k){
	if(head==nullptr){return head;} 
	if(head->data==k){
		Node* temp=head;
		head=head->next;
		free(temp);
		return head;
	}
		Node* temp=head;
		Node* prev=nullptr;
		while(temp!=nullptr){
			if((temp->data)==k){
				prev->next=prev->next->next;
				free(temp);
				break;
			}
			prev=temp;
			temp=temp->next;
		}
	return head;
}

Node* insertBegin(Node* head,int data1){
	Node* temp=new Node(data1);
	temp->next=head;
	head=temp;
}
Node* insertEnd(Node* head,int data1){
	if(head==nullptr)return new Node(data1);
	Node* temp=new Node(data1);
	Node* mover=head;
	while((mover->next)!=nullptr){
		mover=mover->next;
	}
	mover->next=temp;
	return head;
}

Node* insertK(Node* head,int data1,int pos){
	if(head==nullptr){
		if(pos==1){
			return new Node(data1);
		}
		return head;
	}
	if(pos==1){
		// Node* temp=new Node(data1);
		// temp->next=head;
		// head=temp;
		// return head;
		return new Node(data1,head);
	}
	int count =0;
	Node* temp=head;
	while(temp!=nullptr){
		count++;
		if(count==(pos-1)){
			Node* node=new Node(data1,temp->next);
			temp->next=node;
			break;
		}
		temp=temp->next;
	}
	return head;
}

Node* insertBeforeValue(Node* head,int data1,int value){
	if(head==nullptr){
		return nullptr;
	}
	if(head->data==value){
		return new Node(data1,head);
	}
	Node* temp=head;
	while((temp->next)!=nullptr){
		if((temp->next->data)==value){
			Node* x=new Node(data1,temp->next);
			temp->next=x;
			break;
		}
		temp=temp->next;
	}
	return head;
}
int main (){
	vector<int> v={1,2,3,4,5};
	Node* head=arrayToLL(v);
	head=insertK(head,6,6);
	head=insertBeforeValue(head,55,6);
	printLL(head);
	return 0;
} 
