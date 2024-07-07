int removeEveryMthNodes(CDLL& list,int m)
{
	if (m > 0)
	{
		while (list.getHead()->next != list.getHead())
		{
			for (int i = 1;i < m;i++)
			{
				list.setHead(list.getHead()->next);
			}
			Node* p = list.getHead();
			list.getHead()->previous->next = list.getHead()->next;
			list.getHead()->next->previous = list.getHead()->previous;
			list.setHead(list.getHead()->next);
			delete p;
			p = nullptr;
		}
		int data = list.getHead()->data;
		return data;
	}
	exit(0);
}