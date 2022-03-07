#include "Span.hpp"
#include <exception>
#include <algorithm>

Span::Span() : size(0)
{
}

Span::Span(unsigned int n) : size(n)
{
}

Span::Span(const Span &other) : size(other.size)
{
	data.resize(other.size);
	std::copy(other.data.begin(), other.data.end(), data.begin());
}

Span::~Span()
{
}

Span& Span::operator=(const Span &other)
{
	size = other.size;
	data.clear();
	data.resize(other.size);
	std::copy(other.data.begin(), other.data.end(), data.begin());
	return *this;
}

void Span::addNumber(int number)
{
	if (data.size() < size) {
		data.push_back(number);
		std::sort(data.begin(), data.end());
	} else {
		throw std::overflow_error("You cannot add more to this span!");
	}
}

int Span::shortestSpan() const
{
	if (data.size() <= 1)
		throw std::underflow_error("Not enough elements for a span!");
	int	minSpan = INT_MAX;
	std::vector<int>::const_iterator it = data.cbegin();
	std::vector<int>::const_iterator itEnd = data.cend();

	for (; (it + 1) != itEnd; ++it) {
		int currMin = *(it + 1) - *it;
		if (currMin < minSpan)
			minSpan = currMin;
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (data.size() <= 1)
		throw std::underflow_error("Not enough elements for a span!");
	return (data.back() - data.front());
}