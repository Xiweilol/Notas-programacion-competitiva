#include <bits/stdc++.h>

using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};



class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        //simular un stack
        vector<ListNode*> stk;

        //definir un head imaginario nunca lo removemos
        ListNode* dummy = new ListNode(100000,head);
        
        ListNode * now = head;

        stk.push_back(dummy);
        while(now){
            //mientra mi top es menor que el de nodo actual
            while(stk.back()->val < now->val){
                stk.pop_back();
            }
            stk.push_back(now);
            now = now->next;
        }

        //empezamos a apuntar los elementos del arreglo
        for(int i = 0; i < stk.size()-1;i++){
            stk[i] ->next = stk[i+1];
        }

        stk[stk.size()-1] ->next = NULL;
        return dummy->next;
    }
};
int main(){


}