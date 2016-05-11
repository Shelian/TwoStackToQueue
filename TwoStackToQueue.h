#include<iostream>
using namespace std;

#include<stack>

template<class T>
class Queue
{
public:
	void appendTail(const T& node)
	{
		//stack1只用来出队，stack2用来出队
		stack1.push(node);
	}

	void DeleteHead()
	{
		if (stack2.size() <= 0)//处理stack2为空的时候情况
		{
			while (stack1.size() > 0)
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
		}

		if (stack.size() == 0)//处理两个stack都为空的情况
			return;

		stack2.pop();
	}

protected:
	stack<T> stack1;
	stack<T> stack2;

};
