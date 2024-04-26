#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
   stack<int >Stack;

   while(!myStack.empty()){
       Stack.push(myStack.top());
       myStack.pop();
   }
   Stack.push(x);
   while(!Stack.empty()){
       myStack.push(Stack.top());
       Stack.pop();
   }
   return myStack;
}
