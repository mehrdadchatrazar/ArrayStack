//
// Created by mehrdad on 11/18/18.
//

#ifndef ARRAYSTACK_ARRAYSTACK_H
#define ARRAYSTACK_ARRAYSTACK_H
#include <iostream>

using namespace std;

class AStack {
public:
    int S[5];
    int n = 5;
    int top = -1;
    void push(int);
    int pop();
    void print();
};
void AStack::push(int item){
    if (top == n - 1){
        cout<<"Stack is full"<<endl;
    } else {
        top++;
        S[top] = item;
    }
};
int AStack::pop(){
    if(top == -1){
        cout<<"Stack is empty"<<endl;
    } else {
        return S[top--];
    }
};
void AStack::print(){
    if(top == -1){
        cout<<"Stack is empty. nothing to print"<<endl;
    } else {
        for(int i=0 ; i <= top ; i++){
            cout<<S[i]<<"\t";
        }
        cout<<"\n";
    }

};
#endif //ARRAYSTACK_ARRAYSTACK_H
