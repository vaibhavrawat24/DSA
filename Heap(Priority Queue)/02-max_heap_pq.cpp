//Max Heap Priority Queue

#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> quiz;
    quiz.push(20);
    quiz.push(30);
    quiz.push(50);
    quiz.push(1);

    cout<<quiz.top()<<endl;
    quiz.pop();
    cout<<quiz.top()<<endl;

    return 0;
}