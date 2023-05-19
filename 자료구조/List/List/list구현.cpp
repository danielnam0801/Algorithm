#include <iostream>
#include <list>
using namespace std;

#pragma region "���Ḯ��Ʈ�� ���� �����ϱ�"
//struct NODE {
//    NODE* next;
//    int data;
//};
//
//void Push(int _data);
//int Pop();
//bool isEmpty();
//void printData();
//void Menu();
//NODE* s_top;
//
//int main() {
//    int data, nKey = 0;
//    while (true) {
//        Menu();
//        cin >> nKey;
//        cout << "\n";
//        switch (nKey) {
//        case 1:
//            cout << "Push : ";
//            cin >> data;
//            Push(data);
//            break;
//        case 2:
//            cout << "Pop : " << Pop() << endl;
//            break;
//        case 3:
//            printData();
//            break;
//        default:
//            cout << "�Է� ����" << endl;
//            break;
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//
//void Push(int _data) {
//    NODE* temp = new NODE;
//    temp->next = NULL;
//    temp->data = _data;
//    if (isEmpty()) {
//        s_top = temp;
//    }
//    else {
//        temp->next = s_top;
//        s_top = temp;
//        // ä����������(2��)
//    }
//}
//
//int Pop() {
//    if (isEmpty()) return -1;
//    NODE* delTemp = s_top;
//    int rData = delTemp->data;
//    // ä����������(2��)
//    //delete s_top;
//    //s_top = delTemp->next;
//    s_top = delTemp->next;
//    delete delTemp;
//
//    return rData;
//}
//
//void printData() {
//    if (isEmpty()) {
//        cout << "Stack is Empty" << endl;
//        return;
//    }
//    NODE* top = s_top;
//    for (; top != NULL; top = top->next) {
//        cout << "| " << top->data << " |" << endl;
//    }
//    cout << "-----" << endl;
//}
//
//bool isEmpty() { return s_top == NULL; }
//
//void Menu()
//{
//    cout << "1. Push" << endl;
//    cout << "2. Pop" << endl;
//    cout << "3. Show Stack" << endl;
//    cout << "INPUT : ";
//}
//#pragma endregion

#pragma region "���Ḯ��Ʈ�� ť �����ϱ�"
//struct NODE
//{
//    NODE* next;
//    int data;
//};
//void enQueue(int _data);
//int deQueue();
//void printData();
//bool isEmpty();
//void Menu();
//NODE* q_front;
//NODE* q_rear;
//int q_count;
//int main()
//{
//    int data, nKey = 0;
//    while (true)
//    {
//        Menu();
//        cin >> nKey;
//        cout << "\n";
//        switch (nKey)
//        {
//        case 1:
//            cout << "Enqueue: ";
//            cin >> data;
//            enQueue(data);
//            cout << "log >> s_count : " << q_count << endl;
//            break;
//        case 2:
//            cout << "Dequeue: " << deQueue() << endl;
//            break;
//        case 3:
//            printData();
//            break;
//        default:
//            cout << "�Է� ����" << endl;
//            break;
//        }
//        cout << "\n";
//    }
//    return 0;
//}
//void enQueue(int _data)
//{
//    NODE* temp = new NODE;
//    temp->next = NULL;
//    temp->data = _data;
//    if (isEmpty()) {
//        q_front = temp;
//        q_rear = temp;
//    }
//    else {
//        q_rear->next = temp;
//        q_rear = temp;
//        // ä����������(2��)
//    }
//    q_count++;
//}
//int deQueue()
//{
//    if (isEmpty()) {
//        cout << "\nQueue is Empty\n\n";
//        return -1;
//    }
//    NODE* delTemp = q_front;
//    int rData = delTemp->data;
//    // ä����������(2��)
//    q_front = delTemp->next;
//    delete delTemp;
//    q_count--;
//    return rData;
//}
//
//void printData()
//{
//    if (isEmpty())
//    {
//        cout << "\nQueue is Empty\n\n";
//        return;
//    }
//    NODE* front = q_front;
//    for (; front != NULL; front = front->next)
//        cout << front->data << " ";
//    cout << endl;
//}
//bool isEmpty() { return q_count == 0; }
//
//void Menu()
//{
//    cout << "1. Enqueue" << endl;
//    cout << "2. Dequeue" << endl;
//    cout << "3. Show Queue" << endl;
//    cout << "INPUT : ";
//}
#pragma endregion 

#pragma region "stl list ����"
//int main()
//{
//	// list ���� 
//	list <int> l1;
//	list <int> l2(5, 3); // 5���� ���Ҹ� 3���� �ʱ�ȭ
//	list <int> l3{2,4}; // 2, 4�� �ʱ�ȭ
//
//	// �� �߰�
//	l3.push_front(1); // ����Ʈ�� �� �տ� �� �߰�
//	l3.push_back(5); // ����Ʈ�� �� ���� �� �߰�
//	list<int>::iterator iter = l3.begin(); // �ݺ��ڰ� ù��° ���� ����Ŵ
//	iter++; // �ι�° �� ����Ŵ
//	iter++;// ����° �� ����Ŵ
//	l3.insert(iter, 3); // �ݺ��ڰ� ����Ű�� ���� �� �߰�
//
//	for (auto n : l3)
//	{
//		cout << n;
//	}
//	cout << endl;
//
//	// �� ���� 
//	l3.pop_front(); // ����Ʈ �� �� ���� 
//	l3.pop_back(); // ����Ʈ �� �� ����
//	cout << l3.size() << endl; // ����Ʈ�� ��� �ִ� ���� ���� ��ȯ
//	cout << l3.empty() << endl; // ����Ʈ�� ��������� 1, �ƴϸ� 0 ��ȯ
//	l3.erase(iter); // �ݺ��ڰ� ����Ű�� ���� �����ϰ� �� ���� ������ ��ġ�� ��ȯ
//
//	for (auto n : l3)
//	{
//		cout << n;
//	}
//
//}
#pragma endregion


