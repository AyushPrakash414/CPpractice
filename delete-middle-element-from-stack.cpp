#include <bits/stdc++.h> 

void DeleteMiddle(stack<int>&inputStack,int count, int size){

        if (count==size/2){
            inputStack.pop();
            return;
        }

        int num=inputStack.top();
        inputStack.pop();

        DeleteMiddle(inputStack, ++ count,  size);
        inputStack.push(num);
        

}


void deleteMiddle(stack<int>&inputStack, int N){
	
        int count=0; 
        DeleteMiddle(inputStack,count,N);

}
