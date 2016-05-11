#include<iostream>
using namespace std;

#include<stack>

template<class T>
class Queue
{
public:
	void appendTail(const T& node)
	{
		//stack1ֻ�������ӣ�stack2��������
		stack1.push(node);
	}

	void DeleteHead()
	{
		if (stack2.size() <= 0)//����stack2Ϊ�յ�ʱ�����
		{
			while (stack1.size() > 0)
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
		}

		if (stack.size() == 0)//��������stack��Ϊ�յ����
			return;

		stack2.pop();
	}

protected:
	stack<T> stack1;
	stack<T> stack2;

};
