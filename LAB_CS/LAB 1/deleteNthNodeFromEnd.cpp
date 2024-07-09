void deleteNthNodeFromEnd(Node* head, int n)
{
	if (head != nullptr && n > 0)
	{
		while (head->getNext() != nullptr)
		{
			head = head->getNext();
		}
		int i = 0;
		while (i < n && head != nullptr)
		{
			if (head != nullptr && (i == n - 1))
			{
				if (head->getPrevious() == nullptr)
				{
					if (head->getNext() == nullptr)
					{
						delete head;
						head = nullptr;
					}
					else
					{
						head = head->getNext();			
						delete head->getPrevious();		
						head->setPrevious(nullptr);		
					}
				}
				else if (head->getNext() == nullptr)
				{
					if (head->getPrevious() == nullptr)
					{
						delete head;
						head = nullptr;
					}
					else
					{
						head = head->getPrevious();		
						delete head->getNext();			
						head->setNext(nullptr);			
					}
				}
				else
				{
					head->getPrevious()->setNext(head->getNext());
					head->getNext()->setPrevious(head->getPrevious());
					delete head;
					head = nullptr;
				}
			}
			else
			{
				head = head->getPrevious();
				i++;
			}
		}
	}
}