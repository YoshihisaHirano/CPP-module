#ifndef __SPAN_H__
#define __SPAN_H__
#include <vector>

class Span
{
private:
	std::vector<int>	data;
	unsigned int		size;

public:
	Span();
	Span(unsigned int n);
	Span(const Span &other);
	~Span();

	template <typename Iterator>
	void	addInRange(const Iterator &begin, const Iterator &end)
	{
		if (data.size() + std::distance(begin, end) > size)
			throw std::out_of_range("Not enough capacity!");
		data.insert(data.end(), begin, end);
	}

	Span&	operator=(const Span &other);
	void	addNumber(int number);
	int		shortestSpan() const;
	int		longestSpan() const;
};

#endif // __SPAN_H__