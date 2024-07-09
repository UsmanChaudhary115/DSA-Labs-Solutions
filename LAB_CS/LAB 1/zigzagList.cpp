void zigzagList(Node* head)
{
	if (head != nullptr)
	{
		bool isGreaterStatus = true;
		for (Node* temp = head->getNext();temp != nullptr;temp = temp->getNext())
		{
			if (isGreaterStatus)
			{
				Node* q = temp;
				for (Node* p = temp;p != nullptr;p = p->getNext())
				{
					if (p->getData() > q->getData())
					{
						q = p;
					}
				}
				int data = temp->getData();
				temp->setData(q->getData());
				q->setData(data);
				isGreaterStatus = false;
			}
			else
			{
				Node* q = temp;
				for (Node* p = temp;p != nullptr;p = p->getNext())
				{
					if (p->getData() < q->getData())
					{
						q = p;
					}
				}
				int data = temp->getData();
				temp->setData(q->getData());
				q->setData(data);
				isGreaterStatus = true;
			}
		}
	}
}