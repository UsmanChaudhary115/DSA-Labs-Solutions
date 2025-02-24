Polynomial Polynomial::multiply(const Polynomial & other)
{
	if (other.data != nullptr && data != nullptr)
	{
		Polynomial resultant;
		for (int i = 0; i < noOfTerms; i++)
		{
			for (int j = 0; j < other.noOfTerms; j++)
			{
				int newCofficient = (data[i].getCofficient() * other.data[j].getCofficient());
				int newExponent = (data[i].getExponent() + other.data[j].getExponent());
				resultant.insert(newCofficient, newExponent);
			}
		}
		return resultant;
	}
	else
	{
		return Polynomial();
	}
}