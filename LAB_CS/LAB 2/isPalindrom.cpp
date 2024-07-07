bool isPalindrom(List list) 
{
	if (!list.isEmpty() && (list.getHead()->getNext() != nullptr))
	{
		bool status = true;
		List temp;
		Node* temp1 = list.getHead();
		Node* temp2 = list.getHead();
		while (temp2->getNext() != nullptr)
		{
			temp.addToHead(temp1->getData());
			temp2 = temp2->getNext();
			temp1 = temp1->getNext();
			if (temp2->getNext() != nullptr)
			{
				temp2 = temp2->getNext();
			}
		}
		while (!temp.isEmpty() && status)
		{
			if (temp.getHead()->getData() != temp1->getData())
			{
				status = false;
			}
			temp.deleteFromHead();
			temp1 = temp1->getNext();
		}
		if ((status && temp1 != nullptr) || (temp1 == nullptr && !temp.isEmpty()))
		{
			status = false;
		}
		return status;
	}
	else
	{
		return true;
	}
}