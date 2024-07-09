Node* reverseList(Node* head)
{
	List temp;
	while (head != nullptr)
	{
		temp.addToHead(head->getData());
		head = head->getNext();
	}
	cout << temp;
	return temp.getHead();
}