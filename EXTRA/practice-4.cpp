// #include <iostream>
// using namespace std;

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         ListNode dummy(0, head);
//         ListNode *prev = &dummy, *cur = head;

//         while (cur && cur->next) {
//             ListNode *npn = cur->next->next;
//             ListNode *second = cur->next;

//             second->next = cur;
//             cur->next = npn;
//             prev->next = second;

//             prev = cur;
//             cur = npn;
//         }
//         return dummy.next;        
//     }
// };

// void printList(ListNode* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
    
//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);
//     head->next->next->next = new ListNode(4);

//     cout << "Original list: ";
//     printList(head);

//     Solution sol;
//     ListNode* swapped = sol.swapPairs(head);

//     cout << "After swapping: ";
//     printList(swapped);

    
//     while (swapped) {
//         ListNode* temp = swapped;
//         swapped = swapped->next;
//         delete temp;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;



class solution{
    public:
    double myPow(double x, int n){
        if(n==0)return 1.0;
        if(x==0)return 0.0;
        if(x==1)return 1.0;
        if(x==-1 && n%2 ==0) return 1.0;
        if(x==-1 && n%2 !=0) return -1.0;

        long binForm = n;
        if(n<0){
            x=1/x;
            binForm = -binForm;
        }

        double ans= 1;
        while(binForm>0){
            if(binForm %2 ==1){
                ans *=x;
            }
            x *= x;
            binForm /=2;
        }
        return ans;
    }

};

int main(){
    solution sol;
    double x=5.0;
    int n=2;
    cout<<sol.myPow(x,n)<<endl;
    return 0;
}