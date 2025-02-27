#include"Stack.h"
#include"Calculator.h"
#include<iostream>
using namespace std;
//struct Point
//{
//	int row, col;
//	Point(int r, int c) :row(r), col(c)
//	{}
//};
//void findTreasure(const char maze[5][7], Point start)
//{
//	Stack<Point> st;
//	st.push(start);
//
//}
int main()
{
	/*Stack<int> s;
	s.push(1);
	cout << s.pop() << endl;
	cout<<s.isEmpty();*/
	String s = "(A+B)+B*D/A-(A/B)";
	Calculator cl{s,','};
	
	cout << cl.infixToPostfix();
	return 0;
}