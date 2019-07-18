//cdc 3.3 Set of stacks which behaves as single stack


#include<iostream>
#include<stack>
#include<vector>

constexpr auto CAPACITY = 10;


using namespace std;

class SetOfStacks {
private:
	vector<stack<int>> st;
	int curridx = 1;
	stack<int> *currstk = new stack<int>;
public:
	/*
	SetOfStacks(int size) {
		vector<stack<int>> st;
	}
	*/
	void pushSetOfStacks(int d) {
		if (!st.empty()) {
			if ((st.back()).size() == CAPACITY) {
				stack<int> *stk1 = new stack<int>;
				st.push_back(*stk1);
			}
		}
		else if (st.empty()) {
			stack<int> *stk1 = new stack<int>;
			st.push_back(*stk1);
		}
		currstk = &st.back();
		(*currstk).push(d);
		return;
	}

	int popSetOfStacks() {
		if (!st.empty()) {
			currstk = &st.back();
			currstk->pop();
			if (currstk->empty()) {
				st.pop_back();
			}
		}
		else {
			cout << "Popping an empty Set of Stacks";
			return -1;
		}
		return;
	}

	int popAtSpecificIndex(int index) {
		int stk_idx = index % CAPACITY;
		int index_of_stk = 0;
		if (stk_idx < CAPACITY) {
			index_of_stk = index;
		}
		else {
			index_of_stk = index / CAPACITY;
		}
		if (stk_idx > st.size()) {
			return -1;
		}
		else {
			currstk = &st[stk_idx];
			if (index_of_stk > currstk->size()) {
				return -1;
			}
			else {
				stack<int>* currstk1 = new stack<int>;
				int ele = 0;
				while (currstk) {
					if (currstk->top() != index)
					if 
				}
			}
		}
	}
};

int main() {
	SetOfStacks s1;
	for (int i = 0; i < 25; i++) {
		s1.pushSetOfStacks(i);
	}
	s1.popSetOfStacks();

}
