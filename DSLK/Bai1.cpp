#include <bits/stdc++.h>

using namespace std;

struct Node{
	int x;
	Node *next;
};

typedef Node* node;

node taoNode(int data){
	node tmp = new Node();
	tmp->x = data;
	tmp->next = NULL;
}

int size(node head){
	int dem = 0;
	while(head != NULL){
		dem++;
		head = head->next;
	}
	return dem;
}

void display(node head){
	while(head != NULL){
		cout << head->x << ' ';
		head = head->next;
	}
	cout << endl;
}

void themdau(node &head, int data){
	node moi = taoNode(data);
	if(head == NULL){
		head = moi;
	}
	else{
		moi->next = head;
		head = moi;
	}
}

void themcuoi(node &head, int data){
	node moi = taoNode(data);
	if(head == NULL){
		head = moi;
	}
	else{
		node tmp = head;
		while(tmp->next != NULL){
			tmp = tmp->next;
		}
		tmp->next = moi;
	}
}

void themgiua(node &head, int data, int vitri){
	node moi = taoNode(data);
	int n = size(head);
	if(vitri < 1 || vitri > n + 1){
		cout << "Vi tri chen khong hop le !\n";
		return;
	}
	if(vitri == 1){
		themdau(head, data);
	}
	else if(vitri == n + 1){
		themcuoi(head, data);
	}
	else{
		node tmp = head;
		int cnt = vitri - 2;
		while(cnt--){
			tmp = tmp->next;
		}
		moi->next = tmp->next;
		tmp->next = moi;
	}
}

void sapxep(node head){
	vector<int> ve; node tmp = head;
	while(head != NULL){
		ve.push_back(head->x);
		head = head->next;
	}
	sort(ve.begin(), ve.end()); int i = 0;
	while(tmp != NULL){
		tmp->x = ve[i++];
		cout << tmp->x << ' ';
		tmp = tmp->next;
	}
	cout << endl;
}

void xoadau(node &head){
	if(head == NULL){
		cout << "dslk rong !\n";
		return;
	}
	node tmp = head;
	head = head->next;
	delete tmp;
}

void xoacuoi(node &head){
	if(head == NULL){
		cout << "dslk rong !\n";
		return;
	}
	node p = head; node q = NULL;
	while(p->next != NULL){
		q = p;
		p = p->next;
	}
	delete p;
	if(q == NULL){
		head = NULL;
	}
	else{
		q->next = NULL;
	}
}

void xoagiua(node &head, int vitri){
	int cnt = size(head);
	if(vitri < 1 || vitri > cnt){
		cout << "vi tri khong hop le !\n";
	}
	node p = head; node q = NULL;
	for(int i = 1; i <= vitri - 1; i++){
		q = p;
		p = p->next;
	}
	if(q != NULL){
		q->next = p->next;
	}
	else{
		head = p->next;
	}
	delete p;
}

bool timkiem(node head, int val){
	int linhcanh = head->x;
	if(linhcanh == val){
		return 1;
	}
	else{
		head = head->next;
		while(head->next != NULL){
			if(head->x == val){
				return 1;
			}
			head = head->next;
		}
		if(head->x == val){
			return 1;
		}
	}
	return 0;
}

void empty(node &head){
	node tmp = head;
	while(tmp->next != NULL){
		node s = tmp;
		tmp = tmp->next;
		delete s;
	}
	delete tmp;
	head = NULL;
}

int main(){
	node head = NULL;
	while(1){
		system("cls");
		cout << "--------------Menu--------------\n";
		cout << "1.them mot node vao dau danh sach\n";
		cout << "2.them mot node vao cuoi danh sach\n";
		cout << "3.them mot node vao vi tri nao do\n";
		cout << "4.hien thi danh sach\n";
		cout << "5.sap xep tang dan dslk\n";
		cout << "6.xoa dau danh sach mot node\n";
		cout << "7.xoa cuoi danh sach mot node\n";
		cout << "8.xoa mot not bat ky trong danh sach\n";
		cout << "9.tim kiem mot phan tu trong danh sach\n";
		cout << "0.reset dslk\n";
		cout << "--------------------------------\n";
		while(1){
			cout << "nhap lua chon: "; int n; cin >> n;
			if(n == 1){
				cout << "nhap gia tri: "; int data; cin >> data;
				themdau(head, data);
			}
			else if(n == 2){
				cout << "nhap gia tri: "; int data; cin >> data;
				themcuoi(head, data);
			}
			else if(n == 3){
				cout << "nhap gia tri: "; int data; cin >> data;
				cout << "nhap vi tri: "; int vitri; cin >> vitri;
				themgiua(head, data, vitri);
			}
			else if(n == 4){
				cout << "danh sach lien ket: ";
				display(head);
			}
			else if(n == 0){
				empty(head);
				break;
			}
			else if(n == 5){
				cout << "danh sach da sap xep: ";
				sapxep(head);
			}
			else if(n == 6){
				cout << "hoan tat\n";
				xoadau(head);
			}
			else if(n == 7){
				cout << "hoan tat\n";
				xoacuoi(head);
			}
			else if(n == 8){
				cout << "nhap vao gia tri: ";
				int x; cin >> x;
				cout << "hoan tat\n";
				xoagiua(head, x);
			}
			else if(n == 9){
				cout << "nhap vao gia tri: ";
				int x; cin >> x;
				if(timkiem(head, x)){
					cout << "tim thay !\n";
				}
				else{
					cout << "khong tim thay !\n";
				}
			}
			cout << endl;
		}
		system("pause");
	}
	return 0;
}

