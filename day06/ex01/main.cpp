#include <iostream>

typedef struct {
	int		a;
	char	c;
	float	d[2];
} Data;

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data		someData;
	uintptr_t	rawData;
	Data		*deserializedPtr;

	someData.a = 167;
	someData.c = 98;
	someData.d[0] = 42.42;
	someData.d[1] = 21.21;
	std::cout << "Data address is: " << &someData << std::endl;
	rawData = serialize(&someData);
	std::cout << "Data after serialization is: " << rawData << std::endl;
	deserializedPtr = deserialize(rawData);
	std::cout << "Data after deserialization is: " << deserializedPtr << std::endl;
	std::cout << "Data_a: " << deserializedPtr->a << " Data_c: " << deserializedPtr->c
	 << " Data_d[0]: " << deserializedPtr->d[0] << " Data_d[1]: " << deserializedPtr->d[1] << std::endl;
	return 0;
}
